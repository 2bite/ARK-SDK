#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_ExtraWood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_ExtraWood.WoodHarvestComponent_ExtraWood_C
// 0x0000 (0x0250 - 0x0250)
class UWoodHarvestComponent_ExtraWood_C : public UWoodHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_ExtraWood.WoodHarvestComponent_ExtraWood_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_ExtraWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
