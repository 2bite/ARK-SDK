#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_WinterHatC_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_WW_WinterHatC.PrimalItemSkin_WW_WinterHatC_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_WW_WinterHatC_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_WW_WinterHatC.PrimalItemSkin_WW_WinterHatC_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_WW_WinterHatC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
