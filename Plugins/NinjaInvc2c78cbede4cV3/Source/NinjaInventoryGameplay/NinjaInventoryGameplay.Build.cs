// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaInventoryGameplay : ModuleRules
{
    public NinjaInventoryGameplay(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new []
        {
            "Core",
            "GameplayAbilities",
            "GameplayDebugger",
            "GameplayTasks",
            "GameplayTags",
            "InputCore",
            "NinjaInventory",
            "NinjaInventoryCore",
            "NinjaInventoryEquipment",
            "StructUtils",
            "StructUtilsEngine"
        });

        PrivateDependencyModuleNames.AddRange(new []
        {
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore"
        });

        SetupGameplayDebuggerSupport(target);
    }
}