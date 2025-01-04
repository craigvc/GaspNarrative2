// Ninja Bear Studio Inc., all rights reserved.   
using UnrealBuildTool;

public class NinjaFactionsFeatures : ModuleRules
{
    public NinjaFactionsFeatures(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
                "Core",
                "GameFeatures",
                "ModularGameplay",
                "NinjaFactions", 
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