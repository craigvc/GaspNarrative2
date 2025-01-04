// Ninja Bear Studio Inc., all rights reserved. 
using UnrealBuildTool;

public class NinjaFactions : ModuleRules
{
	public NinjaFactions(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new []
			{
				"AIModule",
				"Core",
				"DeveloperSettings",
				"GameplayTags",
				"UMG"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new []
			{
				"CoreUObject",
				"Engine",
				"NetCore"
			}
		);
		
		SetupGameplayDebuggerSupport(target);
	}
}
