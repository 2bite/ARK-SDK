#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeStraight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StonePipeStraight.PrimalItemStructure_StonePipeStraight_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_StonePipeStraight_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StonePipeStraight.PrimalItemStructure_StonePipeStraight_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StonePipeStraight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
