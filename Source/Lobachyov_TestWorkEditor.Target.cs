

using UnrealBuildTool;
using System.Collections.Generic;

public class Lobachyov_TestWorkEditorTarget : TargetRules
{
	public Lobachyov_TestWorkEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Lobachyov_TestWork" } );
	}
}
