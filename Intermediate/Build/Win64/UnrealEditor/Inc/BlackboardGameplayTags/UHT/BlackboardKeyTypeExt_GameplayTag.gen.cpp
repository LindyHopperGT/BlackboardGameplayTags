// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackboardGameplayTags/Public/BlackboardKeyTypeExt_GameplayTag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyTypeExt_GameplayTag() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	BLACKBOARDGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag();
	BLACKBOARDGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlackboardGameplayTags();
// End Cross Module References
	void UBlackboardKeyTypeExt_GameplayTag::StaticRegisterNativesUBlackboardKeyTypeExt_GameplayTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyTypeExt_GameplayTag);
	UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_NoRegister()
	{
		return UBlackboardKeyTypeExt_GameplayTag::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackboardGameplayTags,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "GameplayTag" },
		{ "IncludePath", "BlackboardKeyTypeExt_GameplayTag.h" },
		{ "ModuleRelativePath", "Public/BlackboardKeyTypeExt_GameplayTag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyTypeExt_GameplayTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::ClassParams = {
		&UBlackboardKeyTypeExt_GameplayTag::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTag.OuterSingleton, Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTag.OuterSingleton;
	}
	template<> BLACKBOARDGAMEPLAYTAGS_API UClass* StaticClass<UBlackboardKeyTypeExt_GameplayTag>()
	{
		return UBlackboardKeyTypeExt_GameplayTag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyTypeExt_GameplayTag);
	UBlackboardKeyTypeExt_GameplayTag::~UBlackboardKeyTypeExt_GameplayTag() {}
	struct Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyTypeExt_GameplayTag, UBlackboardKeyTypeExt_GameplayTag::StaticClass, TEXT("UBlackboardKeyTypeExt_GameplayTag"), &Z_Registration_Info_UClass_UBlackboardKeyTypeExt_GameplayTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyTypeExt_GameplayTag), 1829483055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTag_h_239243318(TEXT("/Script/BlackboardGameplayTags"),
		Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardKeyTypeExt_GameplayTag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
