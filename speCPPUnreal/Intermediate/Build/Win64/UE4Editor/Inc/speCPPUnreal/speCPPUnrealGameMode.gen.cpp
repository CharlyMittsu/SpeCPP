// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "speCPPUnreal/speCPPUnrealGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodespeCPPUnrealGameMode() {}
// Cross Module References
	SPECPPUNREAL_API UClass* Z_Construct_UClass_AspeCPPUnrealGameMode_NoRegister();
	SPECPPUNREAL_API UClass* Z_Construct_UClass_AspeCPPUnrealGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_speCPPUnreal();
// End Cross Module References
	void AspeCPPUnrealGameMode::StaticRegisterNativesAspeCPPUnrealGameMode()
	{
	}
	UClass* Z_Construct_UClass_AspeCPPUnrealGameMode_NoRegister()
	{
		return AspeCPPUnrealGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AspeCPPUnrealGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AspeCPPUnrealGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_speCPPUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AspeCPPUnrealGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "speCPPUnrealGameMode.h" },
		{ "ModuleRelativePath", "speCPPUnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AspeCPPUnrealGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AspeCPPUnrealGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AspeCPPUnrealGameMode_Statics::ClassParams = {
		&AspeCPPUnrealGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AspeCPPUnrealGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AspeCPPUnrealGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AspeCPPUnrealGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AspeCPPUnrealGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AspeCPPUnrealGameMode, 415162180);
	template<> SPECPPUNREAL_API UClass* StaticClass<AspeCPPUnrealGameMode>()
	{
		return AspeCPPUnrealGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AspeCPPUnrealGameMode(Z_Construct_UClass_AspeCPPUnrealGameMode, &AspeCPPUnrealGameMode::StaticClass, TEXT("/Script/speCPPUnreal"), TEXT("AspeCPPUnrealGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AspeCPPUnrealGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
