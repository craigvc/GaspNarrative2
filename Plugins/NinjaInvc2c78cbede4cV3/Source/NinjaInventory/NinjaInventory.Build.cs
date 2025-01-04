// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaInventory : ModuleRules
{
	public NinjaInventory(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new []
		{
			"AIModule",
			"Core", 
			"CoreUObject",
			"Engine", 
			"GameplayTags",
			"GameplayTasks",
			"GameplayAbilities",
			"NetCore",
			"NinjaInventoryCore",
			"UMG",
			"StructUtils"
		});
		
		PrivateDependencyModuleNames.AddRange(new []
		{
			"DeveloperSettings",
			"NetCore",
			"Niagara",
			"SlateCore"
		});
	}
}