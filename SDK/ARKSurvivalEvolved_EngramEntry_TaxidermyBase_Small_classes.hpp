#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TaxidermyBase_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_TaxidermyBase_Small.EngramEntry_TaxidermyBase_Small_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_TaxidermyBase_Small_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TaxidermyBase_Small.EngramEntry_TaxidermyBase_Small_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_TaxidermyBase_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
