#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunNearingOverheat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C
// 0x0020 (0x08C0 - 0x08A0)
class ABuff_MinigunNearingOverheat_C : public APrimalBuff
{
public:
	float                                              StaminaDrain;                                             // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    NearlyOverheatPostProcess;                                // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 StaminaPercentToNearlyOverheatPostProcessIntensity_Curve; // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 StaminaPercentToNearlyOverheatParticleIntensity_Curve;    // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BuffTickClient(float* DeltaTime);
	float GetBuffPostprocessIntensity();
	bool AllowPostProcessEffect();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MinigunNearingOverheat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
