// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaInventoryEquipment : ModuleRules
{
	public NinjaInventoryEquipment(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new []
		{
			"Core",
			"GameplayTags",
			"GameplayTasks",
			"GameplayAbilities",
			"NetCore",
			"NinjaInventory",
			"NinjaInventoryCore",
			"StructUtils"
		});

		PrivateDependencyModuleNames.AddRange(new []
		{
			"CoreUObject",
			"Engine"
		});
	}
}