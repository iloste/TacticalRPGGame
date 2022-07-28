// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/TRPGCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTRPGCharacter() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_ATRPGCharacter_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_ATRPGCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UClass* Z_Construct_UClass_UHealthSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UCharacterStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATRPGCharacter::execGetProfileImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetProfileImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATRPGCharacter::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATRPGCharacter::execSetID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetID(Z_Param_newID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATRPGCharacter::execID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATRPGCharacter::execGetHealthSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHealthSystem**)Z_Param__Result=P_THIS->GetHealthSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATRPGCharacter::execgetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterStats**)Z_Param__Result=P_THIS->getStats();
		P_NATIVE_END;
	}
	void ATRPGCharacter::StaticRegisterNativesATRPGCharacter()
	{
		UClass* Class = ATRPGCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthSystem", &ATRPGCharacter::execGetHealthSystem },
			{ "GetName", &ATRPGCharacter::execGetName },
			{ "GetProfileImage", &ATRPGCharacter::execGetProfileImage },
			{ "getStats", &ATRPGCharacter::execgetStats },
			{ "ID", &ATRPGCharacter::execID },
			{ "SetID", &ATRPGCharacter::execSetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics
	{
		struct TRPGCharacter_eventGetHealthSystem_Parms
		{
			UHealthSystem* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TRPGCharacter_eventGetHealthSystem_Parms, ReturnValue), Z_Construct_UClass_UHealthSystem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATRPGCharacter, nullptr, "GetHealthSystem", nullptr, nullptr, sizeof(TRPGCharacter_eventGetHealthSystem_Parms), Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATRPGCharacter_GetName_Statics
	{
		struct TRPGCharacter_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TRPGCharacter_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATRPGCharacter, nullptr, "GetName", nullptr, nullptr, sizeof(TRPGCharacter_eventGetName_Parms), Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATRPGCharacter_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATRPGCharacter_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics
	{
		struct TRPGCharacter_eventGetProfileImage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TRPGCharacter_eventGetProfileImage_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATRPGCharacter, nullptr, "GetProfileImage", nullptr, nullptr, sizeof(TRPGCharacter_eventGetProfileImage_Parms), Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATRPGCharacter_GetProfileImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATRPGCharacter_GetProfileImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATRPGCharacter_getStats_Statics
	{
		struct TRPGCharacter_eventgetStats_Parms
		{
			UCharacterStats* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TRPGCharacter_eventgetStats_Parms, ReturnValue), Z_Construct_UClass_UCharacterStats_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATRPGCharacter, nullptr, "getStats", nullptr, nullptr, sizeof(TRPGCharacter_eventgetStats_Parms), Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATRPGCharacter_getStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATRPGCharacter_getStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATRPGCharacter_ID_Statics
	{
		struct TRPGCharacter_eventID_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATRPGCharacter_ID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TRPGCharacter_eventID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATRPGCharacter_ID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATRPGCharacter_ID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_ID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATRPGCharacter_ID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATRPGCharacter, nullptr, "ID", nullptr, nullptr, sizeof(TRPGCharacter_eventID_Parms), Z_Construct_UFunction_ATRPGCharacter_ID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_ID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_ID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_ID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATRPGCharacter_ID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATRPGCharacter_ID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATRPGCharacter_SetID_Statics
	{
		struct TRPGCharacter_eventSetID_Parms
		{
			int32 newID;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::NewProp_newID = { "newID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TRPGCharacter_eventSetID_Parms, newID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::NewProp_newID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATRPGCharacter, nullptr, "SetID", nullptr, nullptr, sizeof(TRPGCharacter_eventSetID_Parms), Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATRPGCharacter_SetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATRPGCharacter_SetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATRPGCharacter_NoRegister()
	{
		return ATRPGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATRPGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_profileImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_profileImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATRPGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATRPGCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATRPGCharacter_GetHealthSystem, "GetHealthSystem" }, // 1102261189
		{ &Z_Construct_UFunction_ATRPGCharacter_GetName, "GetName" }, // 2931532228
		{ &Z_Construct_UFunction_ATRPGCharacter_GetProfileImage, "GetProfileImage" }, // 718516567
		{ &Z_Construct_UFunction_ATRPGCharacter_getStats, "getStats" }, // 2990874970
		{ &Z_Construct_UFunction_ATRPGCharacter_ID, "ID" }, // 3390423188
		{ &Z_Construct_UFunction_ATRPGCharacter_SetID, "SetID" }, // 4082842967
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATRPGCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TRPGCharacter.h" },
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_name_MetaData[] = {
		{ "Category", "TRPGCharacter" },
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_name = { "m_name", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATRPGCharacter, m_name), METADATA_PARAMS(Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_profileImage_MetaData[] = {
		{ "Category", "TRPGCharacter" },
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_profileImage = { "m_profileImage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATRPGCharacter, m_profileImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_profileImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_profileImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATRPGCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATRPGCharacter_Statics::NewProp_m_profileImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATRPGCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATRPGCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATRPGCharacter_Statics::ClassParams = {
		&ATRPGCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATRPGCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATRPGCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATRPGCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATRPGCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATRPGCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATRPGCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATRPGCharacter, 2946802467);
	template<> TACTICALRPG_API UClass* StaticClass<ATRPGCharacter>()
	{
		return ATRPGCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATRPGCharacter(Z_Construct_UClass_ATRPGCharacter, &ATRPGCharacter::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("ATRPGCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATRPGCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
