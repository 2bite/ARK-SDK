#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Toilet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Toilet.PrimalItemStructure_Toilet_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_Toilet_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Toilet.PrimalItemStructure_Toilet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Toilet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
