#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_EasterChick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_EasterChick.PrimalItemSkin_EasterChick_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemSkin_EasterChick_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_EasterChick.PrimalItemSkin_EasterChick_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_EasterChick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
