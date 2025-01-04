// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaInventoryEditor : ModuleRules
{
    public NinjaInventoryEditor(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new []
	    {
            "Core",
            "NinjaInventory",
            "NinjaInventoryEquipment"
	    });

        PrivateDependencyModuleNames.AddRange(new [] 
	    {
		    "AssetTools",
		    "BlueprintGraph",
            "CoreUObject",
            "DetailCustomizations",
            "EditorSubsystem",
            "Engine",
            "ToolMenus",
            "UnrealEd"
	    });
    }
}