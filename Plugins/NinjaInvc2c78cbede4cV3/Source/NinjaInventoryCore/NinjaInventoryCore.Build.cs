// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaInventoryCore : ModuleRules
{
    public NinjaInventoryCore(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new []
        {
            "Core",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "StructUtils"
        });

        PrivateDependencyModuleNames.AddRange(new []
        {
            "CoreUObject",
            "Engine"
        });
    }
}