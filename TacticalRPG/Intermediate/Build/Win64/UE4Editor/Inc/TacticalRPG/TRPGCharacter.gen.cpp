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
// End Cross Module References
	void ATRPGCharacter::StaticRegisterNativesATRPGCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATRPGCharacter_NoRegister()
	{
		return ATRPGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATRPGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATRPGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATRPGCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TRPGCharacter.h" },
		{ "ModuleRelativePath", "Public/TRPGCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATRPGCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATRPGCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATRPGCharacter_Statics::ClassParams = {
		&ATRPGCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ATRPGCharacter, 3437571920);
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
