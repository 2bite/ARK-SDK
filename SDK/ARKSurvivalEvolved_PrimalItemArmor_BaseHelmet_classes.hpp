#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BaseHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_BaseHelmet.PrimalItemArmor_BaseHelmet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArmor_BaseHelmet_C : public UPrimalItemArmorGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_BaseHelmet.PrimalItemArmor_BaseHelmet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_BaseHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
