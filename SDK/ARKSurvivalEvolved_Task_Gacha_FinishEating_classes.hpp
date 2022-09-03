#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Gacha_FinishEating_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_Gacha_FinishEating.Task_Gacha_FinishEating_C
// 0x0010 (0x0088 - 0x0078)
class UTask_Gacha_FinishEating_C : public UBTTask_BlueprintBase
{
public:
	class AGacha_AIController_BP_C*                    AIController;                                             // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGacha_Character_BP_C*                       GachaPawn;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_Gacha_FinishEating.Task_Gacha_FinishEating_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_Gacha_FinishEating(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
