// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/PopupInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopupInfo() {}
// Cross Module References
	TACTICALRPG_API UClass* Z_Construct_UClass_UPopupInfo_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UPopupInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
	TACTICALRPG_API UClass* Z_Construct_UClass_UPopupable_NoRegister();
	TACTICALRPG_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UPopupInfo::StaticRegisterNativesUPopupInfo()
	{
	}
	UClass* Z_Construct_UClass_UPopupInfo_NoRegister()
	{
		return UPopupInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPopupInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_popupAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_popupAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_popupAbilityPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_popupAbilityPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_popup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_popup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPopupInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PopupInfo.h" },
		{ "ModuleRelativePath", "Public/PopupInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_owner_MetaData[] = {
		{ "Category", "PopupInfo" },
		{ "Comment", "//UPopupInfo();\n//~UPopupInfo();\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PopupInfo.h" },
		{ "ToolTip", "UPopupInfo();" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_owner = { "m_owner", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPopupInfo, m_owner), Z_Construct_UClass_UPopupable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbility_MetaData[] = {
		{ "Category", "PopupInfo" },
		{ "ModuleRelativePath", "Public/PopupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbility = { "m_popupAbility", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPopupInfo, m_popupAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbilityPos_MetaData[] = {
		{ "Category", "PopupInfo" },
		{ "ModuleRelativePath", "Public/PopupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbilityPos = { "m_popupAbilityPos", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPopupInfo, m_popupAbilityPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbilityPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbilityPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popup_MetaData[] = {
		{ "Category", "PopupInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PopupInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popup = { "m_popup", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPopupInfo, m_popup), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPopupInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popupAbilityPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPopupInfo_Statics::NewProp_m_popup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPopupInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPopupInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPopupInfo_Statics::ClassParams = {
		&UPopupInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPopupInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPopupInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPopupInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPopupInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPopupInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPopupInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPopupInfo, 3149548325);
	template<> TACTICALRPG_API UClass* StaticClass<UPopupInfo>()
	{
		return UPopupInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPopupInfo(Z_Construct_UClass_UPopupInfo, &UPopupInfo::StaticClass, TEXT("/Script/TacticalRPG"), TEXT("UPopupInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPopupInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
