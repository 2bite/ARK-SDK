#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalHarvestComponent.CrystalHarvestComponent_C
// 0x0000 (0x0250 - 0x0250)
class UCrystalHarvestComponent_C : public UStoneHarvestComponent_RequiresMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalHarvestComponent.CrystalHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_CrystalHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
