#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RemoteCameraVision_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RemoteCameraVision.Buff_RemoteCameraVision_C
// 0x0030 (0x0990 - 0x0960)
class ABuff_RemoteCameraVision_C : public ABuff_Base_C
{
public:
	float                                              Interference;                                             // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class ARemoteCamera_Character_BP_C*                CameraReplicated;                                         // 0x0968(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             PossessionPendingTime;                                    // 0x0970(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFade;                                              // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetFade;                                               // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    helmetOverlayPostprocess;                                 // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RemoteCameraVision.Buff_RemoteCameraVision_C");
		return ptr;
	}


	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void ResetInterference();
	void StartFade(bool FadeIn);
	void BPDeactivated(class AActor** ForInstigator);
	TEnumAsByte<ECameraStyle> BPForceCameraStyle(class APrimalCharacter** ForViewTarget);
	class APrimalCharacter* BPOverrideTalkerCharacter();
	void IsLocalCamera(bool* Retval);
	void PossessionChangePending(class ARemoteCamera_Character_BP_C* NewCamera);
	bool BPOverrideIsNetRelevantFor(class APlayerController** RealViewer, class AActor** Viewer, struct FVector* SrcLocation);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RemoteCameraVision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
