#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IncubatorGestationMonitor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C
// 0x0014 (0x098C - 0x0978)
class ABuff_IncubatorGestationMonitor_C : public APrimalBuff
{
public:
	TArray<class APrimalDinoCharacter*>                GestationMonitoringTargets;                               // 0x0978(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              ResetTargetRange;                                         // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	TArray<class APrimalDinoCharacter*> GetEnabledGestationMonitoringTargets();
	void STATIC_SetGestationMonitoringTarget(class APrimalDinoCharacter** forTarget, bool* bEnable);
	void ReplicateGestationData(const struct FUnreplicatedEggData& GestationData, class APrimalDinoCharacter* forTarget);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_IncubatorGestationMonitor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
