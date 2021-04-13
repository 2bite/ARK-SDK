#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekTrapdoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekTrapdoor.PrimalItemStructure_TekTrapdoor_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_TekTrapdoor_C : public UPrimalItemStructure_BaseTrapdoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekTrapdoor.PrimalItemStructure_TekTrapdoor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekTrapdoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
