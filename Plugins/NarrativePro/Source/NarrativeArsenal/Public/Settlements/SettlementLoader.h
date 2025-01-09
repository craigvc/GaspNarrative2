// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <GameplayTagContainer.h>
#include "SettlementLoader.generated.h"

/*SettlementLoader will activate/deactivate the selected settlement when World Partiton streams it
in or out, essentially making World Parititon stream settlements in or out and keeping them efficient. 

It also handles discovering its owner POI when it is walked into! This makes sense to do in the loader because the loaders overlap volumes will only be 
loaded in when you're nearby. If we put the volumes in the settlement we'd have hundreds of collision volumes loaded in at one time which would waste performance. */
UCLASS()
class NARRATIVEARSENAL_API ASettlementLoader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASettlementLoader();

	//The settlement we want to activate/deactivate when settlement loader is streamed in or out 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settlement Configuration", meta = (Categories = "Narrative.Settlements"))
	FGameplayTag SettlementToLoad;

	//Root component - we want the settlement to have a transform 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	class USceneComponent* SettlementLoaderRoot;
	
	class ASettlement* GetSettlement() const;

	#if WITH_EDITORONLY_DATA

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Display, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UBillboardComponent> SpriteComponent;

	#endif 

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor);
	virtual void GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors = false) const;
};
