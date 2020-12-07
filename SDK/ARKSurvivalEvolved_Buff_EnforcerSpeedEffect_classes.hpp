#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EnforcerSpeedEffect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C
// 0x0018 (0x0968 - 0x0950)
class ABuff_EnforcerSpeedEffect_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:
	float                                              RampUpTime;                                               // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PostProcessMat;                                           // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             StartTime;                                                // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C");
		return ptr;
	}


	void BPActivated(class AActor** ForInstigator);
	void BuffTickClient(float* DeltaTime);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_EnforcerSpeedEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
