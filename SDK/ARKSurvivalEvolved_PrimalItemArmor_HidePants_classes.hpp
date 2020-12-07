#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HidePants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HidePants.PrimalItemArmor_HidePants_C
// 0x0000 (0x0A10 - 0x0A10)
class UPrimalItemArmor_HidePants_C : public UPrimalItemArmor_BasePants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HidePants.PrimalItemArmor_HidePants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_HidePants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
