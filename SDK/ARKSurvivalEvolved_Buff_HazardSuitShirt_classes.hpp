#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HazardSuitShirt.Buff_HazardSuitShirt_C
// 0x0000 (0x0998 - 0x0998)
class ABuff_HazardSuitShirt_C : public ABuff_HazardSuit_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HazardSuitShirt.Buff_HazardSuitShirt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HazardSuitShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
