#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_FKaijuPoisonTree_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_FKaijuPoisonTree.WoodHarvestComponent_FKaijuPoisonTree_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_FKaijuPoisonTree_C : public UPrimalHarvestingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_FKaijuPoisonTree.WoodHarvestComponent_FKaijuPoisonTree_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_FKaijuPoisonTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
