#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_Single_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Flag_Single.PrimalItemStructure_Flag_Single_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_Flag_Single_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Flag_Single.PrimalItemStructure_Flag_Single_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Flag_Single(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif