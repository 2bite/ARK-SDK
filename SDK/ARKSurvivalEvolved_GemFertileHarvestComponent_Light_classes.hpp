#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GemFertileHarvestComponent_Light_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GemFertileHarvestComponent_Light.GemFertileHarvestComponent_Light_C
// 0x0000 (0x0240 - 0x0240)
class UGemFertileHarvestComponent_Light_C : public UStoneHarvestComponent_RequiresMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GemFertileHarvestComponent_Light.GemFertileHarvestComponent_Light_C");
		return ptr;
	}


	void ExecuteUbergraph_GemFertileHarvestComponent_Light(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
