#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BloodCurse_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BloodCurse.Buff_BloodCurse_C
// 0x0020 (0x0970 - 0x0950)
class ABuff_BloodCurse_C : public APrimalBuff
{
public:
	double                                             LastDamageTime;                                           // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealthPercentDamagePerSecond;                          // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamagePerSecond;                                       // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamagePerSecond;                                       // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class UClass*                                      DamageCauserBuff;                                         // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BloodCurse.Buff_BloodCurse_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BloodCurse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
