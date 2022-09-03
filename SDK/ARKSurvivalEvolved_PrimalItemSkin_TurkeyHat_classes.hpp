#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0000 (0x0AE8 - 0x0AE8)
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
