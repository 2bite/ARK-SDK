#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MetalHarvestComponent.MetalHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UMetalHarvestComponent_C : public UStoneHarvestComponent_RequiresMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MetalHarvestComponent.MetalHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_MetalHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
