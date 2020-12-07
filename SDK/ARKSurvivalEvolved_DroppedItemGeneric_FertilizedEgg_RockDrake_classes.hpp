#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_RockDrake.DroppedItemGeneric_FertilizedEgg_RockDrake_C
// 0x0000 (0x0738 - 0x0738)
class ADroppedItemGeneric_FertilizedEgg_RockDrake_C : public ADroppedItemGeneric_FertilizedEgg_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_RockDrake.DroppedItemGeneric_FertilizedEgg_RockDrake_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
