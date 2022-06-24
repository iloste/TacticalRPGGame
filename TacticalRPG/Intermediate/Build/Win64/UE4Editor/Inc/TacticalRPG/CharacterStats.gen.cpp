// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/CharacterStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStats() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_UCharacterStats_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UCharacterStats();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
// End Cross Module References
	void UCharacterStats::StaticRegisterNativesUCharacterStats()
	{
	}
	UClass* Z_Construct_UClass_UCharacterStats_NoRegister()
	{
		return UCharacterStats::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_testSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_testSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterStats.h" },
		{ "ModuleRelativePath", "Public/CharacterStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStats_Statics::NewProp_m_testSpeed_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/CharacterStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCharacterStats_Statics::NewProp_m_testSpeed = { "m_testSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStats, m_testSpeed), METADATA_PARAMS(Z_Construct_UClass_UCharacterStats_Statics::NewProp_m_testSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::NewProp_m_testSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStats_Statics::NewProp_m_testSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStats_Statics::ClassParams = {
		&UCharacterStats::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterStats, 1449498493);
	template<> TACTICALRPG_API UClass* StaticClass<UCharacterStats>()
	{
		return UCharacterStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterStats(Z_Construct_UClass_UCharacterStats, &UCharacterStats::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UCharacterStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
