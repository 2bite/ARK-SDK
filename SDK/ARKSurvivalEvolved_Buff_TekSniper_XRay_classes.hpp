#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0040 (0x0908 - 0x08C8)
class ABuff_TekSniper_XRay_C : public ABuff_XRay_Base_C
{
public:
	float                                              XRayActivation;                                           // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    OverlayMaterial;                                          // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XRayActivationInterpSpeed;                                // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class AWeapTekSniper_C*                            MySniper;                                                 // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       XRayParamName;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaxDistanceParamName;                                     // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              XRayInterferenceActorTypes;                               // 0x08F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekSniper_XRay.Buff_TekSniper_XRay_C");
		return ptr;
	}


	void GetFriendOrFoe(class AActor* Actor, float* Value);
	void BPDeactivated(class AActor** ForInstigator);
	void STATIC_BuffTickClient(float* DeltaTime);
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
