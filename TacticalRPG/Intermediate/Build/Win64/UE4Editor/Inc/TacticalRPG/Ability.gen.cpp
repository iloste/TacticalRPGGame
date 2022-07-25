// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/Ability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbility() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UAbility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UClass* Z_Construct_UClass_UDamageEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAbility::execGetDamageEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDamageEffect*>*)Z_Param__Result=P_THIS->GetDamageEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbility::execIsAreaEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAreaEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbility::execGetCastCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCastCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbility::execGetCastTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCastTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbility::execGetProfileImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetProfileImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbility::execgetRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbility::execgetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbility::execgetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getName();
		P_NATIVE_END;
	}
	void UAbility::StaticRegisterNativesUAbility()
	{
		UClass* Class = UAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCastCost", &UAbility::execGetCastCost },
			{ "GetCastTime", &UAbility::execGetCastTime },
			{ "GetDamageEffects", &UAbility::execGetDamageEffects },
			{ "getDescription", &UAbility::execgetDescription },
			{ "getName", &UAbility::execgetName },
			{ "GetProfileImage", &UAbility::execGetProfileImage },
			{ "getRange", &UAbility::execgetRange },
			{ "IsAreaEffect", &UAbility::execIsAreaEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbility_GetCastCost_Statics
	{
		struct Ability_eventGetCastCost_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAbility_GetCastCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventGetCastCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetCastCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetCastCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_GetCastCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetCastCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "GetCastCost", nullptr, nullptr, sizeof(Ability_eventGetCastCost_Parms), Z_Construct_UFunction_UAbility_GetCastCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetCastCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_GetCastCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetCastCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_GetCastCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_GetCastCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_GetCastTime_Statics
	{
		struct Ability_eventGetCastTime_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAbility_GetCastTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventGetCastTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetCastTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetCastTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_GetCastTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetCastTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "GetCastTime", nullptr, nullptr, sizeof(Ability_eventGetCastTime_Parms), Z_Construct_UFunction_UAbility_GetCastTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetCastTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_GetCastTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetCastTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_GetCastTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_GetCastTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_GetDamageEffects_Statics
	{
		struct Ability_eventGetDamageEffects_Parms
		{
			TArray<UDamageEffect*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDamageEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventGetDamageEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "GetDamageEffects", nullptr, nullptr, sizeof(Ability_eventGetDamageEffects_Parms), Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_GetDamageEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_GetDamageEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_getDescription_Statics
	{
		struct Ability_eventgetDescription_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbility_getDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventgetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_getDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_getDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_getDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_getDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "getDescription", nullptr, nullptr, sizeof(Ability_eventgetDescription_Parms), Z_Construct_UFunction_UAbility_getDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_getDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_getDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_getDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_getDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_getDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_getName_Statics
	{
		struct Ability_eventgetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbility_getName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventgetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_getName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_getName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_getName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_getName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "getName", nullptr, nullptr, sizeof(Ability_eventgetName_Parms), Z_Construct_UFunction_UAbility_getName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_getName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_getName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_getName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_getName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_getName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_GetProfileImage_Statics
	{
		struct Ability_eventGetProfileImage_Parms
		{
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_GetProfileImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventGetProfileImage_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetProfileImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetProfileImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_GetProfileImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetProfileImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "GetProfileImage", nullptr, nullptr, sizeof(Ability_eventGetProfileImage_Parms), Z_Construct_UFunction_UAbility_GetProfileImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetProfileImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_GetProfileImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetProfileImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_GetProfileImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_GetProfileImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_getRange_Statics
	{
		struct Ability_eventgetRange_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAbility_getRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventgetRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_getRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_getRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_getRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_getRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "getRange", nullptr, nullptr, sizeof(Ability_eventgetRange_Parms), Z_Construct_UFunction_UAbility_getRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_getRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_getRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_getRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_getRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_getRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_IsAreaEffect_Statics
	{
		struct Ability_eventIsAreaEffect_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventIsAreaEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Ability_eventIsAreaEffect_Parms), &Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsAreaEffect", nullptr, nullptr, sizeof(Ability_eventIsAreaEffect_Parms), Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_IsAreaEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_IsAreaEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbility_NoRegister()
	{
		return UAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbility_GetCastCost, "GetCastCost" }, // 3572923643
		{ &Z_Construct_UFunction_UAbility_GetCastTime, "GetCastTime" }, // 565288456
		{ &Z_Construct_UFunction_UAbility_GetDamageEffects, "GetDamageEffects" }, // 1484658203
		{ &Z_Construct_UFunction_UAbility_getDescription, "getDescription" }, // 971415296
		{ &Z_Construct_UFunction_UAbility_getName, "getName" }, // 2467267292
		{ &Z_Construct_UFunction_UAbility_GetProfileImage, "GetProfileImage" }, // 2679118819
		{ &Z_Construct_UFunction_UAbility_getRange, "getRange" }, // 1651447671
		{ &Z_Construct_UFunction_UAbility_IsAreaEffect, "IsAreaEffect" }, // 2873222473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Ability.h" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbility_Statics::ClassParams = {
		&UAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbility, 1731059327);
	template<> TACTICALRPG_API UClass* StaticClass<UAbility>()
	{
		return UAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbility(Z_Construct_UClass_UAbility, &UAbility::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
