// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFOHEART_C1BonesEnum : uint8;
struct FRotator;
class USkeletalMeshComponent;
struct FVector;
class AFOHEARTController;
struct FFOHEART_C1BoneMapStruct;
enum class EFOHEARTMotionLineFormatEnum : uint8;
enum class EFOHEARTRotOrderEnum : uint8;
enum class EFOHEARTChannelNumberEnum : uint8;
#ifdef FOHEART_FOHEARTBPLibrary_generated_h
#error "FOHEARTBPLibrary.generated.h already included, missing '#pragma once' in FOHEARTBPLibrary.h"
#endif
#define FOHEART_FOHEARTBPLibrary_generated_h

#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_123_GENERATED_BODY \
	friend FOHEART_API class UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_LEOBoneMapStruct(); \
	FOHEART_API static class UScriptStruct* StaticStruct();


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_113_GENERATED_BODY \
	friend FOHEART_API class UScriptStruct* Z_Construct_UScriptStruct_FFOHEART_C1BoneMapStruct(); \
	FOHEART_API static class UScriptStruct* StaticStruct();


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetBVHBoneIndex) \
	{ \
		P_GET_ENUM(EFOHEART_C1BonesEnum,Z_Param_BVHBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetBVHBoneIndex(EFOHEART_C1BonesEnum(Z_Param_BVHBone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1NegateRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1NegateRotation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetReferencePoseLocalBoneRotation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetReferencePoseLocalBoneRotation(Z_Param_Mesh,Z_Param_Out_Rotation,Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetLocalBoneLocation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetLocalBoneLocation(Z_Param_Mesh,Z_Param_Out_Location,Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetLocalBoneRotation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetLocalBoneRotation(Z_Param_Mesh,Z_Param_Out_Rotation,Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1ReadArray) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ActorName); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Translation); \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_TARRAY(FVector,Z_Param_AdditionalTranslation); \
		P_GET_TARRAY(FRotator,Z_Param_AdditionalRotation); \
		P_GET_TARRAY(FFOHEART_C1BoneMapStruct,Z_Param_BoneMap); \
		P_GET_UBOOL(Z_Param_InverseForward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1ReadArray(Z_Param_Controller,Z_Param_ActorName,Z_Param_Mesh,Z_Param_Out_Translation,Z_Param_Out_Rotation,Z_Param_AdditionalTranslation,Z_Param_AdditionalRotation,Z_Param_BoneMap,Z_Param_InverseForward); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1Read) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ActorName); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Translation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_AdditionalTranslation); \
		P_GET_STRUCT(FRotator,Z_Param_AdditionalRotation); \
		P_GET_ENUM(EFOHEART_C1BonesEnum,Z_Param_BVHBone); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CustomBoneName); \
		P_GET_UBOOL(Z_Param_InverseForward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1Read(Z_Param_Controller,Z_Param_ActorName,Z_Param_Mesh,Z_Param_Out_Translation,Z_Param_Out_Rotation,Z_Param_AdditionalTranslation,Z_Param_AdditionalRotation,EFOHEART_C1BonesEnum(Z_Param_BVHBone),Z_Param_CustomBoneName,Z_Param_InverseForward); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BVHRewind) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BVHRewind(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BVHPause) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BVHPause(Z_Param_Controller,Z_Param_bPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BVHPlay) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BVHFileNa); \
		P_GET_UBOOL(Z_Param_bEndless); \
		P_GET_UBOOL(Z_Param_bReference); \
		P_GET_UBOOL(Z_Param_bDisplacement); \
		P_GET_ENUM(EFOHEARTMotionLineFormatEnum,Z_Param_MotionLineFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BVHPlay(Z_Param_Controller,Z_Param_BVHFileNa,Z_Param_bEndless,Z_Param_bReference,Z_Param_bDisplacement,EFOHEARTMotionLineFormatEnum(Z_Param_MotionLineFormat)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1ConnectUDP) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_HostName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_UBOOL(Z_Param_bReference); \
		P_GET_UBOOL(Z_Param_bDisplacement); \
		P_GET_ENUM(EFOHEARTMotionLineFormatEnum,Z_Param_MotionLineFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1ConnectUDP(Z_Param_Controller,Z_Param_HostName,Z_Param_Port,Z_Param_bReference,Z_Param_bDisplacement,EFOHEARTMotionLineFormatEnum(Z_Param_MotionLineFormat)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1Disconnect) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1Disconnect(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1ConnectTCP) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_HostName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_UBOOL(Z_Param_bReference); \
		P_GET_UBOOL(Z_Param_bDisplacement); \
		P_GET_ENUM(EFOHEARTMotionLineFormatEnum,Z_Param_MotionLineFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1ConnectTCP(Z_Param_Controller,Z_Param_HostName,Z_Param_Port,Z_Param_bReference,Z_Param_bDisplacement,EFOHEARTMotionLineFormatEnum(Z_Param_MotionLineFormat)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BoneSetOffset) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BoneSetOffset(Z_Param_Controller,Z_Param_BoneIndex,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1Init) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneNumber); \
		P_GET_ENUM(EFOHEARTRotOrderEnum,Z_Param_RotationOrder); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_XPositionChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_YPositionChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_ZPositionChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_XRotationChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_YRotationChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_ZRotationChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1Init(Z_Param_Controller,Z_Param_BoneNumber,EFOHEARTRotOrderEnum(Z_Param_RotationOrder),EFOHEARTChannelNumberEnum(Z_Param_XPositionChannel),EFOHEARTChannelNumberEnum(Z_Param_YPositionChannel),EFOHEARTChannelNumberEnum(Z_Param_ZPositionChannel),EFOHEARTChannelNumberEnum(Z_Param_XRotationChannel),EFOHEARTChannelNumberEnum(Z_Param_YRotationChannel),EFOHEARTChannelNumberEnum(Z_Param_ZRotationChannel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1InitBVHFile) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BVHFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1InitBVHFile(Z_Param_Controller,Z_Param_BVHFileName); \
		P_NATIVE_END; \
	}


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetBVHBoneIndex) \
	{ \
		P_GET_ENUM(EFOHEART_C1BonesEnum,Z_Param_BVHBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetBVHBoneIndex(EFOHEART_C1BonesEnum(Z_Param_BVHBone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1NegateRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1NegateRotation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetReferencePoseLocalBoneRotation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetReferencePoseLocalBoneRotation(Z_Param_Mesh,Z_Param_Out_Rotation,Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetLocalBoneLocation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetLocalBoneLocation(Z_Param_Mesh,Z_Param_Out_Location,Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1GetLocalBoneRotation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1GetLocalBoneRotation(Z_Param_Mesh,Z_Param_Out_Rotation,Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1ReadArray) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ActorName); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Translation); \
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_TARRAY(FVector,Z_Param_AdditionalTranslation); \
		P_GET_TARRAY(FRotator,Z_Param_AdditionalRotation); \
		P_GET_TARRAY(FFOHEART_C1BoneMapStruct,Z_Param_BoneMap); \
		P_GET_UBOOL(Z_Param_InverseForward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1ReadArray(Z_Param_Controller,Z_Param_ActorName,Z_Param_Mesh,Z_Param_Out_Translation,Z_Param_Out_Rotation,Z_Param_AdditionalTranslation,Z_Param_AdditionalRotation,Z_Param_BoneMap,Z_Param_InverseForward); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1Read) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ActorName); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Translation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_AdditionalTranslation); \
		P_GET_STRUCT(FRotator,Z_Param_AdditionalRotation); \
		P_GET_ENUM(EFOHEART_C1BonesEnum,Z_Param_BVHBone); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CustomBoneName); \
		P_GET_UBOOL(Z_Param_InverseForward); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1Read(Z_Param_Controller,Z_Param_ActorName,Z_Param_Mesh,Z_Param_Out_Translation,Z_Param_Out_Rotation,Z_Param_AdditionalTranslation,Z_Param_AdditionalRotation,EFOHEART_C1BonesEnum(Z_Param_BVHBone),Z_Param_CustomBoneName,Z_Param_InverseForward); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BVHRewind) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BVHRewind(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BVHPause) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BVHPause(Z_Param_Controller,Z_Param_bPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BVHPlay) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BVHFileNa); \
		P_GET_UBOOL(Z_Param_bEndless); \
		P_GET_UBOOL(Z_Param_bReference); \
		P_GET_UBOOL(Z_Param_bDisplacement); \
		P_GET_ENUM(EFOHEARTMotionLineFormatEnum,Z_Param_MotionLineFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BVHPlay(Z_Param_Controller,Z_Param_BVHFileNa,Z_Param_bEndless,Z_Param_bReference,Z_Param_bDisplacement,EFOHEARTMotionLineFormatEnum(Z_Param_MotionLineFormat)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1ConnectUDP) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_HostName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_UBOOL(Z_Param_bReference); \
		P_GET_UBOOL(Z_Param_bDisplacement); \
		P_GET_ENUM(EFOHEARTMotionLineFormatEnum,Z_Param_MotionLineFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1ConnectUDP(Z_Param_Controller,Z_Param_HostName,Z_Param_Port,Z_Param_bReference,Z_Param_bDisplacement,EFOHEARTMotionLineFormatEnum(Z_Param_MotionLineFormat)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1Disconnect) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1Disconnect(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1ConnectTCP) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_HostName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_GET_UBOOL(Z_Param_bReference); \
		P_GET_UBOOL(Z_Param_bDisplacement); \
		P_GET_ENUM(EFOHEARTMotionLineFormatEnum,Z_Param_MotionLineFormat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1ConnectTCP(Z_Param_Controller,Z_Param_HostName,Z_Param_Port,Z_Param_bReference,Z_Param_bDisplacement,EFOHEARTMotionLineFormatEnum(Z_Param_MotionLineFormat)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1BoneSetOffset) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1BoneSetOffset(Z_Param_Controller,Z_Param_BoneIndex,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1Init) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneNumber); \
		P_GET_ENUM(EFOHEARTRotOrderEnum,Z_Param_RotationOrder); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_XPositionChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_YPositionChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_ZPositionChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_XRotationChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_YRotationChannel); \
		P_GET_ENUM(EFOHEARTChannelNumberEnum,Z_Param_ZRotationChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1Init(Z_Param_Controller,Z_Param_BoneNumber,EFOHEARTRotOrderEnum(Z_Param_RotationOrder),EFOHEARTChannelNumberEnum(Z_Param_XPositionChannel),EFOHEARTChannelNumberEnum(Z_Param_YPositionChannel),EFOHEARTChannelNumberEnum(Z_Param_ZPositionChannel),EFOHEARTChannelNumberEnum(Z_Param_XRotationChannel),EFOHEARTChannelNumberEnum(Z_Param_YRotationChannel),EFOHEARTChannelNumberEnum(Z_Param_ZRotationChannel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOHEART_C1InitBVHFile) \
	{ \
		P_GET_OBJECT(AFOHEARTController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BVHFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFOHEART_C1BPLibrary::FOHEART_C1InitBVHFile(Z_Param_Controller,Z_Param_BVHFileName); \
		P_NATIVE_END; \
	}


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFOHEART_C1BPLibrary(); \
	friend FOHEART_API class UClass* Z_Construct_UClass_UFOHEART_C1BPLibrary(); \
public: \
	DECLARE_CLASS(UFOHEART_C1BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FOHEART"), NO_API) \
	DECLARE_SERIALIZER(UFOHEART_C1BPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_INCLASS \
private: \
	static void StaticRegisterNativesUFOHEART_C1BPLibrary(); \
	friend FOHEART_API class UClass* Z_Construct_UClass_UFOHEART_C1BPLibrary(); \
public: \
	DECLARE_CLASS(UFOHEART_C1BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FOHEART"), NO_API) \
	DECLARE_SERIALIZER(UFOHEART_C1BPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFOHEART_C1BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFOHEART_C1BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFOHEART_C1BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFOHEART_C1BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFOHEART_C1BPLibrary(UFOHEART_C1BPLibrary&&); \
	NO_API UFOHEART_C1BPLibrary(const UFOHEART_C1BPLibrary&); \
public:


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFOHEART_C1BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFOHEART_C1BPLibrary(UFOHEART_C1BPLibrary&&); \
	NO_API UFOHEART_C1BPLibrary(const UFOHEART_C1BPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFOHEART_C1BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFOHEART_C1BPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFOHEART_C1BPLibrary)


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_PRIVATE_PROPERTY_OFFSET
#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_130_PROLOG
#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_PRIVATE_PROPERTY_OFFSET \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_RPC_WRAPPERS \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_INCLASS \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_PRIVATE_PROPERTY_OFFSET \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_INCLASS_NO_PURE_DECLS \
	FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h_133_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FOHEART_C1BPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FOHEARTPlugin_Plugins_FOHEART_Source_FOHEART_Public_FOHEARTBPLibrary_h


#define FOREACH_ENUM_EFOHEART_C1BONESENUM(op) \
	op(EFOHEART_C1BonesEnum::VE_Hips) \
	op(EFOHEART_C1BonesEnum::VE_Spine) \
	op(EFOHEART_C1BonesEnum::VE_Spine1) \
	op(EFOHEART_C1BonesEnum::VE_Spine2) \
	op(EFOHEART_C1BonesEnum::VE_Spine3) \
	op(EFOHEART_C1BonesEnum::VE_Neck) \
	op(EFOHEART_C1BonesEnum::VE_Head) \
	op(EFOHEART_C1BonesEnum::VE_RightShoulder) \
	op(EFOHEART_C1BonesEnum::VE_RightArm) \
	op(EFOHEART_C1BonesEnum::VE_RightForeArm) \
	op(EFOHEART_C1BonesEnum::VE_RightHand) \
	op(EFOHEART_C1BonesEnum::VE_LeftShoulder) \
	op(EFOHEART_C1BonesEnum::VE_LeftArm) \
	op(EFOHEART_C1BonesEnum::VE_LeftForeArm) \
	op(EFOHEART_C1BonesEnum::VE_LeftHand) \
	op(EFOHEART_C1BonesEnum::VE_RightUpLeg) \
	op(EFOHEART_C1BonesEnum::VE_RightLeg) \
	op(EFOHEART_C1BonesEnum::VE_RightFoot) \
	op(EFOHEART_C1BonesEnum::VE_RightToeBase) \
	op(EFOHEART_C1BonesEnum::VE_LeftUpLeg) \
	op(EFOHEART_C1BonesEnum::VE_LeftLeg) \
	op(EFOHEART_C1BonesEnum::VE_LeftFoot) \
	op(EFOHEART_C1BonesEnum::VE_LeftToeBase) 
#define FOREACH_ENUM_EFOHEARTCHANNELNUMBERENUM(op) \
	op(EFOHEARTChannelNumberEnum::VE_0) \
	op(EFOHEARTChannelNumberEnum::VE_1) \
	op(EFOHEARTChannelNumberEnum::VE_2) \
	op(EFOHEARTChannelNumberEnum::VE_3) \
	op(EFOHEARTChannelNumberEnum::VE_4) \
	op(EFOHEARTChannelNumberEnum::VE_5) 
#define FOREACH_ENUM_EFOHEARTROTORDERENUM(op) \
	op(EFOHEARTRotOrderEnum::VE_XYZ) \
	op(EFOHEARTRotOrderEnum::VE_XZY) \
	op(EFOHEARTRotOrderEnum::VE_YXZ) \
	op(EFOHEARTRotOrderEnum::VE_YZX) \
	op(EFOHEARTRotOrderEnum::VE_ZXY) \
	op(EFOHEARTRotOrderEnum::VE_ZYX) 
#define FOREACH_ENUM_EFOHEARTXYZENUM(op) \
	op(EFOHEARTXYZEnum::VE_X) \
	op(EFOHEARTXYZEnum::VE_Y) \
	op(EFOHEARTXYZEnum::VE_Z) \
	op(EFOHEARTXYZEnum::VE_NX) \
	op(EFOHEARTXYZEnum::VE_NY) \
	op(EFOHEARTXYZEnum::VE_NZ) 
#define FOREACH_ENUM_EFOHEARTMOTIONLINEFORMATENUM(op) \
	op(EFOHEARTMotionLineFormatEnum::VE_Standard) \
	op(EFOHEARTMotionLineFormatEnum::VE_FOHEART_C1) \
	op(EFOHEARTMotionLineFormatEnum::VE_FOHEART_LEO) 
#define FOREACH_ENUM_EFOHEARTSKELETONENUM(op) \
	op(EFOHEARTSkeletonEnum::VE_None) \
	op(EFOHEARTSkeletonEnum::VE_FOHEART_C1) \
	op(EFOHEARTSkeletonEnum::VE_FOHEART_LEO) \
	op(EFOHEARTSkeletonEnum::VE_TPP_Hero) \
	op(EFOHEARTSkeletonEnum::VE_Mannequin) \
	op(EFOHEARTSkeletonEnum::VE_Map) \
	op(EFOHEARTSkeletonEnum::VE_UE4) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
