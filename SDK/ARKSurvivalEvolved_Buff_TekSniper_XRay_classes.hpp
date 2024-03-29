#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekSniper_XRay_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekSniper_XRay.Buff_TekSniper_XRay_C
// 0x0040 (0x09F0 - 0x09B0)
class ABuff_TekSniper_XRay_C : public ABuff_XRay_Base_C
{
public:
	float                                              XRayActivation;                                           // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    OverlayMaterial;                                          // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XRayActivationInterpSpeed;                                // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class AWeapTekSniper_C*                            MySniper;                                                 // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       XRayParamName;                                            // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaxDistanceParamName;                                     // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              XRayInterferenceActorTypes;                               // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekSniper_XRay.Buff_TekSniper_XRay_C");
		return ptr;
	}


	void GetFriendOrFoe(class AActor* Actor, float* Value);
	void BPDeactivated(class AActor** ForInstigator);
	void BuffTickClient(float* DeltaTime);
	float GetBuffPostprocessIntensity();
	float Smooth_Overheating_Amount(float amount, float DeltaTime);
	void Set_Overheating_Amount(float Value);
	void BPActivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekSniper_XRay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
