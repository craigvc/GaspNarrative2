// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable InconsistentNaming
using UnrealBuildTool;

public class NinjaInventoryUI : ModuleRules
{
	public NinjaInventoryUI(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new []
		{
			"CommonUI",
			"Core", 
			"CoreUObject",
			"Engine",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"InputCore",
			"ModelViewViewModel",
			"NinjaInventory",
			"NinjaInventoryCore",
			"NinjaInventoryEquipment",
			"NinjaInventoryGameplay",
			"UMG",
			"StructUtils"
		});
		
		PrivateDependencyModuleNames.AddRange(new []
		{
			"Slate",
			"SlateCore"
		});
	}
}