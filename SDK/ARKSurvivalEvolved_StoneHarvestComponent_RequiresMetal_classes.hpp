#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestComponent_RequiresMetal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C
// 0x0000 (0x0240 - 0x0240)
class UStoneHarvestComponent_RequiresMetal_C : public UStoneHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C");
		return ptr;
	}


	void ExecuteUbergraph_StoneHarvestComponent_RequiresMetal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
