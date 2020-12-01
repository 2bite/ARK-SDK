#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_AIController_BP_Climber_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C
// 0x0000 (0x0911 - 0x0911)
class ADino_AIController_BP_Climber_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C");
		return ptr;
	}


	void BPOnFleeEvent();
	void BPNotifyTargetSet();
	void UserConstructionScript();
	void ExecuteUbergraph_Dino_AIController_BP_Climber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
