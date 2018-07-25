// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "GameFramework/Actor.h"
#include "FOHEARTBVHSkeleton.h"
#include "FOHEARTController.generated.h"

#define PACKAGE_HEADER_LEN (128)  /*Data Package from MotionVenus is always < 1500Bytes and it's header is 128Bytes*/
#define PACKAGE_MAX_LEN	(MAXBONES * (12+6) + PACKAGE_HEADER_LEN)	// translation:4*3=12Bytes rotation:2*3=6Bytes
// Supported motion line formats
enum MotionLineFormatEnum { Standard, FOHEART_C1, FOHEART_LEO };


UCLASS()
class AFOHEARTController : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFOHEARTController();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called when the game stops
	virtual void BeginDestroy() override;

	//
	// TCP connection
	//
private:
	FSocket* ReceiverSocket;

public:
	// Connect to BVH server ( MotionVenus )
	bool Connect(FString HostName, int32 Port);
	bool ConnectUDP(FString HostName, int32 Port);
	// Disconnect from BVH server
	void Disconnect(void);

	bool bConnected = false;		// Connection to BVH server established?
	bool bReference = false;		// BVH server sends a reference (root) bone
	bool bDisplacement = true;		// BVH server sends displacement (translation) infos
	MotionLineFormatEnum MotionLineFormat = FOHEART_C1;	// Which motion line format is used by the BVH server?
	TMap<FString, float*> MotionLineMap;
	int32 FloatCount = 23 * 6;			// How many floats did we read into MotionLine array

public:
	FOHEARTBVHSkeleton Skeleton;

	// Map bone coordinate system (Used for VE_Map)
	typedef struct BoneMap
	{
		int32 XYZ[3];		// Map XYZ => X'Y'Z'
		int32 Sign[3];		// Map direction 1 or -1
	} BONEMAP;

	BONEMAP Bonemap[MAXBONES];

public:
	bool Play(FString BVHFileName, bool bPlayEndless);
	bool Pause(bool bPause);
	bool Rewind();

	bool GetFloatBuffer(FString ActorName, float* pFloatData);

private:
	float FrameTime = 0;
	float DeltaTimeAdded = 0;
	int32 MotionLineOffset = 0;
	int32 Frames = 0;
	int32 MotionLinePointer = 0;
	bool bPlayerInitialized = false;
	bool bEndless = true;
	TArray<FString> PlayerMotionLines;
	void tongji();

public:
	bool bPlay = false;

	//For Debug Only
private:
	uint64_t lastSendTimeStamp;
	uint64_t lastSendFrameNum;
	uint64_t frameNum;
	uint64_t sendTimeStamp;
	uint32_t sendFreq;

	FCriticalSection Mutex;
};
