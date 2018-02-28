// Made by Alex Romano - Visit my repository for the full code, and more, at: https://github.com/GameCatalyst/Fortnite

using UnrealBuildTool;
using System.Collections.Generic;

public class FortniteTarget : TargetRules
{
	public FortniteTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Fortnite" } );
	}
}
