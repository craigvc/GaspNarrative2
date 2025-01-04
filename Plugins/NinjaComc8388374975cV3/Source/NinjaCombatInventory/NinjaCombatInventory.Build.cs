// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable SuggestVarOrType_BuiltInTypes
// ReSharper disable StringLiteralTypo
using UnrealBuildTool;
using System.IO;

public class NinjaCombatInventory : ModuleRules
{
    public NinjaCombatInventory(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[]
        {
        });
		
        PrivateIncludePaths.AddRange(new string[]
        {
        });

        PublicDependencyModuleNames.AddRange(new [] 
        {
	        "Core",
	        "GameplayAbilities",
	        "GameplayTasks",
	        "GameplayTags",
	        "NetCore",
	        "NinjaCombat",
	        "NinjaCombatActorPool",
	        "NinjaCombatCore",
	        "StructUtils",
	        "StructUtilsEngine"
        });
        
        PrivateDependencyModuleNames.AddRange(new[] 
        {
	        "CoreUObject",
	        "Engine"
        });

        EnableNinjaInventoryIntegration();
    }
    
    /**
     * Enables the Ninja Inventory integration, if the Ninja Inventory plugin is found in the
     * project's local plugin folder or in the engine's Marketplace folder.
     */
    public void EnableNinjaInventoryIntegration()
    {
	    const string ninjaInventory = "NinjaInventory/NinjaInventory.uplugin";

	    // Back 3 levels in the actual classpath: NinjaCombat/Source/NinjaCombatInventory
	    string localPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../.."));
	    bool validLocalInventoryLocation = File.Exists(Path.Combine(localPath, ninjaInventory));

	    // Using the Relative Engine Path will drop us in the "/Engine" folder.
	    string marketplacePath = Path.GetFullPath(Path.Combine(Target.RelativeEnginePath, "./Plugins/Marketplace"));
	    bool validMarketplaceInventoryLocation = File.Exists(Path.Combine(marketplacePath, ninjaInventory));
        
	    if (validLocalInventoryLocation || validMarketplaceInventoryLocation)
	    {
		    PrivateDefinitions.Add("NBS_WITH_INVENTORY=1");
		    PrivateDependencyModuleNames.AddRange(new []
		    {
			    "NinjaInventory", 
			    "NinjaInventoryEquipment", 
			    "NinjaInventoryGameplay"
		    });
	    }
	    else
	    {
		    PrivateDefinitions.Add("NBS_WITH_INVENTORY=0");
	    }
    }
}