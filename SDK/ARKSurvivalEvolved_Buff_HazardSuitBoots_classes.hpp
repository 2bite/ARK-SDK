#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitBoots_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HazardSuitBoots.Buff_HazardSuitBoots_C
// 0x0000 (0x0970 - 0x0970)
class ABuff_HazardSuitBoots_C : public ABuff_HazardSuit_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HazardSuitBoots.Buff_HazardSuitBoots_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HazardSuitBoots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
