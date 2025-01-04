// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaFactionsBehaviorTree : ModuleRules
{
    public NinjaFactionsBehaviorTree(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
	            "AIModule",
                "Core",
                "GameplayTags",
                "GameplayTasks",
                "NinjaFactions"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new []
            {
                "CoreUObject",
                "Engine"
            }
        );
    }
}