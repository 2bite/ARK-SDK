#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_XenomorphOffspring_AIController_BP_NoFlee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C
// 0x0000 (0x090A - 0x090A)
class AXenomorphOffspring_AIController_BP_NoFlee_C : public AXenomorphOffspring_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
