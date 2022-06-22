// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/HealthSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthSystem() {}
// Cross Module References
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UClass* Z_Construct_UClass_UHealthSystem_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UHealthSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics
	{
		struct _Script_TacticalRPG_eventOnDeath_Parms
		{
			UHealthSystem* hs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::NewProp_hs_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::NewProp_hs = { "hs", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TacticalRPG_eventOnDeath_Parms, hs), Z_Construct_UClass_UHealthSystem_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::NewProp_hs_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::NewProp_hs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::NewProp_hs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TacticalRPG, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, sizeof(_Script_TacticalRPG_eventOnDeath_Parms), Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHealthSystem::exectakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->takeDamage(Z_Param_damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentManaAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentManaAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentManaAsPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentManaAsPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentStaminaAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentStaminaAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentStaminaAsPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentStaminaAsPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentHealthAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentHealthAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execGetCurrentHeatlhAsPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHeatlhAsPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthSystem::execgetCurrentHeatlh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getCurrentHeatlh();
		P_NATIVE_END;
	}
	void UHealthSystem::StaticRegisterNativesUHealthSystem()
	{
		UClass* Class = UHealthSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentHealthAsString", &UHealthSystem::execGetCurrentHealthAsString },
			{ "getCurrentHeatlh", &UHealthSystem::execgetCurrentHeatlh },
			{ "GetCurrentHeatlhAsPercentage", &UHealthSystem::execGetCurrentHeatlhAsPercentage },
			{ "GetCurrentMana", &UHealthSystem::execGetCurrentMana },
			{ "GetCurrentManaAsPercentage", &UHealthSystem::execGetCurrentManaAsPercentage },
			{ "GetCurrentManaAsString", &UHealthSystem::execGetCurrentManaAsString },
			{ "GetCurrentStamina", &UHealthSystem::execGetCurrentStamina },
			{ "GetCurrentStaminaAsPercentage", &UHealthSystem::execGetCurrentStaminaAsPercentage },
			{ "GetCurrentStaminaAsString", &UHealthSystem::execGetCurrentStaminaAsString },
			{ "takeDamage", &UHealthSystem::exectakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics
	{
		struct HealthSystem_eventGetCurrentHealthAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentHealthAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Returns the health as a string in the format 1000/1000\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "<summary>\nReturns the health as a string in the format 1000/1000\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentHealthAsString", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentHealthAsString_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics
	{
		struct HealthSystem_eventgetCurrentHeatlh_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventgetCurrentHeatlh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Heatlh\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "Heatlh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "getCurrentHeatlh", nullptr, nullptr, sizeof(HealthSystem_eventgetCurrentHeatlh_Parms), Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics
	{
		struct HealthSystem_eventGetCurrentHeatlhAsPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentHeatlhAsPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Returns the health as a value between 0-1\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "<summary>\nReturns the health as a value between 0-1\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentHeatlhAsPercentage", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentHeatlhAsPercentage_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics
	{
		struct HealthSystem_eventGetCurrentMana_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// mana\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "mana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentMana", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentMana_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics
	{
		struct HealthSystem_eventGetCurrentManaAsPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentManaAsPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Returns the mana as a value between 0-1\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "<summary>\nReturns the mana as a value between 0-1\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentManaAsPercentage", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentManaAsPercentage_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics
	{
		struct HealthSystem_eventGetCurrentManaAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentManaAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Returns the mana as a string in the format 1000/1000\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "<summary>\nReturns the mana as a string in the format 1000/1000\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentManaAsString", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentManaAsString_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics
	{
		struct HealthSystem_eventGetCurrentStamina_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Stamina\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "Stamina" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentStamina", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentStamina_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics
	{
		struct HealthSystem_eventGetCurrentStaminaAsPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentStaminaAsPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Returns the stamina as a value between 0-1\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "<summary>\nReturns the stamina as a value between 0-1\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentStaminaAsPercentage", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentStaminaAsPercentage_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics
	{
		struct HealthSystem_eventGetCurrentStaminaAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventGetCurrentStaminaAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Returns the stamina as a string in the format 1000/1000\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
		{ "ToolTip", "<summary>\nReturns the stamina as a string in the format 1000/1000\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "GetCurrentStaminaAsString", nullptr, nullptr, sizeof(HealthSystem_eventGetCurrentStaminaAsString_Parms), Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystem_takeDamage_Statics
	{
		struct HealthSystem_eventtakeDamage_Parms
		{
			int32 damage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystem_eventtakeDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystem, nullptr, "takeDamage", nullptr, nullptr, sizeof(HealthSystem_eventtakeDamage_Parms), Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystem_takeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystem_takeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealthSystem_NoRegister()
	{
		return UHealthSystem::StaticClass();
	}
	struct Z_Construct_UClass_UHealthSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_onDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_onDeath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentHealthAsString, "GetCurrentHealthAsString" }, // 955688904
		{ &Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh, "getCurrentHeatlh" }, // 188275825
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentHeatlhAsPercentage, "GetCurrentHeatlhAsPercentage" }, // 537127984
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentMana, "GetCurrentMana" }, // 2392927419
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsPercentage, "GetCurrentManaAsPercentage" }, // 3923900278
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentManaAsString, "GetCurrentManaAsString" }, // 2161418498
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentStamina, "GetCurrentStamina" }, // 1786610343
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsPercentage, "GetCurrentStaminaAsPercentage" }, // 3350790435
		{ &Z_Construct_UFunction_UHealthSystem_GetCurrentStaminaAsString, "GetCurrentStaminaAsString" }, // 2851990590
		{ &Z_Construct_UFunction_UHealthSystem_takeDamage, "takeDamage" }, // 3930486583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealthSystem.h" },
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthSystem_Statics::NewProp_m_onDeath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthSystem_Statics::NewProp_m_onDeath = { "m_onDeath", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthSystem, m_onDeath), Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHealthSystem_Statics::NewProp_m_onDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystem_Statics::NewProp_m_onDeath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthSystem_Statics::NewProp_m_onDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthSystem_Statics::ClassParams = {
		&UHealthSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealthSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthSystem, 1964839617);
	template<> TACTICALRPG_API UClass* StaticClass<UHealthSystem>()
	{
		return UHealthSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthSystem(Z_Construct_UClass_UHealthSystem, &UHealthSystem::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UHealthSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
