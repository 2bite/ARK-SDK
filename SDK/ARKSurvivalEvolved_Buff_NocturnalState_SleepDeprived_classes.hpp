#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NocturnalState_SleepDeprived_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C
// 0x0004 (0x08A4 - 0x08A0)
class ABuff_NocturnalState_SleepDeprived_C : public ABuff_Base_C
{
public:
	float                                              sleepDebtTime;                                            // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	float GetHUDProgressBarPercent();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NocturnalState_SleepDeprived(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif