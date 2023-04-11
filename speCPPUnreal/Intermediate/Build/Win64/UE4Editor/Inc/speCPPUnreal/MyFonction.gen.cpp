// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "speCPPUnreal/Public/MyFonction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFonction() {}
// Cross Module References
	SPECPPUNREAL_API UClass* Z_Construct_UClass_UMyFonction_NoRegister();
	SPECPPUNREAL_API UClass* Z_Construct_UClass_UMyFonction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_speCPPUnreal();
// End Cross Module References
	DEFINE_FUNCTION(UMyFonction::execmaFonction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMyFonction::maFonction(Z_Param_t);
		P_NATIVE_END;
	}
	void UMyFonction::StaticRegisterNativesUMyFonction()
	{
		UClass* Class = UMyFonction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "maFonction", &UMyFonction::execmaFonction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyFonction_maFonction_Statics
	{
		struct MyFonction_eventmaFonction_Parms
		{
			FString t;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_t;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyFonction_maFonction_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFonction_eventmaFonction_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFonction_maFonction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFonction_maFonction_Statics::NewProp_t,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyFonction_maFonction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyFonction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFonction_maFonction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyFonction, nullptr, "maFonction", nullptr, nullptr, sizeof(MyFonction_eventmaFonction_Parms), Z_Construct_UFunction_UMyFonction_maFonction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFonction_maFonction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyFonction_maFonction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFonction_maFonction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyFonction_maFonction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyFonction_maFonction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyFonction_NoRegister()
	{
		return UMyFonction::StaticClass();
	}
	struct Z_Construct_UClass_UMyFonction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyFonction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_speCPPUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyFonction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyFonction_maFonction, "maFonction" }, // 3164172130
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFonction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyFonction.h" },
		{ "ModuleRelativePath", "Public/MyFonction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyFonction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFonction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyFonction_Statics::ClassParams = {
		&UMyFonction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyFonction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyFonction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyFonction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyFonction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyFonction, 3861057039);
	template<> SPECPPUNREAL_API UClass* StaticClass<UMyFonction>()
	{
		return UMyFonction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyFonction(Z_Construct_UClass_UMyFonction, &UMyFonction::StaticClass, TEXT("/Script/speCPPUnreal"), TEXT("UMyFonction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFonction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
