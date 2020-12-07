#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtle_Piranha_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C
// 0x000B (0x0924 - 0x0919)
class AGiantTurtle_Piranha_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	float                                              TamedSarcoDetectionRadius;                                // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedSarcoFleeTime;                                       // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C");
		return ptr;
	}


	void ChangedAITarget();
	void UserConstructionScript();
	void ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
