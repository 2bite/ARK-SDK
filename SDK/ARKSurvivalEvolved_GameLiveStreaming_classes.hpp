#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GameLiveStreaming_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary");
		return ptr;
	}


	void StopBroadcastingGame();
	void StartBroadcastingGame(int FrameRate, float ScreenScaling, bool bEnableWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo);
	bool IsBroadcastingGame();
};


// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnQueriedLiveStreams;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy");
		return ptr;
	}


	class UQueryLiveStreamsCallbackProxy* QueryLiveStreams(const class FString& GameName);
	void OnQueryLiveStreamsCompleted__DelegateSignature(TArray<struct FBlueprintLiveStreamInfo> LiveStreams, bool bWasSuccessful);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
