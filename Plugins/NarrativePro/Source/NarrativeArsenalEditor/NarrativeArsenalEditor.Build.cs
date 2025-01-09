// Copyright Narrative Tools 2022. 

using UnrealBuildTool;

public class NarrativeArsenalEditor : ModuleRules
{
    public NarrativeArsenalEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;

        PrivateIncludePathModuleNames.AddRange(
            new string[] {
                "AssetRegistry",
                "AssetTools",
                "PropertyEditor",
                "ContentBrowser"
            }
            );


        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "UnrealEd",
                "ComponentVisualizers"
				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "ApplicationCore",
                "Engine",
                "RenderCore",
                "InputCore",
                "EditorStyle",
                "Slate",
                "SlateCore",
                "UnrealEd",
                "EditorStyle",
                "Projects",
                "AssetTools",
                "NarrativeArsenal",
                "NarrativeSaveSystem"
            }
            );
    }
}
