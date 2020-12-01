#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Sand_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Sand.PrimalItemResource_Sand_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemResource_Sand_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Sand.PrimalItemResource_Sand_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Sand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
