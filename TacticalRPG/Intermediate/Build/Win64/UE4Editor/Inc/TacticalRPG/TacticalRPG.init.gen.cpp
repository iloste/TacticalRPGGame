// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTacticalRPG_init() {}
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature();
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_VitalStatUpdate__DelegateSignature();
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature();
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature();
	TACTICALRPG_API UFunction* Z_Construct_UDelegateFunction_TacticalRPG_UpdatedAbilityPopup__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TacticalRPG()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TacticalRPG_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TacticalRPG_VitalStatUpdate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentCharacter__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TacticalRPG_UpdatedCurrentTurnOrder__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TacticalRPG_UpdatedAbilityPopup__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TacticalRPG",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7EDF05F8,
				0xCA503606,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
