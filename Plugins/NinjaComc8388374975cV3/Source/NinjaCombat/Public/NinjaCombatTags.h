// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"

NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Attack);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Block);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Cast);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Combo);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Death);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Evade);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_HitReaction);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Opportunity);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Opportunity_Backstab);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Opportunity_Execute);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Opportunity_Takedown);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Parry);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Stagger);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_Takedown);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Ability_TargetLock);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Component_ForwardReference);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Component_HealthWidget);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Component_Mesh);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Component_MeleeScanSource);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Component_ProjectileSource);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Component_TargetLockAnchor);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Component_WeaponTrail);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Cooldown_Block);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Cooldown_Evade);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Data_CastHits);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Data_ComboCount);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Data_CriticalHitChance);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Data_CriticalHitMultiplier);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Data_Damage);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Data_Damage_Multiplier);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Data_PoiseDamage);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Cancel_Regeneration_Health);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Cancel_Regeneration_Magic);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Cancel_Regeneration_Poise);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Cancel_Regeneration_Stamina);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Blocked);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Breaker);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Critical);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Fatal);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Knockback);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_LastStand);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Melee);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Mitigated);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Ranged);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Recurring);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Damage_Stagger);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Effect_Debuff);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Block_Reaction);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Cast);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo_Attack);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo_Attack_Primary);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo_Attack_Secondary);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo_Begin);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo_End);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo_Target_Hit);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Combo_Target_Reset);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Damage);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Damage_Blocked);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Damage_Breaker);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Damage_Received);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Damage_Stagger);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Death);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Death_Finished);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Invulnerability);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Invulnerability_Begin);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Invulnerability_End);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_MeleeScan);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_MeleeScan_Start);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_MeleeScan_Stop);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Projectile_Launch);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Opportunity);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Opportunity_Damage);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Target);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Target_Acquired);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Target_Dismissed);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Event_Target_Scan);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Input_Block_Camera);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Input_Block_Camera_Pitch);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Input_Block_Camera_Yaw);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Input_Block_Movement);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Input_Block_Rotation);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Opportunity);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Opportunity_Backstab);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Opportunity_Parry);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Opportunity_Riposte);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_Opportunity_StealthTakedown);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Blocking);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_ComboWindow);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Dead);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Evading);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Invulnerable);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_LockedOnTarget);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Opportunity);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Opportunity_Attacker);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Opportunity_Victim);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_ParryWindow);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Combat_State_Staggered);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_GameplayCue_Combat_Death);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_GameplayCue_Combat_Hit);
NINJACOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_GameplayCue_Combat_MeleeTrails);