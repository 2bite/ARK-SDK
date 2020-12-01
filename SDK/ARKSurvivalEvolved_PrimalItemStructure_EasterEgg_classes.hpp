#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_EasterEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_EasterEgg.PrimalItemStructure_EasterEgg_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_EasterEgg_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_EasterEgg.PrimalItemStructure_EasterEgg_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_EasterEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
