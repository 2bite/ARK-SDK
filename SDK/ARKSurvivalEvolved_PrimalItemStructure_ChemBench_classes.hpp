#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ChemBench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_ChemBench.PrimalItemStructure_ChemBench_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_ChemBench_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_ChemBench.PrimalItemStructure_ChemBench_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_ChemBench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
