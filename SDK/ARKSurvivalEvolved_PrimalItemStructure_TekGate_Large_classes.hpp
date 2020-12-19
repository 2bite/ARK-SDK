#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekGate_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekGate_Large.PrimalItemStructure_TekGate_Large_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_TekGate_Large_C : public UPrimalItemStructure_BaseGate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekGate_Large.PrimalItemStructure_TekGate_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekGate_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
