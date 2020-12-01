#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TaxidermyBase_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TaxidermyBase_Small.PrimalItemStructure_TaxidermyBase_Small_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_TaxidermyBase_Small_C : public UPrimalItemStructure_TaxidermyBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TaxidermyBase_Small.PrimalItemStructure_TaxidermyBase_Small_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
