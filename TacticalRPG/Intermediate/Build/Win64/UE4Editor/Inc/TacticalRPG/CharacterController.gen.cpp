// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/CharacterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterController() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_ACharacterController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UClass* Z_Construct_UClass_ATRPGCharacter_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UCharacterStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterController::execReduceInitiative)
	{
		P_GET_OBJECT(UCharacterStats,Z_Param_stats);
		P_GET_PROPERTY(FIntProperty,Z_Param_reductionAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceInitiative(Z_Param_stats,Z_Param_reductionAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execattack)
	{
		P_GET_OBJECT(ATRPGCharacter,Z_Param_enemy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->attack(Z_Param_enemy);
		P_NATIVE_END;
	}
	void ACharacterController::StaticRegisterNativesACharacterController()
	{
		UClass* Class = ACharacterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "attack", &ACharacterController::execattack },
			{ "ReduceInitiative", &ACharacterController::execReduceInitiative },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterController_attack_Statics
	{
		struct CharacterController_eventattack_Parms
		{
			ATRPGCharacter* enemy;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_attack_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventattack_Parms, enemy), Z_Construct_UClass_ATRPGCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_attack_Statics::NewProp_enemy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "attack", nullptr, nullptr, sizeof(CharacterController_eventattack_Parms), Z_Construct_UFunction_ACharacterController_attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterController_attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics
	{
		struct CharacterController_eventReduceInitiative_Parms
		{
			UCharacterStats* stats;
			int32 reductionAmount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stats;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_reductionAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::NewProp_stats_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventReduceInitiative_Parms, stats), Z_Construct_UClass_UCharacterStats_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::NewProp_stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::NewProp_stats_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::NewProp_reductionAmount = { "reductionAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventReduceInitiative_Parms, reductionAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::NewProp_stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::NewProp_reductionAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "ReduceInitiative", nullptr, nullptr, sizeof(CharacterController_eventReduceInitiative_Parms), Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_ReduceInitiative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterController_ReduceInitiative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterController_NoRegister()
	{
		return ACharacterController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_controlledCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_controlledCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterController_attack, "attack" }, // 2114161161
		{ &Z_Construct_UFunction_ACharacterController_ReduceInitiative, "ReduceInitiative" }, // 1511202235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CharacterController.h" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_m_controlledCharacter_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_m_controlledCharacter = { "m_controlledCharacter", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, m_controlledCharacter), Z_Construct_UClass_ATRPGCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_m_controlledCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_m_controlledCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_m_controlledCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterController_Statics::ClassParams = {
		&ACharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterController, 1537045782);
	template<> TACTICALRPG_API UClass* StaticClass<ACharacterController>()
	{
		return ACharacterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterController(Z_Construct_UClass_ACharacterController, &ACharacterController::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("ACharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
