#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HideHelmetAlt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HideHelmetAlt.PrimalItemArmor_HideHelmetAlt_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemArmor_HideHelmetAlt_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HideHelmetAlt.PrimalItemArmor_HideHelmetAlt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_HideHelmetAlt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif