// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_UI_RTL : ModuleRules
{
	public UE_UI_RTL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG" });
	}
}
