#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HazardSuitPants.Buff_HazardSuitPants_C
// 0x0000 (0x0998 - 0x0998)
class ABuff_HazardSuitPants_C : public ABuff_HazardSuit_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HazardSuitPants.Buff_HazardSuitPants_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HazardSuitPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
