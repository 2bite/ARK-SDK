#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x0000 (0x0A00 - 0x0A00)
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
