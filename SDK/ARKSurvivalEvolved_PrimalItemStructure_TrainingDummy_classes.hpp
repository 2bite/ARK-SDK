#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TrainingDummy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TrainingDummy.PrimalItemStructure_TrainingDummy_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_TrainingDummy_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TrainingDummy.PrimalItemStructure_TrainingDummy_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TrainingDummy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
