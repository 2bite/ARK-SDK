#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekBoots_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekBoots.PrimalItemArmor_TekBoots_C
// 0x0000 (0x0BF9 - 0x0BF9)
class UPrimalItemArmor_TekBoots_C : public UPrimalItemArmor_Base_Tek_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekBoots.PrimalItemArmor_TekBoots_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekBoots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
