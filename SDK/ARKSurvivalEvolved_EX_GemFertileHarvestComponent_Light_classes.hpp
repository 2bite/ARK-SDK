#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_GemFertileHarvestComponent_Light_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_GemFertileHarvestComponent_Light.EX_GemFertileHarvestComponent_Light_C
// 0x0000 (0x0240 - 0x0240)
class UEX_GemFertileHarvestComponent_Light_C : public UGemFertileHarvestComponent_Light_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_GemFertileHarvestComponent_Light.EX_GemFertileHarvestComponent_Light_C");
		return ptr;
	}


	void ExecuteUbergraph_EX_GemFertileHarvestComponent_Light(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
