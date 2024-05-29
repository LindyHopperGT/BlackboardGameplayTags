// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackboardGameplayTags/Public/BlackboardGameplayTagFunctionLibrary.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardGameplayTagFunctionLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	BLACKBOARDGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary();
	BLACKBOARDGAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_BlackboardGameplayTags();
// End Cross Module References
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execAddGameplayTagContainerFilter)
	{
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_InSelector);
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlackboardGameplayTagFunctionLibrary::AddGameplayTagContainerFilter(Z_Param_Out_InSelector,Z_Param_Owner,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execSetBlackboardValueAsGameplayTagContainer)
	{
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlackboardGameplayTagFunctionLibrary::SetBlackboardValueAsGameplayTagContainer(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execGetBlackboardValueAsGameplayTagContainer)
	{
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UBlackboardGameplayTagFunctionLibrary::GetBlackboardValueAsGameplayTagContainer(Z_Param_NodeOwner,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execAddGameplayTagFilter)
	{
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_InSelector);
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlackboardGameplayTagFunctionLibrary::AddGameplayTagFilter(Z_Param_Out_InSelector,Z_Param_Owner,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execSetBlackboardValueAsGameplayTag)
	{
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
		P_GET_STRUCT(FGameplayTag,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlackboardGameplayTagFunctionLibrary::SetBlackboardValueAsGameplayTag(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execGetBlackboardValueAsGameplayTag)
	{
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UBlackboardGameplayTagFunctionLibrary::GetBlackboardValueAsGameplayTag(Z_Param_NodeOwner,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execSetValueAsGameplayTagContainer)
	{
		P_GET_OBJECT(UBlackboardComponent,Z_Param_BlackboardComp);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlackboardGameplayTagFunctionLibrary::SetValueAsGameplayTagContainer(Z_Param_BlackboardComp,Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execGetValueAsGameplayTagContainer)
	{
		P_GET_OBJECT(UBlackboardComponent,Z_Param_BlackboardComp);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UBlackboardGameplayTagFunctionLibrary::GetValueAsGameplayTagContainer(Z_Param_BlackboardComp,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execSetValueAsGameplayTag)
	{
		P_GET_OBJECT(UBlackboardComponent,Z_Param_BlackboardComp);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_STRUCT(FGameplayTag,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlackboardGameplayTagFunctionLibrary::SetValueAsGameplayTag(Z_Param_BlackboardComp,Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlackboardGameplayTagFunctionLibrary::execGetValueAsGameplayTag)
	{
		P_GET_OBJECT(UBlackboardComponent,Z_Param_BlackboardComp);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UBlackboardGameplayTagFunctionLibrary::GetValueAsGameplayTag(Z_Param_BlackboardComp,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	void UBlackboardGameplayTagFunctionLibrary::StaticRegisterNativesUBlackboardGameplayTagFunctionLibrary()
	{
		UClass* Class = UBlackboardGameplayTagFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTagContainerFilter", &UBlackboardGameplayTagFunctionLibrary::execAddGameplayTagContainerFilter },
			{ "AddGameplayTagFilter", &UBlackboardGameplayTagFunctionLibrary::execAddGameplayTagFilter },
			{ "GetBlackboardValueAsGameplayTag", &UBlackboardGameplayTagFunctionLibrary::execGetBlackboardValueAsGameplayTag },
			{ "GetBlackboardValueAsGameplayTagContainer", &UBlackboardGameplayTagFunctionLibrary::execGetBlackboardValueAsGameplayTagContainer },
			{ "GetValueAsGameplayTag", &UBlackboardGameplayTagFunctionLibrary::execGetValueAsGameplayTag },
			{ "GetValueAsGameplayTagContainer", &UBlackboardGameplayTagFunctionLibrary::execGetValueAsGameplayTagContainer },
			{ "SetBlackboardValueAsGameplayTag", &UBlackboardGameplayTagFunctionLibrary::execSetBlackboardValueAsGameplayTag },
			{ "SetBlackboardValueAsGameplayTagContainer", &UBlackboardGameplayTagFunctionLibrary::execSetBlackboardValueAsGameplayTagContainer },
			{ "SetValueAsGameplayTag", &UBlackboardGameplayTagFunctionLibrary::execSetValueAsGameplayTag },
			{ "SetValueAsGameplayTagContainer", &UBlackboardGameplayTagFunctionLibrary::execSetValueAsGameplayTagContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagContainerFilter_Parms
		{
			FBlackboardKeySelector InSelector;
			UObject* Owner;
			FName PropertyName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelector;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::NewProp_InSelector = { "InSelector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagContainerFilter_Parms, InSelector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(0, nullptr) }; // 3137324432
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagContainerFilter_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagContainerFilter_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::NewProp_InSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "AddGameplayTagContainerFilter", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagContainerFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagContainerFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagFilter_Parms
		{
			FBlackboardKeySelector InSelector;
			UObject* Owner;
			FName PropertyName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelector;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::NewProp_InSelector = { "InSelector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagFilter_Parms, InSelector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(0, nullptr) }; // 3137324432
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagFilter_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagFilter_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::NewProp_InSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "AddGameplayTagFilter", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::BlackboardGameplayTagFunctionLibrary_eventAddGameplayTagFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTag_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTag_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTag_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_Key_MetaData) }; // 3137324432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_NodeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "GetBlackboardValueAsGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTagContainer_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTagContainer_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTagContainer_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData) }; // 3137324432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_NodeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "GetBlackboardValueAsGameplayTagContainer", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTagContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventGetBlackboardValueAsGameplayTagContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTag_Parms
		{
			const UBlackboardComponent* BlackboardComp;
			FName Key;
			FGameplayTag ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTag_Parms, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_BlackboardComp_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_BlackboardComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTag_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_BlackboardComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "GetValueAsGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTagContainer_Parms
		{
			const UBlackboardComponent* BlackboardComp;
			FName Key;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTagContainer_Parms, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTagContainer_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "GetValueAsGameplayTagContainer", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTagContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventGetValueAsGameplayTagContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTag_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FGameplayTag Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTag_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTag_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_Key_MetaData) }; // 3137324432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTag_Parms, Value), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_NodeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "SetBlackboardValueAsGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTagContainer_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FGameplayTagContainer Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTagContainer_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTagContainer_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData) }; // 3137324432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTagContainer_Parms, Value), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_NodeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "SetBlackboardValueAsGameplayTagContainer", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTagContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventSetBlackboardValueAsGameplayTagContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTag_Parms
		{
			UBlackboardComponent* BlackboardComp;
			FName Key;
			FGameplayTag Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTag_Parms, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_BlackboardComp_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_BlackboardComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTag_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTag_Parms, Value), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_BlackboardComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "SetValueAsGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics
	{
		struct BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTagContainer_Parms
		{
			UBlackboardComponent* BlackboardComp;
			FName Key;
			FGameplayTagContainer Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTagContainer_Parms, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTagContainer_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTagContainer_Parms, Value), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_BlackboardComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, nullptr, "SetValueAsGameplayTagContainer", nullptr, nullptr, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTagContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::BlackboardGameplayTagFunctionLibrary_eventSetValueAsGameplayTagContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardGameplayTagFunctionLibrary);
	UClass* Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_NoRegister()
	{
		return UBlackboardGameplayTagFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackboardGameplayTags,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagContainerFilter, "AddGameplayTagContainerFilter" }, // 89145522
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_AddGameplayTagFilter, "AddGameplayTagFilter" }, // 2668514104
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTag, "GetBlackboardValueAsGameplayTag" }, // 1382058666
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetBlackboardValueAsGameplayTagContainer, "GetBlackboardValueAsGameplayTagContainer" }, // 2405079482
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTag, "GetValueAsGameplayTag" }, // 358401950
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_GetValueAsGameplayTagContainer, "GetValueAsGameplayTagContainer" }, // 1254269585
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTag, "SetBlackboardValueAsGameplayTag" }, // 3699790850
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetBlackboardValueAsGameplayTagContainer, "SetBlackboardValueAsGameplayTagContainer" }, // 185301586
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTag, "SetValueAsGameplayTag" }, // 3337602371
		{ &Z_Construct_UFunction_UBlackboardGameplayTagFunctionLibrary_SetValueAsGameplayTagContainer, "SetValueAsGameplayTagContainer" }, // 1194661577
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlackboardGameplayTagFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BlackboardGameplayTagFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardGameplayTagFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::ClassParams = {
		&UBlackboardGameplayTagFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlackboardGameplayTagFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardGameplayTagFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardGameplayTagFunctionLibrary.OuterSingleton;
	}
	template<> BLACKBOARDGAMEPLAYTAGS_API UClass* StaticClass<UBlackboardGameplayTagFunctionLibrary>()
	{
		return UBlackboardGameplayTagFunctionLibrary::StaticClass();
	}
	UBlackboardGameplayTagFunctionLibrary::UBlackboardGameplayTagFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardGameplayTagFunctionLibrary);
	UBlackboardGameplayTagFunctionLibrary::~UBlackboardGameplayTagFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardGameplayTagFunctionLibrary, UBlackboardGameplayTagFunctionLibrary::StaticClass, TEXT("UBlackboardGameplayTagFunctionLibrary"), &Z_Registration_Info_UClass_UBlackboardGameplayTagFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardGameplayTagFunctionLibrary), 943351443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_3001421689(TEXT("/Script/BlackboardGameplayTags"),
		Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Meerkat_Plugins_ThirdParty_BlackboardGameplayTags_Source_BlackboardGameplayTags_Public_BlackboardGameplayTagFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
