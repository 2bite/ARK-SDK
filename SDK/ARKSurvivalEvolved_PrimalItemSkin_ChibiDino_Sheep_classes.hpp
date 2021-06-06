#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Sheep_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Sheep.PrimalItemSkin_ChibiDino_Sheep_C
// 0x0000 (0x0AF9 - 0x0AF9)
class UPrimalItemSkin_ChibiDino_Sheep_C : public UPrimalItemSkin_ChibiDino_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Sheep.PrimalItemSkin_ChibiDino_Sheep_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ChibiDino_Sheep(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
