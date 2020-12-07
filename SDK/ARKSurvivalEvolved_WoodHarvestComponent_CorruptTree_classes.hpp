#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_CorruptTree_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_CorruptTree.WoodHarvestComponent_CorruptTree_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_CorruptTree_C : public UWoodHarvestComponent_Ex_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_CorruptTree.WoodHarvestComponent_CorruptTree_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_CorruptTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
