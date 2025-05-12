// Copyright (c) 2025 HeartString Entertainment. All Rights Reserved. \n Author by Yushize.

using UnrealBuildTool;
using System.Collections.Generic;

public class GenericFramework2DTarget : TargetRules
{
	public GenericFramework2DTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "GenericFramework2D" } );
	}
}
