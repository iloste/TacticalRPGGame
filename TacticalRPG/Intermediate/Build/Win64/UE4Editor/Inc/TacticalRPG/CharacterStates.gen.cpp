// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/CharacterStates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStates() {}
// Cross Module References
	TACTICALRPG_API UEnum* Z_Construct_UEnum_TacticalRPG_CharacterStates();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
// End Cross Module References
	static UEnum* CharacterStates_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalRPG_CharacterStates, Z_Construct_UPackage__Script_TacticalRPG(), TEXT("CharacterStates"));
		}
		return Singleton;
	}
	template<> TACTICALRPG_API UEnum* StaticEnum<CharacterStates>()
	{
		return CharacterStates_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CharacterStates(CharacterStates_StaticEnum, TEXT("/Script/TacticalRPG"), TEXT("CharacterStates"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalRPG_CharacterStates_Hash() { return 1693516456U; }
	UEnum* Z_Construct_UEnum_TacticalRPG_CharacterStates()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CharacterStates"), 0, Get_Z_Construct_UEnum_TacticalRPG_CharacterStates_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CharacterStates::Default", (int64)CharacterStates::Default },
				{ "CharacterStates::Idle", (int64)CharacterStates::Idle },
				{ "CharacterStates::Movement", (int64)CharacterStates::Movement },
				{ "CharacterStates::Attack", (int64)CharacterStates::Attack },
				{ "CharacterStates::Active", (int64)CharacterStates::Active },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Comment", "/**\n *\n */" },
				{ "Active.DisplayName", "Active" },
				{ "Active.Name", "CharacterStates::Active" },
				{ "Attack.Comment", "/**\n *\n */" },
				{ "Attack.DisplayName", "Attack" },
				{ "Attack.Name", "CharacterStates::Attack" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n *\n */" },
				{ "Default.Comment", "/**\n *\n */" },
				{ "Default.DisplayName", "Default" },
				{ "Default.Name", "CharacterStates::Default" },
				{ "Idle.Comment", "/**\n *\n */" },
				{ "Idle.DisplayName", "Idle" },
				{ "Idle.Name", "CharacterStates::Idle" },
				{ "ModuleRelativePath", "Public/CharacterStates.h" },
				{ "Movement.Comment", "/**\n *\n */" },
				{ "Movement.DisplayName", "Movement" },
				{ "Movement.Name", "CharacterStates::Movement" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalRPG,
				nullptr,
				"CharacterStates",
				"CharacterStates",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
