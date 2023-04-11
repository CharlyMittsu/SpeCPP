// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "speCPPUnreal/speCPPUnrealHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodespeCPPUnrealHUD() {}
// Cross Module References
	SPECPPUNREAL_API UClass* Z_Construct_UClass_AspeCPPUnrealHUD_NoRegister();
	SPECPPUNREAL_API UClass* Z_Construct_UClass_AspeCPPUnrealHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_speCPPUnreal();
// End Cross Module References
	void AspeCPPUnrealHUD::StaticRegisterNativesAspeCPPUnrealHUD()
	{
	}
	UClass* Z_Construct_UClass_AspeCPPUnrealHUD_NoRegister()
	{
		return AspeCPPUnrealHUD::StaticClass();
	}
	struct Z_Construct_UClass_AspeCPPUnrealHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AspeCPPUnrealHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_speCPPUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AspeCPPUnrealHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "speCPPUnrealHUD.h" },
		{ "ModuleRelativePath", "speCPPUnrealHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AspeCPPUnrealHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AspeCPPUnrealHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AspeCPPUnrealHUD_Statics::ClassParams = {
		&AspeCPPUnrealHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AspeCPPUnrealHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AspeCPPUnrealHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AspeCPPUnrealHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AspeCPPUnrealHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AspeCPPUnrealHUD, 2756038004);
	template<> SPECPPUNREAL_API UClass* StaticClass<AspeCPPUnrealHUD>()
	{
		return AspeCPPUnrealHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AspeCPPUnrealHUD(Z_Construct_UClass_AspeCPPUnrealHUD, &AspeCPPUnrealHUD::StaticClass, TEXT("/Script/speCPPUnreal"), TEXT("AspeCPPUnrealHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AspeCPPUnrealHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
