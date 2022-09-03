#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHardHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHardHarvestComponent.WoodHardHarvestComponent_C
// 0x0000 (0x0250 - 0x0250)
class UWoodHardHarvestComponent_C : public UAttackHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHardHarvestComponent.WoodHardHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHardHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
