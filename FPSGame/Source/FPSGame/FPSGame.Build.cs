// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSGame : ModuleRules
{
	public FPSGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",
            "GameplayTasks" , "GameplayTags" , "GameplayAbilities",
			"MotionWarping","EnhancedInput", "UMG", "AnimGraphRuntime"
        });
        SetupIrisSupport(Target);
    }
}
