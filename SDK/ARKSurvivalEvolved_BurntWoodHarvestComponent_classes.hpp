#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BurntWoodHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BurntWoodHarvestComponent.BurntWoodHarvestComponent_C
// 0x0000 (0x0250 - 0x0250)
class UBurntWoodHarvestComponent_C : public UAttackHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BurntWoodHarvestComponent.BurntWoodHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_BurntWoodHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
