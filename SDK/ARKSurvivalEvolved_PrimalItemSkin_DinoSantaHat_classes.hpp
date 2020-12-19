#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DinoSantaHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_DinoSantaHat.PrimalItemSkin_DinoSantaHat_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemSkin_DinoSantaHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_DinoSantaHat.PrimalItemSkin_DinoSantaHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_DinoSantaHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
