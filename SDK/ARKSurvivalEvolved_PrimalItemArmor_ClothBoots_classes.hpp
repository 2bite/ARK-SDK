#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ClothBoots_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ClothBoots.PrimalItemArmor_ClothBoots_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemArmor_ClothBoots_C : public UPrimalItemArmor_BaseBoots_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ClothBoots.PrimalItemArmor_ClothBoots_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ClothBoots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
