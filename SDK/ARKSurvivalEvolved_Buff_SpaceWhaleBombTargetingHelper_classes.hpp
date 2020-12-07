#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceWhaleBombTargetingHelper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C
// 0x0010 (0x0960 - 0x0950)
class ABuff_SpaceWhaleBombTargetingHelper_C : public APrimalBuff
{
public:
	double                                             StartTime;                                                // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASpaceWhale_Character_BP_C*                  Whale;                                                    // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void BuffTickClient(float* DeltaTime);
	bool AllowPostProcessEffect();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
