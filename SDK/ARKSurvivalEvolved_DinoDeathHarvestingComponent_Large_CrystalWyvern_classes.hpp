#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Large_CrystalWyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Large_CrystalWyvern_C : public UDinoDeathHarvestingComponent_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C");
		return ptr;
	}


	void CheckCorpseDissolve();
	int BPCustomHarvestResource(class UPrimalInventoryComponent** invComp, int* NumToGive, class UClass** DamageTypeClass, class AActor** ToActor);
	void ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
