#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Fibers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Fibers.PrimalItemResource_Fibers_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemResource_Fibers_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Fibers.PrimalItemResource_Fibers_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Fibers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
