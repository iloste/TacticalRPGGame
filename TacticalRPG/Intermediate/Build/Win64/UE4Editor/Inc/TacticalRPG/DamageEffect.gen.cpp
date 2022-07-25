// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/DamageEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageEffect() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_UDamageEffect_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UDamageEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UEnum* Z_Construct_UEnum_TacticalRPG_VitalStats();
// End Cross Module References
	DEFINE_FUNCTION(UDamageEffect::execGetDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageEffect::execGetVitalStat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(VitalStats*)Z_Param__Result=P_THIS->GetVitalStat();
		P_NATIVE_END;
	}
	void UDamageEffect::StaticRegisterNativesUDamageEffect()
	{
		UClass* Class = UDamageEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamage", &UDamageEffect::execGetDamage },
			{ "GetVitalStat", &UDamageEffect::execGetVitalStat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageEffect_GetDamage_Statics
	{
		struct DamageEffect_eventGetDamage_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageEffect_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DamageEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageEffect, nullptr, "GetDamage", nullptr, nullptr, sizeof(DamageEffect_eventGetDamage_Parms), Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageEffect_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageEffect_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics
	{
		struct DamageEffect_eventGetVitalStat_Parms
		{
			VitalStats ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageEffect_eventGetVitalStat_Parms, ReturnValue), Z_Construct_UEnum_TacticalRPG_VitalStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~DamageEffect();\n" },
		{ "ModuleRelativePath", "Public/DamageEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageEffect, nullptr, "GetVitalStat", nullptr, nullptr, sizeof(DamageEffect_eventGetVitalStat_Parms), Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageEffect_GetVitalStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageEffect_GetVitalStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDamageEffect_NoRegister()
	{
		return UDamageEffect::StaticClass();
	}
	struct Z_Construct_UClass_UDamageEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageEffect_GetDamage, "GetDamage" }, // 3570124528
		{ &Z_Construct_UFunction_UDamageEffect_GetVitalStat, "GetVitalStat" }, // 3842239726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DamageEffect.h" },
		{ "ModuleRelativePath", "Public/DamageEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageEffect_Statics::ClassParams = {
		&UDamageEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDamageEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageEffect, 2052021017);
	template<> TACTICALRPG_API UClass* StaticClass<UDamageEffect>()
	{
		return UDamageEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageEffect(Z_Construct_UClass_UDamageEffect, &UDamageEffect::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UDamageEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
