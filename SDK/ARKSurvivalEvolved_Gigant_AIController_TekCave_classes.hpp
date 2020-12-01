#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_AIController_TekCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gigant_AIController_TekCave.Gigant_AIController_TekCave_C
// 0x0000 (0x0911 - 0x0911)
class AGigant_AIController_TekCave_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gigant_AIController_TekCave.Gigant_AIController_TekCave_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gigant_AIController_TekCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
