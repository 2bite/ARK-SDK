#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_NoPhysicsWyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsWyvern.DroppedItemGeneric_FertilizedEgg_NoPhysicsWyvern_C
// 0x0000 (0x0730 - 0x0730)
class ADroppedItemGeneric_FertilizedEgg_NoPhysicsWyvern_C : public ADroppedItemGeneric_FertilizedEgg_NoPhysics_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsWyvern.DroppedItemGeneric_FertilizedEgg_NoPhysicsWyvern_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsWyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
