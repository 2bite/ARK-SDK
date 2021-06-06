#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_AIController_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C
// 0x0004 (0x0A1C - 0x0A18)
class AIceJumper_AIController_BP_Gauntlet_C : public AIceJumper_AIController_BP_C
{
public:
	float                                              AIShouldMeleeDuration;                                    // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C");
		return ptr;
	}


	void UpdateMelee();
	void UserConstructionScript();
	void ExecuteUbergraph_IceJumper_AIController_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
