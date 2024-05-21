// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNNA/NNNAGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNNAGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NNNA_API UClass* Z_Construct_UClass_ANNNAGameMode();
	NNNA_API UClass* Z_Construct_UClass_ANNNAGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNNA();
// End Cross Module References
	void ANNNAGameMode::StaticRegisterNativesANNNAGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANNNAGameMode);
	UClass* Z_Construct_UClass_ANNNAGameMode_NoRegister()
	{
		return ANNNAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANNNAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANNNAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NNNA,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANNNAGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANNNAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NNNAGameMode.h" },
		{ "ModuleRelativePath", "NNNAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANNNAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANNNAGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANNNAGameMode_Statics::ClassParams = {
		&ANNNAGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANNNAGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANNNAGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANNNAGameMode()
	{
		if (!Z_Registration_Info_UClass_ANNNAGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANNNAGameMode.OuterSingleton, Z_Construct_UClass_ANNNAGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANNNAGameMode.OuterSingleton;
	}
	template<> NNNA_API UClass* StaticClass<ANNNAGameMode>()
	{
		return ANNNAGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANNNAGameMode);
	ANNNAGameMode::~ANNNAGameMode() {}
	struct Z_CompiledInDeferFile_FID_NNNA_Source_NNNA_NNNAGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NNNA_Source_NNNA_NNNAGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANNNAGameMode, ANNNAGameMode::StaticClass, TEXT("ANNNAGameMode"), &Z_Registration_Info_UClass_ANNNAGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANNNAGameMode), 3687137192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NNNA_Source_NNNA_NNNAGameMode_h_293626127(TEXT("/Script/NNNA"),
		Z_CompiledInDeferFile_FID_NNNA_Source_NNNA_NNNAGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NNNA_Source_NNNA_NNNAGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
