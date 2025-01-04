// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaCombat : ModuleRules
{
	public NinjaCombat(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new []
		{
			"AIModule",
			"ContextualAnimation",
			"Core", 
			"CoreUObject",
			"DeveloperSettings",
			"Engine", 
			"EnhancedInput",
			"GameplayAbilities",
			"GameplayStateTreeModule",
			"GameplayTags",
			"GameplayTasks",
			"MotionWarping",
			"NetCore",
			"Niagara",
			"NinjaCombatActorPool",
			"NinjaCombatCamera",
			"NinjaCombatCore",
			"PhysicsCore",
			"StateTreeModule",
			"TargetingSystem",
			"TemplateSequence",
			"UMG"
		});
		
		PrivateDependencyModuleNames.AddRange(new []
		{
			"AnimGraphRuntime",
			"NetCore",
			"Niagara"
		});
	}
}
