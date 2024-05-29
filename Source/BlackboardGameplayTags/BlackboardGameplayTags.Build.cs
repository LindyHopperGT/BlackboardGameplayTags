// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

using UnrealBuildTool;

public class BlackboardGameplayTags : ModuleRules
{
	public BlackboardGameplayTags(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",
			"CoreUObject",
			"Engine",
			"GameplayTags",
			"AIModule",
		});

		PrivateDependencyModuleNames.AddRange(new string[] 
		{
		});
	}
}
