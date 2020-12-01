// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GameLiveStreaming_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// ()

void UGameLiveStreamingFunctionLibrary::StopBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// ()
// Parameters:
// int                            FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenScaling                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableWebCam                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredWebCamWidth             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredWebCamHeight            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMirrorWebCamImage             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaptureAudioFromComputer      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaptureAudioFromMicrophone    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawSimpleWebCamVideo         (Parm, ZeroConstructor, IsPlainOldData)

void UGameLiveStreamingFunctionLibrary::StartBroadcastingGame(int FrameRate, float ScreenScaling, bool bEnableWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params;
	params.FrameRate = FrameRate;
	params.ScreenScaling = ScreenScaling;
	params.bEnableWebCam = bEnableWebCam;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameLiveStreamingFunctionLibrary::IsBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// ()
// Parameters:
// class FString                  GameName                       (Parm, ZeroConstructor)
// class UQueryLiveStreamsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::QueryLiveStreams(const class FString& GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams");

	UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.OnQueryLiveStreamsCompleted__DelegateSignature
// ()
// Parameters:
// TArray<struct FBlueprintLiveStreamInfo> LiveStreams                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData)

void UQueryLiveStreamsCallbackProxy::OnQueryLiveStreamsCompleted__DelegateSignature(TArray<struct FBlueprintLiveStreamInfo> LiveStreams, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.OnQueryLiveStreamsCompleted__DelegateSignature");

	UQueryLiveStreamsCallbackProxy_OnQueryLiveStreamsCompleted__DelegateSignature_Params params;
	params.LiveStreams = LiveStreams;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
