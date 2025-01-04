// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaCombatActorPool : ModuleRules
{
	public NinjaCombatActorPool(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new []
			{
				"Core",
				"NetCore",
				"NinjaCombatCore"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new []
			{
				"CoreUObject",
				"Engine"
			}
		);
	}
}