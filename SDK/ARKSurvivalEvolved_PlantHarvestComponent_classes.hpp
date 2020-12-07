#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlantHarvestComponent.PlantHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UPlantHarvestComponent_C : public UWoodHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlantHarvestComponent.PlantHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_PlantHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
