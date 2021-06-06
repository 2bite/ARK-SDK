#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_RedWood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_RedWood.WoodHarvestComponent_RedWood_C
// 0x0000 (0x0250 - 0x0250)
class UWoodHarvestComponent_RedWood_C : public UWoodHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_RedWood.WoodHarvestComponent_RedWood_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_RedWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
