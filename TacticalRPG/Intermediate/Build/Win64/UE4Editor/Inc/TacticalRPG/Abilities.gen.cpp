// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/Abilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilities() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_UAbilities_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UAbilities();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UClass* Z_Construct_UClass_UAbility_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAbilities::execgetAbilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAbility*>*)Z_Param__Result=P_THIS->getAbilities();
		P_NATIVE_END;
	}
	void UAbilities::StaticRegisterNativesUAbilities()
	{
		UClass* Class = UAbilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getAbilities", &UAbilities::execgetAbilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilities_getAbilities_Statics
	{
		struct Abilities_eventgetAbilities_Parms
		{
			TArray<UAbility*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilities_getAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilities_getAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Abilities_eventgetAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilities_getAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_getAbilities_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_getAbilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_getAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilities_getAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilities, nullptr, "getAbilities", nullptr, nullptr, sizeof(Abilities_eventgetAbilities_Parms), Z_Construct_UFunction_UAbilities_getAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilities_getAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilities_getAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilities_getAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilities_getAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilities_getAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilities_NoRegister()
	{
		return UAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilities_getAbilities, "getAbilities" }, // 83238710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Abilities.h" },
		{ "ModuleRelativePath", "Public/Abilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilities_Statics::ClassParams = {
		&UAbilities::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilities, 812833691);
	template<> TACTICALRPG_API UClass* StaticClass<UAbilities>()
	{
		return UAbilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilities(Z_Construct_UClass_UAbilities, &UAbilities::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UAbilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
