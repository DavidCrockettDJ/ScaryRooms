// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaryRooms/Public/SCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SCARYROOMS_API UClass* Z_Construct_UClass_ASCharacter();
SCARYROOMS_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ScaryRooms();
// End Cross Module References

// Begin Class ASCharacter
void ASCharacter::StaticRegisterNativesASCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCharacter);
UClass* Z_Construct_UClass_ASCharacter_NoRegister()
{
	return ASCharacter::StaticClass();
}
struct Z_Construct_UClass_ASCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCharacter.h" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ScaryRooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCharacter_Statics::ClassParams = {
	&ASCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASCharacter()
{
	if (!Z_Registration_Info_UClass_ASCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCharacter.OuterSingleton, Z_Construct_UClass_ASCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASCharacter.OuterSingleton;
}
template<> SCARYROOMS_API UClass* StaticClass<ASCharacter>()
{
	return ASCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
ASCharacter::~ASCharacter() {}
// End Class ASCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ScaryRooms_ScaryRooms_Source_ScaryRooms_Public_SCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASCharacter, ASCharacter::StaticClass, TEXT("ASCharacter"), &Z_Registration_Info_UClass_ASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCharacter), 1541300197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ScaryRooms_ScaryRooms_Source_ScaryRooms_Public_SCharacter_h_347002692(TEXT("/Script/ScaryRooms"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ScaryRooms_ScaryRooms_Source_ScaryRooms_Public_SCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ScaryRooms_ScaryRooms_Source_ScaryRooms_Public_SCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
