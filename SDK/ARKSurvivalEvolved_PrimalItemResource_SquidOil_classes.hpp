#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_SquidOil_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_SquidOil.PrimalItemResource_SquidOil_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemResource_SquidOil_C : public UPrimalItemResource_Oil_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_SquidOil.PrimalItemResource_SquidOil_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_SquidOil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif