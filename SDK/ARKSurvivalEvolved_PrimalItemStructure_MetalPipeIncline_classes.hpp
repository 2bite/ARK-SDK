#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPipeIncline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalPipeIncline.PrimalItemStructure_MetalPipeIncline_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_MetalPipeIncline_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalPipeIncline.PrimalItemStructure_MetalPipeIncline_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalPipeIncline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
