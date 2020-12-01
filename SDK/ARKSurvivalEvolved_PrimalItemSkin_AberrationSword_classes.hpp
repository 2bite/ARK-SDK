#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_AberrationSword_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_AberrationSword.PrimalItemSkin_AberrationSword_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_AberrationSword_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_AberrationSword.PrimalItemSkin_AberrationSword_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_AberrationSword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
