#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeIncline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StonePipeIncline.PrimalItemStructure_StonePipeIncline_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_StonePipeIncline_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StonePipeIncline.PrimalItemStructure_StonePipeIncline_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StonePipeIncline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
