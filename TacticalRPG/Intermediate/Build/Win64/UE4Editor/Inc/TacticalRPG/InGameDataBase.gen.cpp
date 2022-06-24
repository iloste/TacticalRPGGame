// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/InGameDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameDataBase() {}
// Cross Module References
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature();
	TACTICALRPG_API UClass* Z_Construct_UClass_UInGameDataBase_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UInGameDataBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TACTICALRPG_API UClass* Z_Construct_UClass_ATRPGCharacter_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalRPG, nullptr, "UpdatedCurrentTurnOrder__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalRPG, nullptr, "UpdatedCurrentCharacter__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInGameDataBase::execGetCurrentTurnOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ATRPGCharacter*>*)Z_Param__Result=P_THIS->GetCurrentTurnOrder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameDataBase::execSetCurrentCharacter)
	{
		P_GET_OBJECT(ATRPGCharacter,Z_Param_newCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentCharacter(Z_Param_newCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameDataBase::execGetCurrentCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATRPGCharacter**)Z_Param__Result=P_THIS->GetCurrentCharacter();
		P_NATIVE_END;
	}
	void UInGameDataBase::StaticRegisterNativesUInGameDataBase()
	{
		UClass* Class = UInGameDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentCharacter", &UInGameDataBase::execGetCurrentCharacter },
			{ "GetCurrentTurnOrder", &UInGameDataBase::execGetCurrentTurnOrder },
			{ "SetCurrentCharacter", &UInGameDataBase::execSetCurrentCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics
	{
		struct InGameDataBase_eventGetCurrentCharacter_Parms
		{
			ATRPGCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameDataBase_eventGetCurrentCharacter_Parms, ReturnValue), Z_Construct_UClass_ATRPGCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameDataBase, nullptr, "GetCurrentCharacter", nullptr, nullptr, sizeof(InGameDataBase_eventGetCurrentCharacter_Parms), Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics
	{
		struct InGameDataBase_eventGetCurrentTurnOrder_Parms
		{
			TArray<ATRPGCharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATRPGCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameDataBase_eventGetCurrentTurnOrder_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameDataBase, nullptr, "GetCurrentTurnOrder", nullptr, nullptr, sizeof(InGameDataBase_eventGetCurrentTurnOrder_Parms), Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics
	{
		struct InGameDataBase_eventSetCurrentCharacter_Parms
		{
			ATRPGCharacter* newCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::NewProp_newCharacter = { "newCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameDataBase_eventSetCurrentCharacter_Parms, newCharacter), Z_Construct_UClass_ATRPGCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::NewProp_newCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameDataBase, nullptr, "SetCurrentCharacter", nullptr, nullptr, sizeof(InGameDataBase_eventSetCurrentCharacter_Parms), Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInGameDataBase_NoRegister()
	{
		return UInGameDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UInGameDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_updatedCurrentCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_updatedCurrentCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_updatedCurrentTurnOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_updatedCurrentTurnOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameDataBase_GetCurrentCharacter, "GetCurrentCharacter" }, // 2330389191
		{ &Z_Construct_UFunction_UInGameDataBase_GetCurrentTurnOrder, "GetCurrentTurnOrder" }, // 1785909725
		{ &Z_Construct_UFunction_UInGameDataBase_SetCurrentCharacter, "SetCurrentCharacter" }, // 472253033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InGameDataBase.h" },
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentCharacter = { "m_updatedCurrentCharacter", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameDataBase, m_updatedCurrentCharacter), Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentTurnOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/InGameDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentTurnOrder = { "m_updatedCurrentTurnOrder", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameDataBase, m_updatedCurrentTurnOrder), Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentTurnOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentTurnOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameDataBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameDataBase_Statics::NewProp_m_updatedCurrentTurnOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameDataBase_Statics::ClassParams = {
		&UInGameDataBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameDataBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameDataBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameDataBase, 3127189241);
	template<> TACTICALRPG_API UClass* StaticClass<UInGameDataBase>()
	{
		return UInGameDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameDataBase(Z_Construct_UClass_UInGameDataBase, &UInGameDataBase::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UInGameDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
