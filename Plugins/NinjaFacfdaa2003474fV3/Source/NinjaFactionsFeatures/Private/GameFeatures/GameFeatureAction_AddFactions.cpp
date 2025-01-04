// Ninja Bear Studio Inc., all rights reserved.
#include "GameFeatures/GameFeatureAction_AddFactions.h"

#include "NinjaFactionFunctionLibrary.h"
#include "NinjaFactionTags.h"
#include "Components/NinjaFactionComponent.h"
#include "Engine/GameInstance.h"

void UGameFeatureAction_AddFactions::OnGameFeatureActivating(FGameFeatureActivatingContext& Context)
{
	GameInstanceStartHandles.FindOrAdd(Context) = FWorldDelegates::OnStartGameInstance.AddUObject(
		this, &ThisClass::HandleGameInstanceStart, FGameFeatureStateChangeContext(Context));

	// Add to any worlds with associated game instances that have already been initialized
	for (const FWorldContext& WorldContext : GEngine->GetWorldContexts())
	{
		if (Context.ShouldApplyToWorldContext(WorldContext))
		{
			AddToWorld(WorldContext, Context);
		}
	}
}

// ReSharper disable once CppParameterMayBeConstPtrOrRef
void UGameFeatureAction_AddFactions::HandleGameInstanceStart(UGameInstance* GameInstance, FGameFeatureStateChangeContext ChangeContext)
{
	const FWorldContext* WorldContext = GameInstance->GetWorldContext();
	if (WorldContext != nullptr)
	{
		if (ChangeContext.ShouldApplyToWorldContext(*WorldContext))
		{
			AddToWorld(*WorldContext, ChangeContext);
		}
	}	
}

void UGameFeatureAction_AddFactions::AddToWorld(const FWorldContext& WorldContext, const FGameFeatureStateChangeContext& ChangeContext)
{
	const UWorld* World = WorldContext.World();
	const UGameInstance* GameInstance = WorldContext.OwningGameInstance;
	FPerContextData& ActiveData = ContextData.FindOrAdd(ChangeContext);

	if (IsValid(GameInstance) && IsValid(World) && World->IsGameWorld())
	{
		UGameFrameworkComponentManager* ComponentManager = UGameInstance::GetSubsystem<UGameFrameworkComponentManager>(GameInstance);
		if (IsValid(ComponentManager))
		{
			int32 EntryIndex = 0;
			for (const FFactionFeatureEntry& Entry : FactionSetup)
			{
				if (!Entry.ActorClass.IsNull())
				{
					const UGameFrameworkComponentManager::FExtensionHandlerDelegate FactionSetupDelegate =
						UGameFrameworkComponentManager::FExtensionHandlerDelegate::CreateUObject(
							this, &ThisClass::HandleActorExtension, EntryIndex, ChangeContext);

					TSharedPtr<FComponentRequestHandle> ExtensionRequestHandle = ComponentManager->AddExtensionHandler(Entry.ActorClass, FactionSetupDelegate);
					ActiveData.ComponentRequests.Add(ExtensionRequestHandle);
					EntryIndex++;
				}
			}
		}
	}	
}

void UGameFeatureAction_AddFactions::HandleActorExtension(AActor* Actor, const FName EventName, const int32 EntryIndex, const FGameFeatureStateChangeContext ChangeContext)
{
	FPerContextData* ActiveData = ContextData.Find(ChangeContext);
	if (FactionSetup.IsValidIndex(EntryIndex) && ActiveData)
	{
		const FFactionFeatureEntry& Entry = FactionSetup[EntryIndex];

		if (EventName == UGameFrameworkComponentManager::NAME_ExtensionAdded || EventName == UGameFrameworkComponentManager::NAME_GameActorReady)
		{
			GrantMemberships(Actor, Entry, *ActiveData);
		}
		else if (EventName == UGameFrameworkComponentManager::NAME_ExtensionRemoved || EventName == UGameFrameworkComponentManager::NAME_ReceiverRemoved)
		{
			RevokeMemberships(Actor, *ActiveData);
		}
	}
}

void UGameFeatureAction_AddFactions::GrantMemberships(AActor* Actor, const FFactionFeatureEntry& Entry, FPerContextData& ActiveData)
{
	// Cancel if the actor already has active extensions.
	if (ActiveData.ActiveExtensions.Find(Actor) != nullptr)
	{
		return;	
	}

	UNinjaFactionComponent* FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(Actor);
	if (IsValid(FactionComponent))
	{
		for (const FFactionMembership& Membership : Entry.Memberships)
		{
			static const FGameplayTag ReasonTag = Tag_Factions_Event_GameFeature;
			FactionComponent->AddFaction(Membership.GetFactionData(), Membership.Reputation, Actor, ReasonTag, Membership.bMainFaction);
		}
		
		ActiveData.ActiveExtensions.Add(Actor, Entry.Memberships);
	}
}

void UGameFeatureAction_AddFactions::RevokeMemberships(const AActor* Actor, FPerContextData& ActiveData)
{
	if (ActiveData.ActiveExtensions.Contains(Actor))
	{
		UNinjaFactionComponent* FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(Actor);
		if (IsValid(FactionComponent))
		{
			TArray<FFactionMembership> Memberships = ActiveData.ActiveExtensions.FindAndRemoveChecked(Actor);
			for (FFactionMembership& Membership : Memberships)
			{
				FactionComponent->RemoveFaction(Membership.GetFactionData());
			}
		}
	}
}

void UGameFeatureAction_AddFactions::OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context)
{
	const FDelegateHandle* FoundHandle = GameInstanceStartHandles.Find(Context);
	if (ensure(FoundHandle))
	{
		FWorldDelegates::OnStartGameInstance.Remove(*FoundHandle);
	}
}
