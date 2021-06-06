#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_ScoutStrafe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_ScoutStrafe.Service_ScoutStrafe_C
// 0x0001 (0x0081 - 0x0080)
class UService_ScoutStrafe_C : public UBTService_BlueprintBase
{
public:
	bool                                               IsTargetAimingAtScoutPrev;                                // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_ScoutStrafe.Service_ScoutStrafe_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_Service_ScoutStrafe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
