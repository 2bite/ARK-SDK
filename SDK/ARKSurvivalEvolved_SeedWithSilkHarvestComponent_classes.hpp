#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeedWithSilkHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeedWithSilkHarvestComponent.SeedWithSilkHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class USeedWithSilkHarvestComponent_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SeedWithSilkHarvestComponent.SeedWithSilkHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_SeedWithSilkHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
