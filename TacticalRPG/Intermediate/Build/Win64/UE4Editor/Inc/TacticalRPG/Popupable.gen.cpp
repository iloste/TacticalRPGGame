// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/Popupable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopupable() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_UPopupable_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UPopupable();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
// End Cross Module References
	DEFINE_FUNCTION(UPopupable::execPopupDeactivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopupDeactivated();
		P_NATIVE_END;
	}
	void UPopupable::StaticRegisterNativesUPopupable()
	{
		UClass* Class = UPopupable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PopupDeactivated", &UPopupable::execPopupDeactivated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPopupable_PopupDeactivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPopupable_PopupDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Popupable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPopupable_PopupDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPopupable, nullptr, "PopupDeactivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPopupable_PopupDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPopupable_PopupDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPopupable_PopupDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPopupable_PopupDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPopupable_NoRegister()
	{
		return UPopupable::StaticClass();
	}
	struct Z_Construct_UClass_UPopupable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_popupActive_MetaData[];
#endif
		static void NewProp_m_popupActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_popupActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPopupable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPopupable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPopupable_PopupDeactivated, "PopupDeactivated" }, // 3958290286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Popupable.h" },
		{ "ModuleRelativePath", "Public/Popupable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupable_Statics::NewProp_m_popupActive_MetaData[] = {
		{ "Category", "Popupable" },
		{ "ModuleRelativePath", "Public/Popupable.h" },
	};
#endif
	void Z_Construct_UClass_UPopupable_Statics::NewProp_m_popupActive_SetBit(void* Obj)
	{
		((UPopupable*)Obj)->m_popupActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPopupable_Statics::NewProp_m_popupActive = { "m_popupActive", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPopupable), &Z_Construct_UClass_UPopupable_Statics::NewProp_m_popupActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPopupable_Statics::NewProp_m_popupActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupable_Statics::NewProp_m_popupActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPopupable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPopupable_Statics::NewProp_m_popupActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPopupable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPopupable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPopupable_Statics::ClassParams = {
		&UPopupable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPopupable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPopupable_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPopupable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPopupable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPopupable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPopupable, 3657296112);
	template<> TACTICALRPG_API UClass* StaticClass<UPopupable>()
	{
		return UPopupable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPopupable(Z_Construct_UClass_UPopupable, &UPopupable::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UPopupable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPopupable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
