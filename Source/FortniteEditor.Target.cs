// Made by Alex Romano - Visit my repository for the full code, and more, at: https://github.com/GameCatalyst/Fortnite

using UnrealBuildTool;
using System.Collections.Generic;

public class FortniteEditorTarget : TargetRules
{
	public FortniteEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Fortnite" } );
	}
}
