#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_IndustrialCookingPot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_IndustrialCookingPot.PrimalItemStructure_IndustrialCookingPot_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_IndustrialCookingPot_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_IndustrialCookingPot.PrimalItemStructure_IndustrialCookingPot_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_IndustrialCookingPot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif