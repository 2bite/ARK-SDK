#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SulfurPool_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SulfurPool.Buff_SulfurPool_C
// 0x0018 (0x0968 - 0x0950)
class ABuff_SulfurPool_C : public APrimalBuff
{
public:
	float                                              PostProcessTimer;                                         // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProcessIntensity;                                     // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnTime_1;                                               // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WobbleMagnitude_1;                                        // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizTurnAmount_1;                                        // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VertTurnAmount_1;                                         // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SulfurPool.Buff_SulfurPool_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SulfurPool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
