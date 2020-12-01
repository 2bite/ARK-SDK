#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Reaper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Reaper.PrimalItemSkin_ChibiDino_Reaper_C
// 0x0000 (0x09A9 - 0x09A9)
class UPrimalItemSkin_ChibiDino_Reaper_C : public UPrimalItemSkin_ChibiDino_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Reaper.PrimalItemSkin_ChibiDino_Reaper_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ChibiDino_Reaper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
