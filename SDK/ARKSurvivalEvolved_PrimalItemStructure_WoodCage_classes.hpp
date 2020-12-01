#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodCage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodCage.PrimalItemStructure_WoodCage_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_WoodCage_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodCage.PrimalItemStructure_WoodCage_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodCage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
