// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/Entity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntity() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_AEntity_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_AEntity();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
// End Cross Module References
	void AEntity::StaticRegisterNativesAEntity()
	{
	}
	UClass* Z_Construct_UClass_AEntity_NoRegister()
	{
		return AEntity::StaticClass();
	}
	struct Z_Construct_UClass_AEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Entity.h" },
		{ "ModuleRelativePath", "Public/Entity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEntity_Statics::ClassParams = {
		&AEntity::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEntity, 2588106546);
	template<> TACTICALRPG_API UClass* StaticClass<AEntity>()
	{
		return AEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEntity(Z_Construct_UClass_AEntity, &AEntity::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("AEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
