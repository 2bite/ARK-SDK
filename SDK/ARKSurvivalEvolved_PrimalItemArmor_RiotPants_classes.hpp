#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RiotPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C
// 0x0000 (0x09B8 - 0x09B8)
class UPrimalItemArmor_RiotPants_C : public UPrimalItemArmor_BasePants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_RiotPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif