#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GhillieBoots_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_GhillieBoots.PrimalItemArmor_GhillieBoots_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemArmor_GhillieBoots_C : public UPrimalItemArmor_BaseBoots_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_GhillieBoots.PrimalItemArmor_GhillieBoots_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_GhillieBoots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
