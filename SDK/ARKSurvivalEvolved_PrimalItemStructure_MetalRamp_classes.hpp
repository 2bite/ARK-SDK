#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalRamp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalRamp.PrimalItemStructure_MetalRamp_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_MetalRamp_C : public UPrimalItemStructure_BaseRamp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalRamp.PrimalItemStructure_MetalRamp_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalRamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
