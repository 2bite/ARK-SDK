#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeIntake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_StonePipeIntake_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StonePipeIntake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
