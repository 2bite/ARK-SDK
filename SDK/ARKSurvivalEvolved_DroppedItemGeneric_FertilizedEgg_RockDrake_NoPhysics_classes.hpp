#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics.DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C
// 0x0000 (0x0738 - 0x0738)
class ADroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C : public ADroppedItemGeneric_FertilizedEgg_NoPhysics_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics.DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_RockDrake_NoPhysics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
