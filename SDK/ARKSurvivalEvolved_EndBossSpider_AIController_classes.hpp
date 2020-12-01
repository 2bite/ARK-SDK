#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossSpider_AIController_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBossSpider_AIController.EndBossSpider_AIController_C
// 0x0000 (0x08E9 - 0x08E9)
class AEndBossSpider_AIController_C : public ASpiderL_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBossSpider_AIController.EndBossSpider_AIController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndBossSpider_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
