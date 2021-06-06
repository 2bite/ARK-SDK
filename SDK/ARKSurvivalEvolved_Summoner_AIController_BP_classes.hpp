#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Summoner_AIController_BP.Summoner_AIController_BP_C
// 0x0001 (0x091A - 0x0919)
class ASummoner_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	bool                                               bDespawnMinionsOnNoTarget;                                // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Summoner_AIController_BP.Summoner_AIController_BP_C");
		return ptr;
	}


	void BPNotifyTargetSet();
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Summoner_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
