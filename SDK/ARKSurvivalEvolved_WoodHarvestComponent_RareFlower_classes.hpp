#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_RareFlower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_RareFlower.WoodHarvestComponent_RareFlower_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_RareFlower_C : public UWoodHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_RareFlower.WoodHarvestComponent_RareFlower_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_RareFlower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
