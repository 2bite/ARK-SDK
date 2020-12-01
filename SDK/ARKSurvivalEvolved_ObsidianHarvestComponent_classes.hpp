#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ObsidianHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ObsidianHarvestComponent.ObsidianHarvestComponent_C
// 0x0000 (0x0240 - 0x0240)
class UObsidianHarvestComponent_C : public UStoneHarvestComponent_RequiresMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ObsidianHarvestComponent.ObsidianHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_ObsidianHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
