#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SandHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SandHarvestComponent.SandHarvestComponent_C
// 0x0000 (0x0250 - 0x0250)
class USandHarvestComponent_C : public UStoneHarvestComponent_RequiresMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SandHarvestComponent.SandHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_SandHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
