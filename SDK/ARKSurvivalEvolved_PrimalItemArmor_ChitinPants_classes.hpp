#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ChitinPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ChitinPants.PrimalItemArmor_ChitinPants_C
// 0x0000 (0x0B08 - 0x0B08)
class UPrimalItemArmor_ChitinPants_C : public UPrimalItemArmor_BasePants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ChitinPants.PrimalItemArmor_ChitinPants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ChitinPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
