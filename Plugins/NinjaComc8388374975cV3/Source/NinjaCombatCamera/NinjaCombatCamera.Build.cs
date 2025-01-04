// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaCombatCamera : ModuleRules
{
	public NinjaCombatCamera(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new []
			{
				"Core",
				"GameplayCameras",
				"NinjaCombatCore",
				"TemplateSequence",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new []
			{
				"CoreUObject",
				"Engine"
			}
		);

		const int minimumVersionForEngineCameraModule = 4;
		if (target.Version.MinorVersion > minimumVersionForEngineCameraModule)
		{
			PublicDependencyModuleNames.AddRange(
				new[]
				{
					"EngineCameras"
				}
			);
		}
	}
}