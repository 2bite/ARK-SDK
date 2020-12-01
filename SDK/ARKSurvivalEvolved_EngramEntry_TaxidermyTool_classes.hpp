#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TaxidermyTool_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_TaxidermyTool.EngramEntry_TaxidermyTool_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_TaxidermyTool_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TaxidermyTool.EngramEntry_TaxidermyTool_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_TaxidermyTool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
