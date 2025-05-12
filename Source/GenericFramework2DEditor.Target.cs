// Copyright (c) 2025 HeartString Entertainment. All Rights Reserved. \n Author by Yushize.

using UnrealBuildTool;
using System.Collections.Generic;

public class GenericFramework2DEditorTarget : TargetRules
{
	public GenericFramework2DEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "GenericFramework2D" } );
	}
}
