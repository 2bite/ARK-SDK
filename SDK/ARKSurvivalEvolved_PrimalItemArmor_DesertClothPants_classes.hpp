#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesertClothPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_DesertClothPants.PrimalItemArmor_DesertClothPants_C
// 0x0000 (0x09B8 - 0x09B8)
class UPrimalItemArmor_DesertClothPants_C : public UPrimalItemArmor_BasePants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_DesertClothPants.PrimalItemArmor_DesertClothPants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_DesertClothPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif