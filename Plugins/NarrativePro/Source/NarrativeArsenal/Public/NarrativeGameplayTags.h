// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Containers/Map.h"
#include "Containers/UnrealString.h"
#include "GameplayTagContainer.h"
#include "HAL/Platform.h"

class UGameplayTagsManager;

/**
 * Gameplay tags singleton class, we use a technique learned from Lyra. 
 * We define these natively so Narrative pro users don't need to manually add a whole bunch of tags, which would be quite annoying.
 * This way they can hit the ground running. 
 */
struct FNarrativeGameplayTags
{
public:

	static const FNarrativeGameplayTags& Get() { return GameplayTags; }

	static void InitializeNativeTags();

	static FGameplayTag FindTagByString(FString TagString, bool bMatchPartialString = false);

public:

	FGameplayTag Ability_ActivateFail_IsDead;
	FGameplayTag Ability_ActivateFail_Cooldown;
	FGameplayTag Ability_ActivateFail_Cost;
	FGameplayTag Ability_ActivateFail_TagsBlocked;
	FGameplayTag Ability_ActivateFail_TagsMissing;
	FGameplayTag Ability_ActivateFail_Networking;
	FGameplayTag Ability_ActivateFail_ActivationGroup;

	FGameplayTag Ability_WeaponFire;
	FGameplayTag Ability_Death;
	FGameplayTag Ability_MeleeAttack;
	FGameplayTag Ability_Aim;
	FGameplayTag Ability_Reload;
	FGameplayTag Ability_WeaponBash;
	FGameplayTag Ability_Jump;
	FGameplayTag Ability_Crouch;
	FGameplayTag Ability_Dodge;
	FGameplayTag Ability_Block;
	FGameplayTag Ability_ToggleHolstered;

	FGameplayTag GameplayCue_TakeDamage;
	FGameplayTag GameplayCue_Weapon_Fire;
	FGameplayTag GameplayCue_Weapon_Impact;

	FGameplayTag GameplayEvent_Death;
	FGameplayTag GameplayEvent_Reload;
	FGameplayTag GameplayEvent_MeleeHit;

	FGameplayTag State_NPC_Behaviour_Idle;
	FGameplayTag State_NPC_Behaviour_Following;
	FGameplayTag State_NPC_Behaviour_Attacking;

	FGameplayTag State_NPC_IsAggressive;
	FGameplayTag State_NPC_DisableAggro;
	FGameplayTag State_NPC_IsBusy;
	FGameplayTag State_Invulnerable;
	FGameplayTag State_IsDead;
	FGameplayTag State_IsFiring;
	FGameplayTag State_IsAiming;
	FGameplayTag State_BlockFiring;
	FGameplayTag State_BlockFastTravel;
	FGameplayTag State_BlockSaving;

	FGameplayTag TaggedDialogue_Greet;
	FGameplayTag TaggedDialogue_Farewell;
	FGameplayTag TaggedDialogue_Taunt;
	FGameplayTag TaggedDialogue_Attack;
	FGameplayTag TaggedDialogue_BeginAttacking;
	FGameplayTag TaggedDialogue_SearchForEnemy;
	FGameplayTag TaggedDialogue_DidntFindEnemy;
	FGameplayTag TaggedDialogue_FriendlyFire;

	FGameplayTag SetByCaller_Damage;
	FGameplayTag SetByCaller_AttackDamage;
	FGameplayTag SetByCaller_AttackRating;
	FGameplayTag SetByCaller_Armor;
	FGameplayTag SetByCaller_Health;
	FGameplayTag SetByCaller_MaxHealth;
	FGameplayTag SetByCaller_Stamina;
	FGameplayTag SetByCaller_MaxStamina;
	FGameplayTag SetByCaller_Duration;
	FGameplayTag SetByCaller_XP;

	FGameplayTag Narrative_Settlements_Test_DemoHall;
	FGameplayTag Narrative_Settlements_Test_BanditCamp;
	FGameplayTag Narrative_Settlements_Test_WeaponStore;

	FGameplayTag Narrative_POIs_Test_DemoHall;
	FGameplayTag Narrative_POIs_Test_BanditCamp;
	FGameplayTag Narrative_POIs_Test_WeaponStore;

protected:

	void AddAllTags(UGameplayTagsManager& Manager);
	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);

private:

	static FNarrativeGameplayTags GameplayTags;
};
