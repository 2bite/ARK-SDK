#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResourceGeneric_Curing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemResourceGeneric_Curing_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResourceGeneric_Curing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
