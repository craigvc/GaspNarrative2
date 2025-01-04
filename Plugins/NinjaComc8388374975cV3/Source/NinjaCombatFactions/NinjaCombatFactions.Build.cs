// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable SuggestVarOrType_BuiltInTypes
// ReSharper disable StringLiteralTypo
using UnrealBuildTool;
using System.IO;

public class NinjaCombatFactions : ModuleRules
{
    public NinjaCombatFactions(ReadOnlyTargetRules target) : base(target)
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
	        "AIModule",
	        "Core",
	        "GameplayAbilities",
	        "GameplayTasks",
	        "GameplayTags",
	        "NetCore",
	        "NinjaCombat",
	        "NinjaCombatCore"
        });
        
        PrivateDependencyModuleNames.AddRange(new[] 
        {
	        "CoreUObject",
	        "Engine"
        });
        
        EnableNinjaFactionsIntegration();
    }
    
    /**
     * Enables the Ninja Factions integration, if the Ninja Factions plugin is found in the
     * project's local plugin folder or in the engine's Marketplace folder.
     */
    public void EnableNinjaFactionsIntegration()
    {
	    const string ninjaFactions = "NinjaFactions/NinjaFactions.uplugin";

	    // Back 3 levels in the actual classpath: NinjaCombat/Source/NinjaCombatFactions
	    string localPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../.."));
	    bool validLocalFactionsLocation = File.Exists(Path.Combine(localPath, ninjaFactions));

	    // Using the Relative Engine Path will drop us in the "/Engine" folder.
	    string marketplacePath = Path.GetFullPath(Path.Combine(Target.RelativeEnginePath, "./Plugins/Marketplace"));
	    bool validMarketplaceFactionsLocation = File.Exists(Path.Combine(marketplacePath, ninjaFactions));
        
	    if (validLocalFactionsLocation || validMarketplaceFactionsLocation)
	    {
		    PrivateDefinitions.Add("NBS_WITH_FACTIONS=1");
		    PrivateDependencyModuleNames.AddRange(new [] { "NinjaFactions" });
	    }
	    else
	    {
		    PrivateDefinitions.Add("NBS_WITH_FACTIONS=0");
	    }
    }    
}