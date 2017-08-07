// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "Engine.h"
#include "FOHEARTController.h"
#include "FOHEARTBPLibrary.generated.h"

/*
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/


// Deprecated
UENUM(BlueprintType)
enum class EFOHEARTSkeletonEnum : uint8
{
	VE_None 		UMETA(DisplayName = "None", ToolTip = "Get BVH coordinates. Use translation and rotation as it is."),
	VE_FOHEART_C1 	UMETA(DisplayName = "FOHEART_C1", ToolTip = "Get FOHEART_C1 BVH skeleton coordinates."),
	VE_FOHEART_LEO 	UMETA(DisplayName = "FOHEART_LEO", ToolTip = "Get FOHEART_LEO BVH skeleton coordinates."),
	VE_TPP_Hero		UMETA(DisplayName = "TPP_Hero", ToolTip = "Get Hero_TPP skeleton coordinates. Old blue Unreal default skeleton with T-Pose."),
	VE_Mannequin	UMETA(DisplayName = "Mannequin", ToolTip = "Get Mannequin skeleton coordinates. New grey Unreal default skeleton with A-Pose."),
	VE_Map			UMETA(DisplayName = "Map", ToolTip = "Get custom skeleton coordinates with configured bone map."),
	VE_UE4			UMETA(DisplayName = "World", ToolTip = "Get UE4 world skeleton coordinates.")
};

UENUM(BlueprintType)
enum class EFOHEARTMotionLineFormatEnum : uint8
{
	VE_Standard		UMETA(DisplayName = "Standard", ToolTip = "BVH Standard format (only the float numbers and a CR or LF at line ending)."),
	VE_FOHEART_C1 	UMETA(DisplayName = "FOHEART_C1", ToolTip = "FOHEART C1 BVH live stream format, 23 skeleton."),
	VE_FOHEART_LEO 	UMETA(DisplayName = "FOHEART_LEO", ToolTip = "FOHEART LEO BVH live stream format, 61 skeleton.")
};

UENUM(BlueprintType)
enum class EFOHEARTXYZEnum : uint8
{
	VE_X			UMETA(DisplayName = "X"),
	VE_Y			UMETA(DisplayName = "Y"),
	VE_Z			UMETA(DisplayName = "Z"),
	VE_NX			UMETA(DisplayName = "-X"),
	VE_NY			UMETA(DisplayName = "-Y"),
	VE_NZ	 		UMETA(DisplayName = "-Z")
};

UENUM(BlueprintType)
enum class EFOHEARTRotOrderEnum : uint8
{
	VE_XYZ			UMETA(DisplayName = "XYZ"),
	VE_XZY			UMETA(DisplayName = "XZY"),
	VE_YXZ			UMETA(DisplayName = "YXZ"),
	VE_YZX			UMETA(DisplayName = "YZX"),
	VE_ZXY			UMETA(DisplayName = "ZXY"),
	VE_ZYX	 		UMETA(DisplayName = "ZYX")
};

UENUM(BlueprintType)
enum class EFOHEARTChannelNumberEnum : uint8
{
	VE_0			UMETA(DisplayName = "0"),
	VE_1			UMETA(DisplayName = "1"),
	VE_2			UMETA(DisplayName = "2"),
	VE_3			UMETA(DisplayName = "3"),
	VE_4			UMETA(DisplayName = "4"),
	VE_5	 		UMETA(DisplayName = "5")
};

// Bones delivered in the FOHEART_C1 live stream
UENUM(BlueprintType)
enum class EFOHEART_C1BonesEnum : uint8
{
	VE_Hips				UMETA(DisplayName = "Hips"),
	VE_Spine			UMETA(DisplayName = "Spine1"),
	VE_Spine1			UMETA(DisplayName = "Spine2"),
	VE_Spine2			UMETA(DisplayName = "Spine3"),
	VE_Spine3			UMETA(DisplayName = "Spine4"),
	VE_Neck				UMETA(DisplayName = "Neck"),
	VE_Head				UMETA(DisplayName = "Head"),
	VE_RightShoulder	UMETA(DisplayName = "RightShoulder"),
	VE_RightArm			UMETA(DisplayName = "RightArm"),
	VE_RightForeArm		UMETA(DisplayName = "RightForeArm"),
	VE_RightHand		UMETA(DisplayName = "RightHand"),
	VE_LeftShoulder		UMETA(DisplayName = "LeftShoulder"),
	VE_LeftArm			UMETA(DisplayName = "LeftArm"),
	VE_LeftForeArm		UMETA(DisplayName = "LeftForeArm"),
	VE_LeftHand			UMETA(DisplayName = "LeftHand"),
	VE_RightUpLeg		UMETA(DisplayName = "RightUpLeg"),
	VE_RightLeg			UMETA(DisplayName = "RightLeg"),
	VE_RightFoot		UMETA(DisplayName = "RightFoot"),
	VE_RightToeBase		UMETA(DisplayName = "RightToeBase"),
	VE_LeftUpLeg		UMETA(DisplayName = "LeftUpLeg"),
	VE_LeftLeg			UMETA(DisplayName = "LeftLeg"),
	VE_LeftFoot			UMETA(DisplayName = "LeftFoot"),
	VE_LeftToeBase		UMETA(DisplayName = "LeftToeBase")
};

USTRUCT(BlueprintType)
struct FFOHEART_C1BoneMapStruct
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FOHEART_C1")
		EFOHEART_C1BonesEnum BVHBone = EFOHEART_C1BonesEnum::VE_Hips;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FOHEART_C1")
		FName CustomBoneName = FName(TEXT("None"));
};

USTRUCT(BlueprintType)
struct FFOHEART_LEOBoneMapStruct
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FOHEART_LEO")
		EFOHEART_C1BonesEnum BVHBone = EFOHEART_C1BonesEnum::VE_Hips;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FOHEART_LEO")
		FName CustomBoneName = FName(TEXT("None"));
};

UCLASS()
class UFOHEART_C1BPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		// Init functions
		UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Init BVH Replay File", ToolTip = "Init BVH reference skeleton with a BVH file."))
		static bool FOHEART_C1InitBVHFile(AFOHEARTController *Controller, const FString BVHFileName = FString(TEXT("demo.bvh")));
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Init FOHEART C1", ToolTip = "Init BVH reference skeleton manually."))
		static bool FOHEART_C1Init(AFOHEARTController *Controller, int32 BoneNumber = 23, EFOHEARTRotOrderEnum RotationOrder = EFOHEARTRotOrderEnum::VE_ZXY,
			EFOHEARTChannelNumberEnum XPositionChannel = EFOHEARTChannelNumberEnum::VE_0, EFOHEARTChannelNumberEnum YPositionChannel = EFOHEARTChannelNumberEnum::VE_1,
			EFOHEARTChannelNumberEnum ZPositionChannel = EFOHEARTChannelNumberEnum::VE_2, EFOHEARTChannelNumberEnum XRotationChannel = EFOHEARTChannelNumberEnum::VE_3,
			EFOHEARTChannelNumberEnum YRotationChannel = EFOHEARTChannelNumberEnum::VE_4, EFOHEARTChannelNumberEnum ZRotationChannel = EFOHEARTChannelNumberEnum::VE_5);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Bone Set Offset", ToolTip = "Configure BVH bone offset. This offset is removed from the incoming translation before coordinate mapping."))
		static bool FOHEART_C1BoneSetOffset(AFOHEARTController *Controller, int32 BoneIndex = 0, float X = 0.0f, float Y = 0.0f, float Z = 0.0f);

	// Network functions
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Connect MotionVenus using TCP", ToolTip = "Connect MotionVenus with given IP&Port"))
		static bool FOHEART_C1ConnectTCP(AFOHEARTController *Controller, const FString HostName = FString(TEXT("127.0.0.1")), int32 Port = 7001,
			bool bReference = false, bool bDisplacement = true, EFOHEARTMotionLineFormatEnum MotionLineFormat = EFOHEARTMotionLineFormatEnum::VE_FOHEART_C1);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Disconnect MotionVenus", ToolTip = "Disconnect from MotionVenus."))
		static bool FOHEART_C1Disconnect(AFOHEARTController *Controller);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Read from MotionVenus using UDP", ToolTip = "Rec from MotionVenus UDP proto"))
		static bool FOHEART_C1ConnectUDP(AFOHEARTController *Controller, const FString HostName = FString(TEXT("127.0.0.1")), int32 Port = 5001,
			bool bReference = false, bool bDisplacement = true, EFOHEARTMotionLineFormatEnum MotionLineFormat = EFOHEARTMotionLineFormatEnum::VE_FOHEART_C1);
	// Player functionsme
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Play BVH File", ToolTip = "Play a local stored BVH file."))
		static bool FOHEART_C1BVHPlay(AFOHEARTController *Controller, FString BVHFileNa = FString(TEXT("test.bvh")), bool bEndless = true,
			bool bReference = false, bool bDisplacement = true, EFOHEARTMotionLineFormatEnum MotionLineFormat = EFOHEARTMotionLineFormatEnum::VE_Standard);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Pause playing BVH File", ToolTip = "Pause playing a local stored BVH file"))
		static bool FOHEART_C1BVHPause(AFOHEARTController *Controller, bool bPause = false);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Rewind BVH File Player", ToolTip = "Rewind BVH file player."))
		static bool FOHEART_C1BVHRewind(AFOHEARTController *Controller);

	// Read motion functions
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Read Motion", ToolTip = "Read incoming motion data for all bones."))
		static bool FOHEART_C1Read(AFOHEARTController *Controller, FString ActorName, USkeletalMeshComponent *Mesh, FVector& Translation, FRotator& Rotation,
			FVector AdditionalTranslation, FRotator AdditionalRotation, EFOHEART_C1BonesEnum BVHBone = EFOHEART_C1BonesEnum::VE_Hips,
			FName CustomBoneName = FName(TEXT("None")), bool InverseForward = false);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Read Motion Array", ToolTip = "Read incoming motion data for all bones."))
		static bool FOHEART_C1ReadArray(AFOHEARTController *Controller, FString ActorName, USkeletalMeshComponent *Mesh, TArray<FVector> &Translation,
			TArray<FRotator> &Rotation, TArray<FVector> AdditionalTranslation, TArray<FRotator> AdditionalRotation, TArray<FFOHEART_C1BoneMapStruct> BoneMap, bool InverseForward = false);

	// Additional tools
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Get Local Bone Rotation", ToolTip = "Get local bone rotation from mesh."))
		static bool FOHEART_C1GetLocalBoneRotation(USkeletalMeshComponent *Mesh, FRotator& Rotation, int32 BoneIndex = 0);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Get Local Bone Location", Keywords = "Get local bone location from mesh."))
		static bool FOHEART_C1GetLocalBoneLocation(USkeletalMeshComponent *Mesh, FVector& Location, int32 BoneIndex = 0);
	UFUNCTION(BlueprintCallable, Category = "FOHEART_C1", meta = (DisplayName = "Get Refpose Local Bone Rotation", Keywords = "Get local bone rotation from reference pose."))
		static bool FOHEART_C1GetReferencePoseLocalBoneRotation(USkeletalMeshComponent *Mesh, FRotator& Rotation, int32 BoneIndex = 0);
	UFUNCTION(BlueprintPure, Category = "FOHEART_C1", meta = (DisplayName = "Negate Rotation", CompactNodeTitle = "Neg", ToolTip = "Negate Yaw, Pitch and Roll in rotation vector."))
		static FRotator FOHEART_C1NegateRotation(FRotator Rotation);
	UFUNCTION(BlueprintPure, Category = "FOHEART_C1", meta = (DisplayName = "Get BVH Bone Index", CompactNodeTitle = "Index", ToolTip = "Return BVH Bone Index from Enum."))
		static int32 FOHEART_C1GetBVHBoneIndex(EFOHEART_C1BonesEnum BVHBone = EFOHEART_C1BonesEnum::VE_Hips);
};
