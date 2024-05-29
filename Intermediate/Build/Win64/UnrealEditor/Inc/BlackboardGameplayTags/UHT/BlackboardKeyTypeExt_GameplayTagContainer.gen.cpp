// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackboardGameplayTags/Public/BlackboardKeyTypeExt_GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyTypeExt_GameplayTagContainer() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	BLACKBOARDGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer();
	BLACKBOARDGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlackboardGameplayTags();
// End Cross Module References
	void UBlackboardKeyTypeExt_GameplayTagContainer::StaticRegisterNativesUBlackboardKeyTypeExt_GameplayTagContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyTypeExt_GameplayTagContainer);
	UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_NoRegister()
	{
		return UBlackboardKeyTypeExt_GameplayTagContainer::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackboardGameplayTags,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "GameplayTagContainer" },
		{ "IncludePath", "BlackboardKeyTypeExt_GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Public/BlackboardKeyTypeExt_GameplayTagContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyTypeExt_GameplayTagContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::ClassParams = {
		&UBlackboardKeyTypeExt_GameplayTagContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTagContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTagContainer.OuterSingleton, Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTagContainer.OuterSingleton;
	}
	template<> BLACKBOARDGAMEPLAYTAGS_API UClass* StaticClass<UBlackboardKeyTypeExt_GameplayTagContainer>()
	{
		return UBlackboardKeyTypeExt_GameplayTagContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyTypeExt_GameplayTagContainer);
	UBlackboardKeyTypeExt_GameplayTagContainer::~UBlackboardKeyTypeExt_GameplayTagContainer() {}
	struct Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTagContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTagContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTagContainer, UBlackboardKeyTypeExt_GameplayTagContainer::StaticClass, TEXT("UBlackboardKeyTypeExt_GameplayTagContainer"), &Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyTypeExt_GameplayTagContainer), 3763868310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTagContainer_h_2767718048(TEXT("/Script/BlackboardGameplayTags"),
		Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTagContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTagContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
