// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaInputEditor : ModuleRules
{
    public NinjaInputEditor(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
                "NinjaInput",
                "EnhancedInput"
            }
        );

        PrivateDependencyModuleNames.AddRange(
	        new [] {
		        "BlueprintGraph",
		        "Core",
		        "CoreUObject",
		        "DetailCustomizations",
		        "Engine",
		        "GraphEditor",
		        "InputBlueprintNodes",
		        "InputCore",
		        "KismetCompiler",
		        "PropertyEditor",
		        "SharedSettingsWidgets",
		        "Slate",
		        "SlateCore",
		        "UnrealEd",
		        "AssetTools",
		        "DeveloperSettings",
		        "EditorSubsystem",
		        "ToolMenus",
		        "ContentBrowser",
		        "SourceControl",
	        }
        );
    }
}