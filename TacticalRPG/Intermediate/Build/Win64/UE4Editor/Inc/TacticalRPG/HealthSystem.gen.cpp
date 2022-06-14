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
			{ "getCurrentHeatlh", &UHealthSystem::execgetCurrentHeatlh },
			{ "takeDamage", &UHealthSystem::exectakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "ModuleRelativePath", "Public/HealthSystem.h" },
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
		{ &Z_Construct_UFunction_UHealthSystem_getCurrentHeatlh, "getCurrentHeatlh" }, // 2658795096
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
	IMPLEMENT_CLASS(UHealthSystem, 148725500);
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
