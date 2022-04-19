

using UnrealBuildTool;
using System.Collections.Generic;

public class Lobachyov_TestWorkTarget : TargetRules
{
	public Lobachyov_TestWorkTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Lobachyov_TestWork" } );
	}
}
