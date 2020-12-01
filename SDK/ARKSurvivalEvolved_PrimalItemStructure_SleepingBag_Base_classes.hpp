#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_SleepingBag_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Base.PrimalItemStructure_SleepingBag_Base_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_SleepingBag_Base_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Base.PrimalItemStructure_SleepingBag_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_SleepingBag_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
