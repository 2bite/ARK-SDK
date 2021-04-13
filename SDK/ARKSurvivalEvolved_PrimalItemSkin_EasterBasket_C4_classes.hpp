#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_EasterBasket_C4_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_EasterBasket_C4.PrimalItemSkin_EasterBasket_C4_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemSkin_EasterBasket_C4_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_EasterBasket_C4.PrimalItemSkin_EasterBasket_C4_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
