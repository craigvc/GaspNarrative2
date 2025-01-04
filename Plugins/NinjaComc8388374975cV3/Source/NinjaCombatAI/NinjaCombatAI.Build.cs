// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable InconsistentNaming
using UnrealBuildTool;

public class NinjaCombatAI : ModuleRules
{
    public NinjaCombatAI(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
	            "AIModule",
	            "EnhancedInput",
                "Core",
                "GameplayAbilities",
                "GameplayStateTreeModule",
                "GameplayTags",
                "GameplayTasks",
                "NinjaCombat",
                "NinjaCombatCore",
                "StateTreeModule"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new []
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore"
            }
        );
    }
}