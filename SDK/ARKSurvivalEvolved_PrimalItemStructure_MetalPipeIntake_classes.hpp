#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPipeIntake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalPipeIntake.PrimalItemStructure_MetalPipeIntake_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_MetalPipeIntake_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalPipeIntake.PrimalItemStructure_MetalPipeIntake_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalPipeIntake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif