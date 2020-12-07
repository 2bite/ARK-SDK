#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_FurPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_FurPants.PrimalItemArmor_FurPants_C
// 0x0000 (0x0A10 - 0x0A10)
class UPrimalItemArmor_FurPants_C : public UPrimalItemArmor_BasePants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_FurPants.PrimalItemArmor_FurPants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_FurPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
