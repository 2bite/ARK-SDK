#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_KaijuOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_KaijuOnly.WoodHarvestComponent_KaijuOnly_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_KaijuOnly_C : public UAttackHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_KaijuOnly.WoodHarvestComponent_KaijuOnly_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_KaijuOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
