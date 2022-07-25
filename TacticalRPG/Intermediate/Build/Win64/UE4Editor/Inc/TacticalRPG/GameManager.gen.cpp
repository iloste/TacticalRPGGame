// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/GameManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_AGameManager();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UClass* Z_Construct_UClass_UInGameDataBase_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_ATRPGCharacter_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UHealthSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameManager::execBindDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameManager::execRespondToOnDeath)
	{
		P_GET_OBJECT(UHealthSystem,Z_Param_hs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RespondToOnDeath(Z_Param_hs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameManager::execSetDatabase)
	{
		P_GET_OBJECT(UInGameDataBase,Z_Param_database);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDatabase(Z_Param_database);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameManager::execGetDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInGameDataBase**)Z_Param__Result=P_THIS->GetDatabase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameManager::execgetNextCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATRPGCharacter**)Z_Param__Result=P_THIS->getNextCharacter();
		P_NATIVE_END;
	}
	void AGameManager::StaticRegisterNativesAGameManager()
	{
		UClass* Class = AGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindDelegates", &AGameManager::execBindDelegates },
			{ "GetDatabase", &AGameManager::execGetDatabase },
			{ "getNextCharacter", &AGameManager::execgetNextCharacter },
			{ "RespondToOnDeath", &AGameManager::execRespondToOnDeath },
			{ "SetDatabase", &AGameManager::execSetDatabase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameManager_BindDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_BindDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_BindDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "BindDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_BindDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_BindDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_BindDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameManager_BindDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameManager_GetDatabase_Statics
	{
		struct GameManager_eventGetDatabase_Parms
		{
			UInGameDataBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_GetDatabase_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_GetDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventGetDatabase_Parms, ReturnValue), Z_Construct_UClass_UInGameDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_GetDatabase_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetDatabase_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_GetDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_GetDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_GetDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_GetDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "GetDatabase", nullptr, nullptr, sizeof(GameManager_eventGetDatabase_Parms), Z_Construct_UFunction_AGameManager_GetDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_GetDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_GetDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameManager_GetDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameManager_getNextCharacter_Statics
	{
		struct GameManager_eventgetNextCharacter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventgetNextCharacter_Parms, ReturnValue), Z_Construct_UClass_ATRPGCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "getNextCharacter", nullptr, nullptr, sizeof(GameManager_eventgetNextCharacter_Parms), Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_getNextCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameManager_getNextCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics
	{
		struct GameManager_eventRespondToOnDeath_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::NewProp_hs_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::NewProp_hs = { "hs", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventRespondToOnDeath_Parms, hs), Z_Construct_UClass_UHealthSystem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::NewProp_hs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::NewProp_hs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::NewProp_hs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "RespondToOnDeath", nullptr, nullptr, sizeof(GameManager_eventRespondToOnDeath_Parms), Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_RespondToOnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameManager_RespondToOnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameManager_SetDatabase_Statics
	{
		struct GameManager_eventSetDatabase_Parms
		{
			UInGameDataBase* database;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_database_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_database;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_SetDatabase_Statics::NewProp_database_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_SetDatabase_Statics::NewProp_database = { "database", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventSetDatabase_Parms, database), Z_Construct_UClass_UInGameDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_SetDatabase_Statics::NewProp_database_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetDatabase_Statics::NewProp_database_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_SetDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_SetDatabase_Statics::NewProp_database,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_SetDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_SetDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "SetDatabase", nullptr, nullptr, sizeof(GameManager_eventSetDatabase_Parms), Z_Construct_UFunction_AGameManager_SetDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_SetDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_SetDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameManager_SetDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameManager_NoRegister()
	{
		return AGameManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_test_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_test;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_allCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_allCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_allCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_turnPointsThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_turnPointsThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameManager_BindDelegates, "BindDelegates" }, // 1881090153
		{ &Z_Construct_UFunction_AGameManager_GetDatabase, "GetDatabase" }, // 2036221152
		{ &Z_Construct_UFunction_AGameManager_getNextCharacter, "getNextCharacter" }, // 3108263485
		{ &Z_Construct_UFunction_AGameManager_RespondToOnDeath, "RespondToOnDeath" }, // 1810596120
		{ &Z_Construct_UFunction_AGameManager_SetDatabase, "SetDatabase" }, // 106011111
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_test_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_test = { "test", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameManager, test), METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::NewProp_test_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_test_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_m_allCharacters_Inner = { "m_allCharacters", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATRPGCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_m_allCharacters_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_m_allCharacters = { "m_allCharacters", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameManager, m_allCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::NewProp_m_allCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_m_allCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_m_turnPointsThreshold_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_m_turnPointsThreshold = { "m_turnPointsThreshold", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameManager, m_turnPointsThreshold), METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::NewProp_m_turnPointsThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_m_turnPointsThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_test,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_m_allCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_m_allCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_m_turnPointsThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
		&AGameManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameManager, 1113156936);
	template<> TACTICALRPG_API UClass* StaticClass<AGameManager>()
	{
		return AGameManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameManager(Z_Construct_UClass_AGameManager, &AGameManager::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("AGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
