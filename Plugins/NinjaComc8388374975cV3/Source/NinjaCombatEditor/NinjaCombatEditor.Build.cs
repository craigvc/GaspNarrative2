// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaCombatEditor : ModuleRules
{
    public NinjaCombatEditor(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
	            "Core",
                "NinjaCombat",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new []
            {
	            "AssetTools",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "UnrealEd"
            }
        );
    }
}