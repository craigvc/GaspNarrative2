// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaFactionsStateTree : ModuleRules
{
    public NinjaFactionsStateTree(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
	            "AIModule",
                "Core",
                "GameplayStateTreeModule",
                "GameplayTags",
                "NinjaFactions",
                "StateTreeModule"                
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