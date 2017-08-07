// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "GameFramework/Actor.h"
#include "FOHEARTBVHSkeleton.h"
#include "FOHEARTController.generated.h"


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
	virtual void Tick( float DeltaSeconds ) override;

	// Called when the game stops
	virtual void BeginDestroy() override;

	//
	// TCP connection
	//
private:
	FSocket* ReceiverSocket;
#define MAXFLOATS	MAXBONES * 6	// 3 for x,y,z translation and 3 for x,y,z rotation	
	typedef struct {
		FString actorName;
		float MotionLine[MAXFLOATS];	// Array of floats with last motion line read
	}MotionLine_TypeDef;

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


	float MotionLine[MAXFLOATS];	// Array of floats with last motion line read
	TMap<FString, float*> MotionLineMap;
	// FVector<MotionLine_TypeDef> MotionLines;
	int32 FloatCount = 23*6;			// How many floats did we read into MotionLine array
private:
	int32 FloatSkip = 0;			// How many leading floats should we skip?	

	//
	// BVH Reference Skeleton
	//
public:
	FOHEARTBVHSkeleton Skeleton;

	// Map bone coordinate system (Used for VE_Map)
	typedef struct BoneMap
	{
		int32 XYZ[3];		// Map XYZ => X'Y'Z'
		int32 Sign[3];		// Map direction 1 or -1
	} BONEMAP;

	BONEMAP Bonemap[MAXBONES];


	//
	// BVH Player
	//
public:
	bool Play(FString BVHFileName, bool bPlayEndless);
	bool Pause(bool bPause);
	bool Rewind();

private:
	float FrameTime = 0;
	float DeltaTimeAdded = 0;
	int32 MotionLineOffset = 0;
	int32 Frames = 0;
	int32 MotionLinePointer = 0;
	bool bPlayerInitialized = false;
	bool bEndless = true;
	TArray<FString> PlayerMotionLines;

public:
	bool bPlay = false;

};
