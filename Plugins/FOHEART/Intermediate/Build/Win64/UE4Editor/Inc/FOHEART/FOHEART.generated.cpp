// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FOHEART.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FOHEART() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	FOHEART_API class UClass* Z_Construct_UClass_AFOHEARTController_NoRegister();
	FOHEART_API class UClass* Z_Construct_UClass_AFOHEARTController();
	FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum();
	FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum();
	FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum();
	FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTXYZEnum();
	FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum();
	FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTSkeletonEnum();
	FOHEART_API class UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct();
	FOHEART_API class UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BoneSetOffset();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPause();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPlay();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHRewind();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectTCP();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectUDP();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Disconnect();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetBVHBoneIndex();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneLocation();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneRotation();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetReferencePoseLocalBoneRotation();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Init();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1InitBVHFile();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1NegateRotation();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Read();
	FOHEART_API class UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ReadArray();
	FOHEART_API class UClass* Z_Construct_UClass_UFOHEART_C1BPLibrary_NoRegister();
	FOHEART_API class UClass* Z_Construct_UClass_UFOHEART_C1BPLibrary();
	FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	void AFOHEARTController::StaticRegisterNativesAFOHEARTController()
	{
	}
	UClass* Z_Construct_UClass_AFOHEARTController_NoRegister()
	{
		return AFOHEARTController::StaticClass();
	}
	UClass* Z_Construct_UClass_AFOHEARTController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FOHEART();
			OuterClass = AFOHEARTController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AFOHEARTController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FOHEARTController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFOHEARTController, 4232318749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFOHEARTController(Z_Construct_UClass_AFOHEARTController, &AFOHEARTController::StaticClass, TEXT("/Script/FOHEART"), TEXT("AFOHEARTController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFOHEARTController);
static UEnum* EFOHEART_C1BonesEnum_StaticEnum()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum, Z_Construct_UPackage__Script_FOHEART(), TEXT("EFOHEART_C1BonesEnum"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFOHEART_C1BonesEnum(EFOHEART_C1BonesEnum_StaticEnum, TEXT("/Script/FOHEART"), TEXT("EFOHEART_C1BonesEnum"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFOHEART_C1BonesEnum"), 0, Get_Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFOHEART_C1BonesEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_Hips"), 0);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_Spine"), 1);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_Spine1"), 2);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_Spine2"), 3);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_Spine3"), 4);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_Neck"), 5);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_Head"), 6);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightShoulder"), 7);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightArm"), 8);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightForeArm"), 9);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightHand"), 10);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftShoulder"), 11);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftArm"), 12);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftForeArm"), 13);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftHand"), 14);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightUpLeg"), 15);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightLeg"), 16);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightFoot"), 17);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_RightToeBase"), 18);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftUpLeg"), 19);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftLeg"), 20);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftFoot"), 21);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_LeftToeBase"), 22);
			EnumNames.Emplace(TEXT("EFOHEART_C1BonesEnum::VE_MAX"), 23);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFOHEART_C1BonesEnum");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Bones delivered in the FOHEART_C1 live stream"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Head.DisplayName"), TEXT("Head"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Hips.DisplayName"), TEXT("Hips"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftArm.DisplayName"), TEXT("LeftArm"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftFoot.DisplayName"), TEXT("LeftFoot"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftForeArm.DisplayName"), TEXT("LeftForeArm"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftHand.DisplayName"), TEXT("LeftHand"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftLeg.DisplayName"), TEXT("LeftLeg"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftShoulder.DisplayName"), TEXT("LeftShoulder"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftToeBase.DisplayName"), TEXT("LeftToeBase"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LeftUpLeg.DisplayName"), TEXT("LeftUpLeg"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Neck.DisplayName"), TEXT("Neck"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightArm.DisplayName"), TEXT("RightArm"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightFoot.DisplayName"), TEXT("RightFoot"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightForeArm.DisplayName"), TEXT("RightForeArm"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightHand.DisplayName"), TEXT("RightHand"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightLeg.DisplayName"), TEXT("RightLeg"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightShoulder.DisplayName"), TEXT("RightShoulder"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightToeBase.DisplayName"), TEXT("RightToeBase"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RightUpLeg.DisplayName"), TEXT("RightUpLeg"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Spine.DisplayName"), TEXT("Spine1"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Spine1.DisplayName"), TEXT("Spine2"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Spine2.DisplayName"), TEXT("Spine3"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Spine3.DisplayName"), TEXT("Spine4"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum_CRC() { return 2334233061U; }
static UEnum* EFOHEARTChannelNumberEnum_StaticEnum()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum, Z_Construct_UPackage__Script_FOHEART(), TEXT("EFOHEARTChannelNumberEnum"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFOHEARTChannelNumberEnum(EFOHEARTChannelNumberEnum_StaticEnum, TEXT("/Script/FOHEART"), TEXT("EFOHEARTChannelNumberEnum"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFOHEARTChannelNumberEnum"), 0, Get_Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFOHEARTChannelNumberEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFOHEARTChannelNumberEnum::VE_0"), 0);
			EnumNames.Emplace(TEXT("EFOHEARTChannelNumberEnum::VE_1"), 1);
			EnumNames.Emplace(TEXT("EFOHEARTChannelNumberEnum::VE_2"), 2);
			EnumNames.Emplace(TEXT("EFOHEARTChannelNumberEnum::VE_3"), 3);
			EnumNames.Emplace(TEXT("EFOHEARTChannelNumberEnum::VE_4"), 4);
			EnumNames.Emplace(TEXT("EFOHEARTChannelNumberEnum::VE_5"), 5);
			EnumNames.Emplace(TEXT("EFOHEARTChannelNumberEnum::VE_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFOHEARTChannelNumberEnum");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_0.DisplayName"), TEXT("0"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_1.DisplayName"), TEXT("1"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_2.DisplayName"), TEXT("2"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_3.DisplayName"), TEXT("3"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_4.DisplayName"), TEXT("4"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_5.DisplayName"), TEXT("5"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum_CRC() { return 1471095480U; }
static UEnum* EFOHEARTRotOrderEnum_StaticEnum()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum, Z_Construct_UPackage__Script_FOHEART(), TEXT("EFOHEARTRotOrderEnum"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFOHEARTRotOrderEnum(EFOHEARTRotOrderEnum_StaticEnum, TEXT("/Script/FOHEART"), TEXT("EFOHEARTRotOrderEnum"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFOHEARTRotOrderEnum"), 0, Get_Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFOHEARTRotOrderEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFOHEARTRotOrderEnum::VE_XYZ"), 0);
			EnumNames.Emplace(TEXT("EFOHEARTRotOrderEnum::VE_XZY"), 1);
			EnumNames.Emplace(TEXT("EFOHEARTRotOrderEnum::VE_YXZ"), 2);
			EnumNames.Emplace(TEXT("EFOHEARTRotOrderEnum::VE_YZX"), 3);
			EnumNames.Emplace(TEXT("EFOHEARTRotOrderEnum::VE_ZXY"), 4);
			EnumNames.Emplace(TEXT("EFOHEARTRotOrderEnum::VE_ZYX"), 5);
			EnumNames.Emplace(TEXT("EFOHEARTRotOrderEnum::VE_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFOHEARTRotOrderEnum");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_XYZ.DisplayName"), TEXT("XYZ"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_XZY.DisplayName"), TEXT("XZY"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_YXZ.DisplayName"), TEXT("YXZ"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_YZX.DisplayName"), TEXT("YZX"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ZXY.DisplayName"), TEXT("ZXY"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ZYX.DisplayName"), TEXT("ZYX"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum_CRC() { return 3646176112U; }
static UEnum* EFOHEARTXYZEnum_StaticEnum()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTXYZEnum();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FOHEART_EFOHEARTXYZEnum, Z_Construct_UPackage__Script_FOHEART(), TEXT("EFOHEARTXYZEnum"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFOHEARTXYZEnum(EFOHEARTXYZEnum_StaticEnum, TEXT("/Script/FOHEART"), TEXT("EFOHEARTXYZEnum"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTXYZEnum()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTXYZEnum_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFOHEARTXYZEnum"), 0, Get_Z_Construct_UEnum_FOHEART_EFOHEARTXYZEnum_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFOHEARTXYZEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFOHEARTXYZEnum::VE_X"), 0);
			EnumNames.Emplace(TEXT("EFOHEARTXYZEnum::VE_Y"), 1);
			EnumNames.Emplace(TEXT("EFOHEARTXYZEnum::VE_Z"), 2);
			EnumNames.Emplace(TEXT("EFOHEARTXYZEnum::VE_NX"), 3);
			EnumNames.Emplace(TEXT("EFOHEARTXYZEnum::VE_NY"), 4);
			EnumNames.Emplace(TEXT("EFOHEARTXYZEnum::VE_NZ"), 5);
			EnumNames.Emplace(TEXT("EFOHEARTXYZEnum::VE_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFOHEARTXYZEnum");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NX.DisplayName"), TEXT("-X"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NY.DisplayName"), TEXT("-Y"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NZ.DisplayName"), TEXT("-Z"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_X.DisplayName"), TEXT("X"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Y.DisplayName"), TEXT("Y"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Z.DisplayName"), TEXT("Z"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTXYZEnum_CRC() { return 1348976777U; }
static UEnum* EFOHEARTMotionLineFormatEnum_StaticEnum()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum, Z_Construct_UPackage__Script_FOHEART(), TEXT("EFOHEARTMotionLineFormatEnum"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFOHEARTMotionLineFormatEnum(EFOHEARTMotionLineFormatEnum_StaticEnum, TEXT("/Script/FOHEART"), TEXT("EFOHEARTMotionLineFormatEnum"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFOHEARTMotionLineFormatEnum"), 0, Get_Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFOHEARTMotionLineFormatEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFOHEARTMotionLineFormatEnum::VE_Standard"), 0);
			EnumNames.Emplace(TEXT("EFOHEARTMotionLineFormatEnum::VE_FOHEART_C1"), 1);
			EnumNames.Emplace(TEXT("EFOHEARTMotionLineFormatEnum::VE_FOHEART_LEO"), 2);
			EnumNames.Emplace(TEXT("EFOHEARTMotionLineFormatEnum::VE_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFOHEARTMotionLineFormatEnum");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_C1.DisplayName"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_C1.ToolTip"), TEXT("FOHEART C1 BVH live stream format, 23 skeleton."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_LEO.DisplayName"), TEXT("FOHEART_LEO"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_LEO.ToolTip"), TEXT("FOHEART LEO BVH live stream format, 61 skeleton."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Standard.DisplayName"), TEXT("Standard"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Standard.ToolTip"), TEXT("BVH Standard format (only the float numbers and a CR or LF at line ending)."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum_CRC() { return 1088514964U; }
static UEnum* EFOHEARTSkeletonEnum_StaticEnum()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern FOHEART_API class UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTSkeletonEnum();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FOHEART_EFOHEARTSkeletonEnum, Z_Construct_UPackage__Script_FOHEART(), TEXT("EFOHEARTSkeletonEnum"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFOHEARTSkeletonEnum(EFOHEARTSkeletonEnum_StaticEnum, TEXT("/Script/FOHEART"), TEXT("EFOHEARTSkeletonEnum"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_FOHEART_EFOHEARTSkeletonEnum()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTSkeletonEnum_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFOHEARTSkeletonEnum"), 0, Get_Z_Construct_UEnum_FOHEART_EFOHEARTSkeletonEnum_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFOHEARTSkeletonEnum"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_None"), 0);
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_FOHEART_C1"), 1);
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_FOHEART_LEO"), 2);
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_TPP_Hero"), 3);
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_Mannequin"), 4);
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_Map"), 5);
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_UE4"), 6);
			EnumNames.Emplace(TEXT("EFOHEARTSkeletonEnum::VE_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFOHEARTSkeletonEnum");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n// Deprecated"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_C1.DisplayName"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_C1.ToolTip"), TEXT("Get FOHEART_C1 BVH skeleton coordinates."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_LEO.DisplayName"), TEXT("FOHEART_LEO"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_FOHEART_LEO.ToolTip"), TEXT("Get FOHEART_LEO BVH skeleton coordinates."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Mannequin.DisplayName"), TEXT("Mannequin"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Mannequin.ToolTip"), TEXT("Get Mannequin skeleton coordinates. New grey Unreal default skeleton with A-Pose."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Map.DisplayName"), TEXT("Map"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Map.ToolTip"), TEXT("Get custom skeleton coordinates with configured bone map."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_None.DisplayName"), TEXT("None"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_None.ToolTip"), TEXT("Get BVH coordinates. Use translation and rotation as it is."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_TPP_Hero.DisplayName"), TEXT("TPP_Hero"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_TPP_Hero.ToolTip"), TEXT("Get Hero_TPP skeleton coordinates. Old blue Unreal default skeleton with T-Pose."));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UE4.DisplayName"), TEXT("World"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UE4.ToolTip"), TEXT("Get UE4 world skeleton coordinates."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FOHEART_EFOHEARTSkeletonEnum_CRC() { return 537877839U; }
class UScriptStruct* FFOHEART_LEOBoneMapStruct::StaticStruct()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOHEART_API class UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct();
		extern FOHEART_API uint32 Get_Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct, Z_Construct_UPackage__Script_FOHEART(), TEXT("FOHEART_LEOBoneMapStruct"), sizeof(FFOHEART_LEOBoneMapStruct), Get_Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFOHEART_LEOBoneMapStruct(FFOHEART_LEOBoneMapStruct::StaticStruct, TEXT("/Script/FOHEART"), TEXT("FOHEART_LEOBoneMapStruct"), false, nullptr, nullptr);
static struct FScriptStruct_FOHEART_StaticRegisterNativesFFOHEART_LEOBoneMapStruct
{
	FScriptStruct_FOHEART_StaticRegisterNativesFFOHEART_LEOBoneMapStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FOHEART_LEOBoneMapStruct")),new UScriptStruct::TCppStructOps<FFOHEART_LEOBoneMapStruct>);
	}
} ScriptStruct_FOHEART_StaticRegisterNativesFFOHEART_LEOBoneMapStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FOHEART_LEOBoneMapStruct"), sizeof(FFOHEART_LEOBoneMapStruct), Get_Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_LEOBoneMapStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFOHEART_LEOBoneMapStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_CustomBoneName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CustomBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CustomBoneName, FFOHEART_LEOBoneMapStruct), 0x0010000000000005);
			UProperty* NewProp_BVHBone = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BVHBone"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(BVHBone, FFOHEART_LEOBoneMapStruct), 0x0010000000000005, Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum());
			UProperty* NewProp_BVHBone_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BVHBone, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(NewProp_CustomBoneName, TEXT("Category"), TEXT("FOHEART_LEO"));
			MetaData->SetValue(NewProp_CustomBoneName, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(NewProp_BVHBone, TEXT("Category"), TEXT("FOHEART_LEO"));
			MetaData->SetValue(NewProp_BVHBone, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct_CRC() { return 3684514342U; }
class UScriptStruct* FFOHEART_C1BoneMapStruct::StaticStruct()
{
	extern FOHEART_API class UPackage* Z_Construct_UPackage__Script_FOHEART();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOHEART_API class UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct();
		extern FOHEART_API uint32 Get_Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct, Z_Construct_UPackage__Script_FOHEART(), TEXT("FOHEART_C1BoneMapStruct"), sizeof(FFOHEART_C1BoneMapStruct), Get_Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFOHEART_C1BoneMapStruct(FFOHEART_C1BoneMapStruct::StaticStruct, TEXT("/Script/FOHEART"), TEXT("FOHEART_C1BoneMapStruct"), false, nullptr, nullptr);
static struct FScriptStruct_FOHEART_StaticRegisterNativesFFOHEART_C1BoneMapStruct
{
	FScriptStruct_FOHEART_StaticRegisterNativesFFOHEART_C1BoneMapStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FOHEART_C1BoneMapStruct")),new UScriptStruct::TCppStructOps<FFOHEART_C1BoneMapStruct>);
	}
} ScriptStruct_FOHEART_StaticRegisterNativesFFOHEART_C1BoneMapStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FOHEART();
		extern uint32 Get_Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FOHEART_C1BoneMapStruct"), sizeof(FFOHEART_C1BoneMapStruct), Get_Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1BoneMapStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFOHEART_C1BoneMapStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_CustomBoneName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CustomBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CustomBoneName, FFOHEART_C1BoneMapStruct), 0x0010000000000005);
			UProperty* NewProp_BVHBone = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BVHBone"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(BVHBone, FFOHEART_C1BoneMapStruct), 0x0010000000000005, Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum());
			UProperty* NewProp_BVHBone_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BVHBone, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(NewProp_CustomBoneName, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(NewProp_CustomBoneName, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(NewProp_BVHBone, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(NewProp_BVHBone, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct_CRC() { return 1400917212U; }
	void UFOHEART_C1BPLibrary::StaticRegisterNativesUFOHEART_C1BPLibrary()
	{
		UClass* Class = UFOHEART_C1BPLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "FOHEART_C1BoneSetOffset", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1BoneSetOffset },
			{ "FOHEART_C1BVHPause", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1BVHPause },
			{ "FOHEART_C1BVHPlay", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1BVHPlay },
			{ "FOHEART_C1BVHRewind", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1BVHRewind },
			{ "FOHEART_C1ConnectTCP", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1ConnectTCP },
			{ "FOHEART_C1ConnectUDP", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1ConnectUDP },
			{ "FOHEART_C1Disconnect", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1Disconnect },
			{ "FOHEART_C1GetBVHBoneIndex", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1GetBVHBoneIndex },
			{ "FOHEART_C1GetLocalBoneLocation", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1GetLocalBoneLocation },
			{ "FOHEART_C1GetLocalBoneRotation", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1GetLocalBoneRotation },
			{ "FOHEART_C1GetReferencePoseLocalBoneRotation", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1GetReferencePoseLocalBoneRotation },
			{ "FOHEART_C1Init", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1Init },
			{ "FOHEART_C1InitBVHFile", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1InitBVHFile },
			{ "FOHEART_C1NegateRotation", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1NegateRotation },
			{ "FOHEART_C1Read", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1Read },
			{ "FOHEART_C1ReadArray", (Native)&UFOHEART_C1BPLibrary::execFOHEART_C1ReadArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 16);
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BoneSetOffset()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms
		{
			AFOHEARTController* Controller;
			int32 BoneIndex;
			float X;
			float Y;
			float Z;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1BoneSetOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms), sizeof(bool), true);
			UProperty* NewProp_Z = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Z"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Z, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms), 0x0010000000000080);
			UProperty* NewProp_Y = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Y"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Y, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms), 0x0010000000000080);
			UProperty* NewProp_X = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("X"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(X, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms), 0x0010000000000080);
			UProperty* NewProp_BoneIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneIndex, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms), 0x0010000000000080);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1BoneSetOffset_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BoneIndex"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_X"), TEXT("0.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Y"), TEXT("0.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Z"), TEXT("0.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Bone Set Offset"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Configure BVH bone offset. This offset is removed from the incoming translation before coordinate mapping."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPause()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms
		{
			AFOHEARTController* Controller;
			bool bPause;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1BVHPause"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPause, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms, bool);
			UProperty* NewProp_bPause = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bPause"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPause, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bPause, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms), sizeof(bool), true);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPause_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bPause"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Pause playing BVH File"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Pause playing a local stored BVH file"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPlay()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms
		{
			AFOHEARTController* Controller;
			FString BVHFileNa;
			bool bEndless;
			bool bReference;
			bool bDisplacement;
			EFOHEARTMotionLineFormatEnum MotionLineFormat;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1BVHPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), sizeof(bool), true);
			UProperty* NewProp_MotionLineFormat = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MotionLineFormat"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(MotionLineFormat, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum());
			UProperty* NewProp_MotionLineFormat_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_MotionLineFormat, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms, bool);
			UProperty* NewProp_bDisplacement = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bDisplacement"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms, bool);
			UProperty* NewProp_bReference = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bReference"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEndless, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms, bool);
			UProperty* NewProp_bEndless = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEndless"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEndless, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEndless, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), sizeof(bool), true);
			UProperty* NewProp_BVHFileNa = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BVHFileNa"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BVHFileNa, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), 0x0010000000000080);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1BVHPlay_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bDisplacement"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bEndless"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bReference"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BVHFileNa"), TEXT("test.bvh"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_MotionLineFormat"), TEXT("VE_Standard"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Play BVH File"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Play a local stored BVH file."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHRewind()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1BVHRewind_Parms
		{
			AFOHEARTController* Controller;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1BVHRewind"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1BVHRewind_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHRewind_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHRewind_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1BVHRewind_Parms), sizeof(bool), true);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1BVHRewind_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Rewind BVH File Player"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Rewind BVH file player."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectTCP()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms
		{
			AFOHEARTController* Controller;
			FString HostName;
			int32 Port;
			bool bReference;
			bool bDisplacement;
			EFOHEARTMotionLineFormatEnum MotionLineFormat;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1ConnectTCP"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), sizeof(bool), true);
			UProperty* NewProp_MotionLineFormat = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MotionLineFormat"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(MotionLineFormat, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum());
			UProperty* NewProp_MotionLineFormat_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_MotionLineFormat, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms, bool);
			UProperty* NewProp_bDisplacement = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bDisplacement"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms, bool);
			UProperty* NewProp_bReference = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bReference"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), sizeof(bool), true);
			UProperty* NewProp_Port = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Port"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Port, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), 0x0010000000000080);
			UProperty* NewProp_HostName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HostName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HostName, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), 0x0010000000000082);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectTCP_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bDisplacement"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bReference"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_HostName"), TEXT("127.0.0.1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_MotionLineFormat"), TEXT("VE_FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Port"), TEXT("7001"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Connect MotionVenus using TCP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Connect MotionVenus with given IP&Port"));
			MetaData->SetValue(NewProp_HostName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectUDP()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms
		{
			AFOHEARTController* Controller;
			FString HostName;
			int32 Port;
			bool bReference;
			bool bDisplacement;
			EFOHEARTMotionLineFormatEnum MotionLineFormat;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1ConnectUDP"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), sizeof(bool), true);
			UProperty* NewProp_MotionLineFormat = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MotionLineFormat"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(MotionLineFormat, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTMotionLineFormatEnum());
			UProperty* NewProp_MotionLineFormat_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_MotionLineFormat, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms, bool);
			UProperty* NewProp_bDisplacement = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bDisplacement"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bDisplacement, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms, bool);
			UProperty* NewProp_bReference = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bReference"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bReference, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), sizeof(bool), true);
			UProperty* NewProp_Port = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Port"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Port, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), 0x0010000000000080);
			UProperty* NewProp_HostName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HostName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HostName, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), 0x0010000000000082);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1ConnectUDP_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bDisplacement"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bReference"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_HostName"), TEXT("127.0.0.1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_MotionLineFormat"), TEXT("VE_FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Port"), TEXT("5001"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read from MotionVenus using UDP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Rec from MotionVenus UDP proto"));
			MetaData->SetValue(NewProp_HostName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Disconnect()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1Disconnect_Parms
		{
			AFOHEARTController* Controller;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1Disconnect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1Disconnect_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Disconnect_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Disconnect_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Disconnect_Parms), sizeof(bool), true);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1Disconnect_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Disconnect MotionVenus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Disconnect from MotionVenus."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetBVHBoneIndex()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1GetBVHBoneIndex_Parms
		{
			EFOHEART_C1BonesEnum BVHBone;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1GetBVHBoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1GetBVHBoneIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetBVHBoneIndex_Parms), 0x0010000000000580);
			UProperty* NewProp_BVHBone = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BVHBone"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(BVHBone, FOHEART_C1BPLibrary_eventFOHEART_C1GetBVHBoneIndex_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum());
			UProperty* NewProp_BVHBone_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BVHBone, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("Index"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BVHBone"), TEXT("VE_Hips"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get BVH Bone Index"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Return BVH Bone Index from Enum."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneLocation()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms
		{
			USkeletalMeshComponent* Mesh;
			FVector Location;
			int32 BoneIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1GetLocalBoneLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_BoneIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneIndex, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneLocation_Parms), 0x0010000000080080, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BoneIndex"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Local Bone Location"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Get local bone location from mesh."));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneRotation()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms
		{
			USkeletalMeshComponent* Mesh;
			FRotator Rotation;
			int32 BoneIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1GetLocalBoneRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms), sizeof(bool), true);
			UProperty* NewProp_BoneIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneIndex, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms), 0x0010000000000080);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, FOHEART_C1BPLibrary_eventFOHEART_C1GetLocalBoneRotation_Parms), 0x0010000000080080, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BoneIndex"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Local Bone Rotation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get local bone rotation from mesh."));
			MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetReferencePoseLocalBoneRotation()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms
		{
			USkeletalMeshComponent* Mesh;
			FRotator Rotation;
			int32 BoneIndex;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1GetReferencePoseLocalBoneRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms), sizeof(bool), true);
			UProperty* NewProp_BoneIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneIndex, FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms), 0x0010000000000080);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, FOHEART_C1BPLibrary_eventFOHEART_C1GetReferencePoseLocalBoneRotation_Parms), 0x0010000000080080, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BoneIndex"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Refpose Local Bone Rotation"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Get local bone rotation from reference pose."));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Init()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms
		{
			AFOHEARTController* Controller;
			int32 BoneNumber;
			EFOHEARTRotOrderEnum RotationOrder;
			EFOHEARTChannelNumberEnum XPositionChannel;
			EFOHEARTChannelNumberEnum YPositionChannel;
			EFOHEARTChannelNumberEnum ZPositionChannel;
			EFOHEARTChannelNumberEnum XRotationChannel;
			EFOHEARTChannelNumberEnum YRotationChannel;
			EFOHEARTChannelNumberEnum ZRotationChannel;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1Init"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), sizeof(bool), true);
			UProperty* NewProp_ZRotationChannel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ZRotationChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ZRotationChannel, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum());
			UProperty* NewProp_ZRotationChannel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ZRotationChannel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_YRotationChannel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("YRotationChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(YRotationChannel, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum());
			UProperty* NewProp_YRotationChannel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_YRotationChannel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_XRotationChannel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("XRotationChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(XRotationChannel, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum());
			UProperty* NewProp_XRotationChannel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_XRotationChannel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_ZPositionChannel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ZPositionChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ZPositionChannel, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum());
			UProperty* NewProp_ZPositionChannel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ZPositionChannel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_YPositionChannel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("YPositionChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(YPositionChannel, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum());
			UProperty* NewProp_YPositionChannel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_YPositionChannel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_XPositionChannel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("XPositionChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(XPositionChannel, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTChannelNumberEnum());
			UProperty* NewProp_XPositionChannel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_XPositionChannel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_RotationOrder = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RotationOrder"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(RotationOrder, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEARTRotOrderEnum());
			UProperty* NewProp_RotationOrder_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_RotationOrder, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_BoneNumber = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneNumber, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1Init_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BoneNumber"), TEXT("23"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_RotationOrder"), TEXT("VE_ZXY"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_XPositionChannel"), TEXT("VE_0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_XRotationChannel"), TEXT("VE_3"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_YPositionChannel"), TEXT("VE_1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_YRotationChannel"), TEXT("VE_4"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ZPositionChannel"), TEXT("VE_2"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ZRotationChannel"), TEXT("VE_5"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Init FOHEART C1"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Init BVH reference skeleton manually."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1InitBVHFile()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1InitBVHFile_Parms
		{
			AFOHEARTController* Controller;
			FString BVHFileName;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1InitBVHFile"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1InitBVHFile_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1InitBVHFile_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1InitBVHFile_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1InitBVHFile_Parms), sizeof(bool), true);
			UProperty* NewProp_BVHFileName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BVHFileName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BVHFileName, FOHEART_C1BPLibrary_eventFOHEART_C1InitBVHFile_Parms), 0x0010000000000082);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1InitBVHFile_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BVHFileName"), TEXT("demo.bvh"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Init BVH Replay File"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Init BVH reference skeleton with a BVH file."));
			MetaData->SetValue(NewProp_BVHFileName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1NegateRotation()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1NegateRotation_Parms
		{
			FRotator Rotation;
			FRotator ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1NegateRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14822401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1NegateRotation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1NegateRotation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FOHEART_C1BPLibrary_eventFOHEART_C1NegateRotation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("Neg"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Negate Rotation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Negate Yaw, Pitch and Roll in rotation vector."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Read()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms
		{
			AFOHEARTController* Controller;
			FString ActorName;
			USkeletalMeshComponent* Mesh;
			FVector Translation;
			FRotator Rotation;
			FVector AdditionalTranslation;
			FRotator AdditionalRotation;
			EFOHEART_C1BonesEnum BVHBone;
			FName CustomBoneName;
			bool InverseForward;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1Read"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C22401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(InverseForward, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms, bool);
			UProperty* NewProp_InverseForward = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InverseForward"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(InverseForward, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(InverseForward, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), sizeof(bool), true);
			UProperty* NewProp_CustomBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CustomBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CustomBoneName, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000080);
			UProperty* NewProp_BVHBone = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BVHBone"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(BVHBone, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000080, Z_Construct_UEnum_FOHEART_EFOHEART_C1BonesEnum());
			UProperty* NewProp_BVHBone_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BVHBone, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_AdditionalRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AdditionalRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AdditionalRotation, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_AdditionalTranslation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AdditionalTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AdditionalTranslation, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Translation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Translation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Translation, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000080080, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
			UProperty* NewProp_ActorName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ActorName, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000080);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1Read_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BVHBone"), TEXT("VE_Hips"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_CustomBoneName"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_InverseForward"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read Motion"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Read incoming motion data for all bones."));
			MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ReadArray()
	{
		struct FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms
		{
			AFOHEARTController* Controller;
			FString ActorName;
			USkeletalMeshComponent* Mesh;
			TArray<FVector> Translation;
			TArray<FRotator> Rotation;
			TArray<FVector> AdditionalTranslation;
			TArray<FRotator> AdditionalRotation;
			TArray<FFOHEART_C1BoneMapStruct> BoneMap;
			bool InverseForward;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFOHEART_C1BPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FOHEART_C1ReadArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(InverseForward, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms, bool);
			UProperty* NewProp_InverseForward = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InverseForward"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(InverseForward, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(InverseForward, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), sizeof(bool), true);
			UProperty* NewProp_BoneMap = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneMap"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BoneMap, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000080);
			UProperty* NewProp_BoneMap_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BoneMap, TEXT("BoneMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct());
			UProperty* NewProp_AdditionalRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AdditionalRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AdditionalRotation, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000080);
			UProperty* NewProp_AdditionalRotation_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AdditionalRotation, TEXT("AdditionalRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_AdditionalTranslation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AdditionalTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AdditionalTranslation, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000080);
			UProperty* NewProp_AdditionalTranslation_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AdditionalTranslation, TEXT("AdditionalTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Rotation, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000180);
			UProperty* NewProp_Rotation_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Rotation, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Translation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Translation"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Translation, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000180);
			UProperty* NewProp_Translation_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Translation, TEXT("Translation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000080080, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
			UProperty* NewProp_ActorName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ActorName, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000080);
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, FOHEART_C1BPLibrary_eventFOHEART_C1ReadArray_Parms), 0x0010000000000080, Z_Construct_UClass_AFOHEARTController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FOHEART_C1"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_InverseForward"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read Motion Array"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Read incoming motion data for all bones."));
			MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFOHEART_C1BPLibrary_NoRegister()
	{
		return UFOHEART_C1BPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UFOHEART_C1BPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_FOHEART();
			OuterClass = UFOHEART_C1BPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BoneSetOffset());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPause());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPlay());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHRewind());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectTCP());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectUDP());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Disconnect());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetBVHBoneIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneRotation());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetReferencePoseLocalBoneRotation());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Init());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1InitBVHFile());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1NegateRotation());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Read());
				OuterClass->LinkChild(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ReadArray());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BoneSetOffset(), "FOHEART_C1BoneSetOffset"); // 2310119938
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPause(), "FOHEART_C1BVHPause"); // 4047464889
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHPlay(), "FOHEART_C1BVHPlay"); // 2527116819
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1BVHRewind(), "FOHEART_C1BVHRewind"); // 3502786899
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectTCP(), "FOHEART_C1ConnectTCP"); // 2805630074
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ConnectUDP(), "FOHEART_C1ConnectUDP"); // 4277989600
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Disconnect(), "FOHEART_C1Disconnect"); // 3797714368
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetBVHBoneIndex(), "FOHEART_C1GetBVHBoneIndex"); // 2854640282
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneLocation(), "FOHEART_C1GetLocalBoneLocation"); // 2037164619
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetLocalBoneRotation(), "FOHEART_C1GetLocalBoneRotation"); // 1337627311
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1GetReferencePoseLocalBoneRotation(), "FOHEART_C1GetReferencePoseLocalBoneRotation"); // 3852677823
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Init(), "FOHEART_C1Init"); // 3287286015
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1InitBVHFile(), "FOHEART_C1InitBVHFile"); // 1205396286
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1NegateRotation(), "FOHEART_C1NegateRotation"); // 113591810
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1Read(), "FOHEART_C1Read"); // 1591776374
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFOHEART_C1BPLibrary_FOHEART_C1ReadArray(), "FOHEART_C1ReadArray"); // 3876082495
				static TCppClassTypeInfo<TCppClassTypeTraits<UFOHEART_C1BPLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FOHEARTBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FOHEARTBPLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFOHEART_C1BPLibrary, 3489202555);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFOHEART_C1BPLibrary(Z_Construct_UClass_UFOHEART_C1BPLibrary, &UFOHEART_C1BPLibrary::StaticClass, TEXT("/Script/FOHEART"), TEXT("UFOHEART_C1BPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFOHEART_C1BPLibrary);
	UPackage* Z_Construct_UPackage__Script_FOHEART()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FOHEART")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0xA92ECE68;
			Guid.B = 0x7AAB731B;
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
