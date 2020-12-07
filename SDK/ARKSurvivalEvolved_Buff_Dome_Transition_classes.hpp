#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Dome_Transition_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Dome_Transition.Buff_Dome_Transition_C
// 0x0040 (0x09C8 - 0x0988)
class ABuff_Dome_Transition_C : public ABuff_XRay_Base_C
{
public:
	float                                              XRayActivation;                                           // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    OverlayMaterial;                                          // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XRayActivationInterpSpeed;                                // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	class AWeapTekSniper_C*                            MySniper;                                                 // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       XRayParamName;                                            // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaxDistanceParamName;                                     // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              XRayInterferenceActorTypes;                               // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Dome_Transition.Buff_Dome_Transition_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void BuffTickClient(float* DeltaTime);
	float GetBuffPostprocessIntensity();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Dome_Transition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
