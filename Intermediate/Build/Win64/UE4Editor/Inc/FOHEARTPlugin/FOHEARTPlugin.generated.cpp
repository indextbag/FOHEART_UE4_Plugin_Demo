// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FOHEARTPlugin.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FOHEARTPlugin() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	FOHEARTPLUGIN_API class UClass* Z_Construct_UClass_AFOHEARTPluginGameModeBase_NoRegister();
	FOHEARTPLUGIN_API class UClass* Z_Construct_UClass_AFOHEARTPluginGameModeBase();
	FOHEARTPLUGIN_API class UPackage* Z_Construct_UPackage__Script_FOHEARTPlugin();
	void AFOHEARTPluginGameModeBase::StaticRegisterNativesAFOHEARTPluginGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFOHEARTPluginGameModeBase_NoRegister()
	{
		return AFOHEARTPluginGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AFOHEARTPluginGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_FOHEARTPlugin();
			OuterClass = AFOHEARTPluginGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AFOHEARTPluginGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FOHEARTPluginGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FOHEARTPluginGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFOHEARTPluginGameModeBase, 1756650120);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFOHEARTPluginGameModeBase(Z_Construct_UClass_AFOHEARTPluginGameModeBase, &AFOHEARTPluginGameModeBase::StaticClass, TEXT("/Script/FOHEARTPlugin"), TEXT("AFOHEARTPluginGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFOHEARTPluginGameModeBase);
	UPackage* Z_Construct_UPackage__Script_FOHEARTPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FOHEARTPlugin")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x6D52BEDB;
			Guid.B = 0x38094635;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
