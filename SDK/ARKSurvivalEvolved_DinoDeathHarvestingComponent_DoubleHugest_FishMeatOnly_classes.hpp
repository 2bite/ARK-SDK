#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_DoubleHugest_FishMeatOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_DoubleHugest_FishMeatOnly.DinoDeathHarvestingComponent_DoubleHugest_FishMeatOnly_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_DoubleHugest_FishMeatOnly_C : public UDinoDeathHarvestingComponent_DoubleHugest_MeatOnly_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_DoubleHugest_FishMeatOnly.DinoDeathHarvestingComponent_DoubleHugest_FishMeatOnly_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_DoubleHugest_FishMeatOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
