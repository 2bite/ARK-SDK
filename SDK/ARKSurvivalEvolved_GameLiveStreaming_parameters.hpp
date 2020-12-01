#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GameLiveStreaming_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
{
	int                                                FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenScaling;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWebCam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredWebCamWidth;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredWebCamHeight;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMirrorWebCamImage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureAudioFromComputer;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureAudioFromMicrophone;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSimpleWebCamVideo;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
{
	class FString                                      GameName;                                                 // (Parm, ZeroConstructor)
	class UQueryLiveStreamsCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.OnQueryLiveStreamsCompleted__DelegateSignature
struct UQueryLiveStreamsCallbackProxy_OnQueryLiveStreamsCompleted__DelegateSignature_Params
{
	TArray<struct FBlueprintLiveStreamInfo>            LiveStreams;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
