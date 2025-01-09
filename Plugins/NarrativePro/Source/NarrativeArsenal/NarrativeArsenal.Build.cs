// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NarrativeArsenal : ModuleRules
{
	public NarrativeArsenal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
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
                "NarrativeNavigator",
                "NarrativeSaveSystem",
				"LevelSequence",
				"MovieScene",
                "CinematicCamera",
                "AIModule",
				"HairStrandsCore",
				"MediaAssets",
				"UMG",
				"PhysicsCore",
                "GameplayAbilities",
                "NarrativeInventory"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"AIModule",
                "GameplayAbilities", 
				"GameplayTags", 
				"GameplayTasks",
				"MotionWarping",
                "EnhancedInput",
				"NarrativePro",

				"NarrativeInventory",
				"NarrativeCommonUI",
				"MovieSceneTracks",
				// ... add private dependencies that you statically link with here ...	
				
				"HairStrandsCore",
				"Niagara",
                "CommonInput",
				"DeveloperSettings"
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		SetupGameplayDebuggerSupport(Target, true);
	}
}
