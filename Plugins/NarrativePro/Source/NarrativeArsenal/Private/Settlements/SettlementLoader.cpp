// Copyright Narrative Tools 2024. 


#include "Settlements/SettlementLoader.h"
#include "Settlements/SettlementSubsystem.h"
#include "Settlements/Settlement.h"
#include "Components/BillboardComponent.h"
#include "NarrativeLogChannels.h"
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "NarrativeNavigationComponent.h"
#include <GameFramework/Controller.h>
#include "Engine/World.h"

// Sets default values
ASettlementLoader::ASettlementLoader()
{

	SettlementLoaderRoot = CreateDefaultSubobject<USceneComponent>("SettlementLoaderRoot");
	SetRootComponent(SettlementLoaderRoot);

#if WITH_EDITOR
	SetIsSpatiallyLoaded(true);

	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));

	if (SpriteComponent)
	{
		auto SettlementIconFinder = ConstructorHelpers::FObjectFinder<UTexture2D>(TEXT("/Script/Engine.Texture2D'/NarrativePro/Misc/Icons/T_SettlementLoader.T_SettlementLoader'"));
		if (SettlementIconFinder.Succeeded())
		{
			SpriteComponent->SetSprite(SettlementIconFinder.Object);
		}

		SpriteComponent->SetRelativeScale3D_Direct(FVector(2.f, 2.f, 2.f));
		SpriteComponent->bIsScreenSizeScaled = true;
		SpriteComponent->SetupAttachment(GetRootComponent());
	}

#endif 
}

class ASettlement* ASettlementLoader::GetSettlement() const
{
	if (USettlementSubsystem* SettlementSubsystem = GetWorld()->GetSubsystem<USettlementSubsystem>())
	{
		if (ASettlement* Settlement = SettlementSubsystem->GetSettlement(SettlementToLoad))
		{
			return Settlement;
		}
	}

	return nullptr; 
}

// Called when the game starts or when world partition streams loader in 
void ASettlementLoader::BeginPlay()
{
	Super::BeginPlay();
	
	if (ASettlement* Settlement = GetSettlement())
	{
		Settlement->SetActive(true);
	}
	else
	{
		UE_LOG(LogSettlements, Warning, TEXT("Settlement loader attempted to activate settlement %s but couldn't find one. "), *SettlementToLoad.ToString());
	}
}

// Called when the game ends or when world partition streams us out 
void ASettlementLoader::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);


	if (ASettlement* Settlement = GetSettlement())
	{
		Settlement->SetActive(false);
	}
	else
	{
		UE_LOG(LogSettlements, Warning, TEXT("Settlement loader attempted to deactivate settlement %s but couldn't find one. "), *SettlementToLoad.ToString());
	}
}

void ASettlementLoader::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (ANarrativePlayerCharacter* PlayerChar = Cast<ANarrativePlayerCharacter>(OtherActor))
	{
		if (ASettlement* Settlement = GetSettlement())
		{
			if (Settlement->POITag.IsValid())
			{
				if (AController* PC = PlayerChar->GetController())
				{
					if (UNarrativeNavigationComponent* NavComp = Cast<UNarrativeNavigationComponent>(PC->GetComponentByClass(UNarrativeNavigationComponent::StaticClass())))
					{
						NavComp->DiscoverPOI(Settlement->POITag);
					}
				}
			}

		}
	}
}

void ASettlementLoader::GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors /*= false*/) const
{
	//We want to prevent discover large POI discover volumes from tricking WP into thinking our actor is huge and shouldn't be unloaded  
	Origin = GetActorLocation();
	BoxExtent = FVector(1.f);
}

