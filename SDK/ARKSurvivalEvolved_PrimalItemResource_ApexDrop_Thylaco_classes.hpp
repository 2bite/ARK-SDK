#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_Thylaco_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ApexDrop_Thylaco.PrimalItemResource_ApexDrop_Thylaco_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemResource_ApexDrop_Thylaco_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ApexDrop_Thylaco.PrimalItemResource_ApexDrop_Thylaco_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ApexDrop_Thylaco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif