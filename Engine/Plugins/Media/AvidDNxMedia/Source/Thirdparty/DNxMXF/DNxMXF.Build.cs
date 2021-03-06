// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
using System;
using System.IO;
using UnrealBuildTool;

public class DNxMXF : ModuleRules
{
	public DNxMXF(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			string IncPath = Path.Combine(ModuleDirectory, "include");
			PublicSystemIncludePaths.Add(IncPath);

			string LibPath = Path.Combine(ModuleDirectory, "lib64");
			PublicAdditionalLibraries.Add(Path.Combine(LibPath, "DNxMXF-dynamic.lib"));

			PublicDelayLoadDLLs.Add("DNxMXF-dynamic.dll");
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/Win64/DNxMXF-dynamic.dll");
		}
	}
}
