#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TurkeyHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TurkeyHat.PrimalItemSkin_TurkeyHat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_TurkeyHat_C : public UPrimalItemSkinGeneric_Trophy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TurkeyHat.PrimalItemSkin_TurkeyHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_TurkeyHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
