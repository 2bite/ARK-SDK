#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CupidBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_CupidBow.PrimalItemSkin_CupidBow_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_CupidBow_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_CupidBow.PrimalItemSkin_CupidBow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_CupidBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif