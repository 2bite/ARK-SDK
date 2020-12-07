#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TransparentRiotShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TransparentRiotShield.PrimalItemArmor_TransparentRiotShield_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemArmor_TransparentRiotShield_C : public UPrimalItemArmor_Shield_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TransparentRiotShield.PrimalItemArmor_TransparentRiotShield_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TransparentRiotShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
