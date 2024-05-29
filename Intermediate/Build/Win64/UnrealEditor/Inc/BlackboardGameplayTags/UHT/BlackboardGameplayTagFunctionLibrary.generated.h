// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackboardGameplayTagFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlackboardComponent;
class UBTNode;
class UObject;
struct FBlackboardKeySelector;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef BLACKBOARDGAMEPLAYTAGS_BlackboardGameplayTagFunctionLibrary_generated_h
#error "BlackboardGameplayTagFunctionLibrary.generated.h already included, missing '#pragma once' in BlackboardGameplayTagFunctionLibrary.h"
#endif
#define BLACKBOARDGAMEPLAYTAGS_BlackboardGameplayTagFunctionLibrary_generated_h

#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_SPARSE_DATA
#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddGameplayTagContainerFilter); \
	DECLARE_FUNCTION(execSetBlackboardValueAsGameplayTagContainer); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTagContainer); \
	DECLARE_FUNCTION(execAddGameplayTagFilter); \
	DECLARE_FUNCTION(execSetBlackboardValueAsGameplayTag); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTag); \
	DECLARE_FUNCTION(execSetValueAsGameplayTagContainer); \
	DECLARE_FUNCTION(execGetValueAsGameplayTagContainer); \
	DECLARE_FUNCTION(execSetValueAsGameplayTag); \
	DECLARE_FUNCTION(execGetValueAsGameplayTag);


#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_ACCESSORS
#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardGameplayTagFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlackboardGameplayTagFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackboardGameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardGameplayTagFunctionLibrary)


#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardGameplayTagFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardGameplayTagFunctionLibrary(UBlackboardGameplayTagFunctionLibrary&&); \
	NO_API UBlackboardGameplayTagFunctionLibrary(const UBlackboardGameplayTagFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardGameplayTagFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardGameplayTagFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardGameplayTagFunctionLibrary) \
	NO_API virtual ~UBlackboardGameplayTagFunctionLibrary();


#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_16_PROLOG
#define FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_SPARSE_DATA \
	FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_ACCESSORS \
	FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKBOARDGAMEPLAYTAGS_API UClass* StaticClass<class UBlackboardGameplayTagFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
