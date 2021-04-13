#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_WoodShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_WoodShield.PrimalItemArmor_WoodShield_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemArmor_WoodShield_C : public UPrimalItemArmor_Shield_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_WoodShield.PrimalItemArmor_WoodShield_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_WoodShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
