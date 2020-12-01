#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_SleepingBag_Hide_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Hide.PrimalItemStructure_SleepingBag_Hide_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_SleepingBag_Hide_C : public UPrimalItemStructure_SleepingBag_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Hide.PrimalItemStructure_SleepingBag_Hide_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_SleepingBag_Hide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
