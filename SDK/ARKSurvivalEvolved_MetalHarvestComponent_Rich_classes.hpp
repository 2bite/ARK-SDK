#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalHarvestComponent_Rich_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C
// 0x0000 (0x0240 - 0x0240)
class UMetalHarvestComponent_Rich_C : public UMetalHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C");
		return ptr;
	}


	void ExecuteUbergraph_MetalHarvestComponent_Rich(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
