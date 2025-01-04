// Copyright Narrative Tools 2024. 


#include "NarrativeGameplayTags.h"

#include "Containers/Array.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagsManager.h"
#include "Logging/LogCategory.h"
#include "Logging/LogMacros.h"
#include "Trace/Detail/Channel.h"
#include "UObject/NameTypes.h"

FNarrativeGameplayTags FNarrativeGameplayTags::GameplayTags;

void FNarrativeGameplayTags::InitializeNativeTags()
{
	UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

	GameplayTags.AddAllTags(Manager);

	// Notify manager that we are done adding native tags.
	Manager.DoneAddingNativeTags();
}

void FNarrativeGameplayTags::AddAllTags(UGameplayTagsManager& Manager)
{
	AddTag(Ability_ActivateFail_IsDead, "Ability.ActivateFail.IsDead", "Ability failed to activate because its owner is dead.");
	AddTag(Ability_ActivateFail_Cooldown, "Ability.ActivateFail.Cooldown", "Ability failed to activate because it is on cool down.");
	AddTag(Ability_ActivateFail_Cost, "Ability.ActivateFail.Cost", "Ability failed to activate because it did not pass the cost checks.");
	AddTag(Ability_ActivateFail_TagsBlocked, "Ability.ActivateFail.TagsBlocked", "Ability failed to activate because tags are blocking it.");
	AddTag(Ability_ActivateFail_TagsMissing, "Ability.ActivateFail.TagsMissing", "Ability failed to activate because tags are missing.");
	AddTag(Ability_ActivateFail_Networking, "Ability.ActivateFail.Networking", "Ability failed to activate because it did not pass the network checks.");
	AddTag(Ability_ActivateFail_ActivationGroup, "Ability.ActivateFail.ActivationGroup", "Ability failed to activate because of its activation group.");

	AddTag(Ability_WeaponFire, "Abilities.Attacks.WeaponFire", "Weapon firing ability tag.");
	AddTag(Ability_MeleeAttack, "Abilities.Attacks.MeleeAttack", "Melee attack ability tag.");
	AddTag(Ability_Death, "Abilities.Death", "Death ability tag.");
	AddTag(Ability_Aim, "Abilities.Aim", "Aim ability tag.");
	AddTag(Ability_Reload, "Abilities.Reload", "Reload ability tag.");
	AddTag(Ability_WeaponBash, "Abilities.WeaponBash", "WeaponBash ability tag.");
	AddTag(Ability_Jump, "Abilities.Jump", "Jump ability tag.");
	AddTag(Ability_Crouch, "Abilities.Crouch", "Crouch ability tag.");
	AddTag(Ability_Dodge, "Abilities.Dodge", "Dodge ability tag.");
	AddTag(Ability_Block, "Abilities.Block", "Block ability tag.");
	AddTag(Ability_ToggleHolstered, "Abilities.ToggleHolstered", "ToggleHolstered ability tag.");

	//Unfortunately users need to define these manually as GameplayCues cant use native tags 
	//AddTag(GameplayCue_TakeDamage, "GameplayCue.TakeDamage", "TakeDamage gameplaycue tag. ");
	//AddTag(GameplayCue_Weapon_Fire, "GameplayCue.Weapon.Fire", "Weapon Fire gameplaycue tag. ");
	//AddTag(GameplayCue_Weapon_Impact, "GameplayCue.Weapon.Impact", "Weapon Impact gameplaycue tag. ");

	AddTag(State_NPC_Behaviour_Idle, "Narrative.State.NPC.Behaviour.Idle", "Tag added to NPCs whilst they are running the idle behaviour tree.");
	AddTag(State_NPC_Behaviour_Following, "Narrative.State.NPC.Behaviour.Following", "Tag added to NPCs whilst they are running the Following behaviour tree.");
	AddTag(State_NPC_Behaviour_Attacking, "Narrative.State.NPC.Behaviour.Attacking", "Tag added to NPCs whilst they are running the Attacking behaviour tree.");

	AddTag(State_NPC_IsBusy, "Narrative.State.NPC.IsBusy", "Tag added to NPCs whilst they are busy and can't talk.");
	AddTag(State_NPC_IsAggressive, "Narrative.State.NPC.Aggressive", "Tag is added to NPCs that are aggressive towards someone.");
	AddTag(State_NPC_DisableAggro, "Narrative.State.NPC.DisableAggro", "When added to NPCs aggro will be disabled.");
	AddTag(State_IsFiring, "Narrative.State.IsFiring", "Tag is added whilst character is firing.");
	AddTag(State_IsAiming, "Narrative.State.IsAiming", "Tag is added whilst character is aiming.");
	AddTag(State_BlockFiring, "Narrative.State.BlockFiring", "Tag will block fire ability.");
	AddTag(State_IsDead, "Narrative.State.IsDead", "Tag is added to characters that are dead. ");
	AddTag(State_Invulnerable, "Narrative.State.Invulnerable", "If this tag is added to the owner damage will be nullified.");
	AddTag(State_BlockFastTravel, "Narrative.State.BlockFastTravel", "If the player has this tag we'll deny them the ability to fast travel.");
	AddTag(State_BlockSaving, "Narrative.State.BlockSaving", "If the player has this tag we'll deny them the ability to save their game.");


	AddTag(TaggedDialogue_Greet, "Narrative.TaggedDialogue.Greet", "Fires the NPCs greet dialogue. 'Hello', 'How are you doing friend?' etc ");
	AddTag(TaggedDialogue_Farewell, "Narrative.TaggedDialogue.Farewell", "Fires the NPCs farewell dialogue. 'Farewell', 'See you later!' etc");
	AddTag(TaggedDialogue_Taunt, "Narrative.TaggedDialogue.Taunt", "Fires the NPCs taunt dialogue - 'and stay away!', 'better not come back!', etc.");
	AddTag(TaggedDialogue_Attack, "Narrative.TaggedDialogue.Attack", "Fires the NPCs attack dialogue - you're gunna die!, take that!, etc. ");
	AddTag(TaggedDialogue_BeginAttacking, "Narrative.TaggedDialogue.BeginAttacking", "Fires the NPCs begin attacking dialogue. 'You're going to regret coming here!', 'Its over for you!' ");
	AddTag(TaggedDialogue_SearchForEnemy, "Narrative.TaggedDialogue.SearchForEnemy", "Fires the NPCs search for enemy dialogue, if an NPC hears footsteps or similar. 'What was that!' etc");
	AddTag(TaggedDialogue_DidntFindEnemy, "Narrative.TaggedDialogue.DidntFindEnemy", "Fires the NPCs failed search for NPC, if an NPC cant find the footsteps. 'Huh, I guess I was just hearing things.' ");
	AddTag(TaggedDialogue_FriendlyFire, "Narrative.TaggedDialogue.FriendlyFire", "Fires the NPCs friendly fire dialogue, when you shoot a friendly. 'Ow, stop that!', etc. ");

	AddTag(GameplayEvent_Death, "GameplayEvent.Death", "Event that fires on death. This event only fires on the server.");
	AddTag(GameplayEvent_Reload, "GameplayEvent.Reload", "Event that fires on Reload. This event only fires on the server.");
	AddTag(GameplayEvent_MeleeHit, "GameplayEvent.MeleeHit", "Event that fires on Melee Hit. This event only fires on the server.");

	AddTag(SetByCaller_Damage, "SetByCaller.Damage", "SetByCaller tag used by damage gameplay effects.");
	AddTag(SetByCaller_Duration, "SetByCaller.Duration", "SetByCaller tag used to define the duration of looping gameplay effects.");
	AddTag(SetByCaller_AttackDamage, "SetByCaller.AttackDamage", "SetByCaller tag used to add attack damage to our attributes.");
	AddTag(SetByCaller_AttackRating, "SetByCaller.AttackRating", "SetByCaller tag used to add attack rating damage to our attributes.");
	AddTag(SetByCaller_Health, "SetByCaller.Health", "SetByCaller tag used to add health to our attributes");
	AddTag(SetByCaller_MaxHealth, "SetByCaller.MaxHealth", "SetByCaller tag used to add max health to our attributes");
	AddTag(SetByCaller_Armor, "SetByCaller.Armor", "SetByCaller tag used to add armor rating damage to our attributes");
	AddTag(SetByCaller_Stamina, "SetByCaller.Stamina", "SetByCaller tag used to add stamina to our attributes.");
	AddTag(SetByCaller_MaxStamina, "SetByCaller.MaxStamina", "SetByCaller tag used to add max stamina to our attributes.");
	AddTag(SetByCaller_XP, "SetByCaller.XP", "SetByCaller tag used to add XP to our attributes.");

	AddTag(Narrative_Settlements_Test_DemoHall, "Narrative.Settlements.Demo.DemoHall", "Demo settlement used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_Settlements_Test_BanditCamp, "Narrative.Settlements.Demo.BanditCamp", "Demo settlement used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_Settlements_Test_WeaponStore, "Narrative.Settlements.Demo.WeaponStore", "Demo settlement used by the demo level that comes with Narrative Pro.");

	AddTag(Narrative_POIs_Test_DemoHall, "Narrative.POIs.Demo.DemoHall", "Demo POI used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_POIs_Test_BanditCamp, "Narrative.POIs.Demo.BanditCamp", "Demo POI used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_POIs_Test_WeaponStore, "Narrative.POIs.Demo.WeaponStore", "Demo POI used by the demo level that comes with Narrative Pro.");
}

void FNarrativeGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment)
{
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TEXT("(Native) ")) + FString(TagComment));
}

FGameplayTag FNarrativeGameplayTags::FindTagByString(FString TagString, bool bMatchPartialString)
{
	const UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
	FGameplayTag Tag = Manager.RequestGameplayTag(FName(*TagString), false);

	if (!Tag.IsValid() && bMatchPartialString)
	{
		FGameplayTagContainer AllTags;
		Manager.RequestAllGameplayTags(AllTags, true);

		for (const FGameplayTag TestTag : AllTags)
		{
			if (TestTag.ToString().Contains(TagString))
			{
				UE_LOG(LogTemp, Display, TEXT("Could not find exact match for tag [%s] but found partial match on tag [%s]."), *TagString, *TestTag.ToString());
				Tag = TestTag;
				break;
			}
		}
	}

	return Tag;
}
