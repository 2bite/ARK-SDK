#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockDrake_AIController_BP.RockDrake_AIController_BP_C
// 0x0001 (0x08EA - 0x08E9)
class ARockDrake_AIController_BP_C : public ADino_AIController_BP_Climber_C
{
public:
	bool                                               bWasDrakeUsingCamo;                                       // 0x08E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockDrake_AIController_BP.RockDrake_AIController_BP_C");
		return ptr;
	}


	void BPNotifyTargetSet();
	void UserConstructionScript();
	void ExecuteUbergraph_RockDrake_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif