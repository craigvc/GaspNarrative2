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
	FGameplayTag Ability_MagicAttack;
	FGameplayTag Ability_Aim;
	FGameplayTag Ability_Reload;
	FGameplayTag Ability_WeaponBash;
	FGameplayTag Ability_Jump;
	FGameplayTag Ability_Crouch;
	FGameplayTag Ability_Sprint;
	FGameplayTag Ability_Dodge;
	FGameplayTag Ability_Block;
	FGameplayTag Ability_WieldWeapon;
	FGameplayTag Ability_Interact_Sit;

	FGameplayTag GameplayCue_TakeDamage;
	FGameplayTag GameplayCue_Weapon_Fire;
	FGameplayTag GameplayCue_Weapon_Impact;

	FGameplayTag GameplayEvent_Death;
	FGameplayTag GameplayEvent_Reload;
	FGameplayTag GameplayEvent_ToggleWield;
	FGameplayTag GameplayEvent_MeleeHit;
	FGameplayTag GameplayEvent_EndAttack;
	FGameplayTag GameplayEvent_NotifyInteract;
	FGameplayTag GameplayEvent_WantsEndInteract;

	FGameplayTag CharacterCreator_Scalars;
	FGameplayTag CharacterCreator_Vectors;
	FGameplayTag CharacterCreator_Form_Male;
	FGameplayTag CharacterCreator_Form_Female;

	FGameplayTag Equipment_Slot_Helmet;
	FGameplayTag Equipment_Slot_Body;
	FGameplayTag Equipment_Slot_Torso;
	FGameplayTag Equipment_Slot_Legs;
	FGameplayTag Equipment_Slot_Feet;
	FGameplayTag Equipment_Slot_Hands;
	FGameplayTag Equipment_Slot_Backpack;
	FGameplayTag Equipment_Slot_Necklace;
	FGameplayTag Equipment_Slot_Weapon_Back;
	FGameplayTag Equipment_Slot_Weapon_Hip;
	FGameplayTag Equipment_Slot_Throwable;
	FGameplayTag Equipment_Slot_Glasses;

	FGameplayTag Equipment_Slot_Groom_Hair;
	FGameplayTag Equipment_Slot_Groom_Eyebrows;
	FGameplayTag Equipment_Slot_Groom_Beard;
	FGameplayTag Equipment_Slot_Groom_Fuzz;
	FGameplayTag Equipment_Slot_Groom_Moustache;
	FGameplayTag Equipment_Slot_Groom_Eyelashes;

	FGameplayTag Equipment_Slot_Mesh_Hair;
	FGameplayTag Equipment_Slot_Mesh_Eyebrows;
	FGameplayTag Equipment_Slot_Mesh_Beard;
	FGameplayTag Equipment_Slot_Mesh_Fuzz;
	FGameplayTag Equipment_Slot_Mesh_Moustache;
	FGameplayTag Equipment_Slot_Mesh_Eyelashes;

	FGameplayTag Equipment_Slot_BaseBody;
	FGameplayTag Equipment_Slot_Face;

	FGameplayTag State_NPC_Activity_Idle;
	FGameplayTag State_NPC_Activity_Following;
	FGameplayTag State_NPC_Activity_Attacking;

	FGameplayTag State_NPC_IsAggressive;
	FGameplayTag State_NPC_DisableAggro;
	FGameplayTag State_NPC_IsBusy;
	FGameplayTag State_InvisibleToEnemies;
	FGameplayTag State_Invulnerable;
	FGameplayTag State_Sitting;
	FGameplayTag State_Sleeping;
	FGameplayTag State_Movement_Lock;
	FGameplayTag State_Movement_Walking;
	FGameplayTag State_IsDead;
	FGameplayTag State_Busy;
	FGameplayTag State_Interacting;
	FGameplayTag State_Weapon_IsFiring;
	FGameplayTag State_Weapon_IsAiming;
	FGameplayTag State_Weapon_Equipping;
	FGameplayTag State_Weapon_Equipped;
	FGameplayTag State_Weapon_BlockFiring;
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

	FGameplayTag Narrative_Settlements;
	FGameplayTag Narrative_Settlements_Test_DemoHall;
	FGameplayTag Narrative_Settlements_Test_BanditCamp;
	FGameplayTag Narrative_Settlements_Test_WeaponStore;

	FGameplayTag Narrative_POIs;
	FGameplayTag Narrative_POIs_Test_DemoHall;
	FGameplayTag Narrative_POIs_Test_BanditCamp;
	FGameplayTag Narrative_POIs_Test_WeaponStore;

	FGameplayTag Narrative_Factions;
	FGameplayTag Narrative_Factions_Heroes;
	FGameplayTag Narrative_Factions_Bandits;

protected:

	void AddAllTags(UGameplayTagsManager& Manager);
	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);

private:

	static FNarrativeGameplayTags GameplayTags;
};
