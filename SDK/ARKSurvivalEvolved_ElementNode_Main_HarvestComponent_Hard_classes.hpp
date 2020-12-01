#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Main_HarvestComponent_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementNode_Main_HarvestComponent_Hard.ElementNode_Main_HarvestComponent_Hard_C
// 0x0000 (0x0240 - 0x0240)
class UElementNode_Main_HarvestComponent_Hard_C : public UStoneHarvestComponent_RequiresMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementNode_Main_HarvestComponent_Hard.ElementNode_Main_HarvestComponent_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_ElementNode_Main_HarvestComponent_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
