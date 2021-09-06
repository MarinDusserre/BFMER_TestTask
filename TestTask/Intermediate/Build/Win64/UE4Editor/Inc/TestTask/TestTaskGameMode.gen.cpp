// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTask/TestTaskGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTaskGameMode() {}
// Cross Module References
	TESTTASK_API UClass* Z_Construct_UClass_ATestTaskGameMode_NoRegister();
	TESTTASK_API UClass* Z_Construct_UClass_ATestTaskGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestTask();
// End Cross Module References
	void ATestTaskGameMode::StaticRegisterNativesATestTaskGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestTaskGameMode_NoRegister()
	{
		return ATestTaskGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestTaskGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTaskGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTaskGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestTaskGameMode.h" },
		{ "ModuleRelativePath", "TestTaskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTaskGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTaskGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestTaskGameMode_Statics::ClassParams = {
		&ATestTaskGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATestTaskGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestTaskGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestTaskGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestTaskGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestTaskGameMode, 2935399456);
	template<> TESTTASK_API UClass* StaticClass<ATestTaskGameMode>()
	{
		return ATestTaskGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestTaskGameMode(Z_Construct_UClass_ATestTaskGameMode, &ATestTaskGameMode::StaticClass, TEXT("/Script/TestTask"), TEXT("ATestTaskGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTaskGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
