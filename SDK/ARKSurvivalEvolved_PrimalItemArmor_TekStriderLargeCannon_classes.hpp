#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderLargeCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekStriderLargeCannon.PrimalItemArmor_TekStriderLargeCannon_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemArmor_TekStriderLargeCannon_C : public UPrimalItemArmor_TekStriderAttachment_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekStriderLargeCannon.PrimalItemArmor_TekStriderLargeCannon_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekStriderLargeCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
