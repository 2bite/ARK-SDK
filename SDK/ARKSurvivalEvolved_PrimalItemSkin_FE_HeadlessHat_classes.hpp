#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_FE_HeadlessHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_FE_HeadlessHat.PrimalItemSkin_FE_HeadlessHat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_FE_HeadlessHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_FE_HeadlessHat.PrimalItemSkin_FE_HeadlessHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
