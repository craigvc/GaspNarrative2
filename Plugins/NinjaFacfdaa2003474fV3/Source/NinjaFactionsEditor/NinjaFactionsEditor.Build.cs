// Ninja Bear Studio Inc., all rights reserved.  
using UnrealBuildTool;

public class NinjaFactionsEditor : ModuleRules
{
    public NinjaFactionsEditor(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
                "Core", 
                "NinjaFactions"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new []
            {
	            "AssetTools",
	            "BlueprintGraph",
                "CoreUObject",
                "DetailCustomizations",
                "Engine",
                "Slate",
                "SlateCore",
                "UnrealEd"
            }
        );
    }
}