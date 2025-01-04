// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaCombatCore : ModuleRules
{
    public NinjaCombatCore(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new [] 
	    {
            "Core",
        });

        PrivateDependencyModuleNames.AddRange(new []
        {
            "CoreUObject",
            "Engine"
        });
    }
}