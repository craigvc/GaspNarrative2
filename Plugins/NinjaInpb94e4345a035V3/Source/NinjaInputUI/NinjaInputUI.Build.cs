// Ninja Bear Studio Inc., all rights reserved.
using UnrealBuildTool;

public class NinjaInputUI : ModuleRules
{
    public NinjaInputUI(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new []
            {
	            "CommonInput",
	            "CommonUI",
	            "Core",
	            "InputCore"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new []
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore"
            }
        );
    }
}