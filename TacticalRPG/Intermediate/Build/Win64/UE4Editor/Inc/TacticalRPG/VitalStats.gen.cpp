// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalRPG/Public/VitalStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitalStats() {}
// Cross Module References
	TACTICALRPG_API UEnum* Z_Construct_UEnum_TacticalRPG_VitalStats();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG();
// End Cross Module References
	static UEnum* VitalStats_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TacticalRPG_VitalStats, Z_Construct_UPackage__Script_TacticalRPG(), TEXT("VitalStats"));
		}
		return Singleton;
	}
	template<> TACTICALRPG_API UEnum* StaticEnum<VitalStats>()
	{
		return VitalStats_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_VitalStats(VitalStats_StaticEnum, TEXT("/Script/TacticalRPG"), TEXT("VitalStats"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TacticalRPG_VitalStats_Hash() { return 2670856743U; }
	UEnum* Z_Construct_UEnum_TacticalRPG_VitalStats()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TacticalRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("VitalStats"), 0, Get_Z_Construct_UEnum_TacticalRPG_VitalStats_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VitalStats::Health", (int64)VitalStats::Health },
				{ "VitalStats::Stamina", (int64)VitalStats::Stamina },
				{ "VitalStats::Mana", (int64)VitalStats::Mana },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "Health.Comment", "/**\n * \n */" },
				{ "Health.DisplayName", "Health" },
				{ "Health.Name", "VitalStats::Health" },
				{ "Mana.Comment", "/**\n * \n */" },
				{ "Mana.DisplayName", "Mana" },
				{ "Mana.Name", "VitalStats::Mana" },
				{ "ModuleRelativePath", "Public/VitalStats.h" },
				{ "Stamina.Comment", "/**\n * \n */" },
				{ "Stamina.DisplayName", "Stamina" },
				{ "Stamina.Name", "VitalStats::Stamina" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TacticalRPG,
				nullptr,
				"VitalStats",
				"VitalStats",
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
