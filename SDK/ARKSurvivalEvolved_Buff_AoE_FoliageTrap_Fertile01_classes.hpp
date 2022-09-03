#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AoE_FoliageTrap_Fertile01_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AoE_FoliageTrap_Fertile01.Buff_AoE_FoliageTrap_Fertile01_C
// 0x0000 (0x0988 - 0x0988)
class ABuff_AoE_FoliageTrap_Fertile01_C : public ABuff_Base_AoE_WithDelay_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AoE_FoliageTrap_Fertile01.Buff_AoE_FoliageTrap_Fertile01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AoE_FoliageTrap_Fertile01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
