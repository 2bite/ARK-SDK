#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_AIController_BP_Climber_Enforcer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C
// 0x002B (0x0914 - 0x08E9)
class ADino_AIController_BP_Climber_Enforcer_C : public ADino_AIController_BP_Climber_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class UClass*                                      ScoutTrackerBuffClass;                                    // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScoutTrackerDesirabilityMultiplier;                       // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetScanTimeMin;                                        // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetScanTimeMax;                                        // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	double                                             LastTargetScanTime;                                       // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetScanInterval;                                       // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BPSetupFindTarget();
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
