#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_NoPhysics_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysics.DroppedItemGeneric_FertilizedEgg_NoPhysics_C
// 0x0010 (0x0740 - 0x0730)
class ADroppedItemGeneric_FertilizedEgg_NoPhysics_C : public ADroppedItemEgg
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysics.DroppedItemGeneric_FertilizedEgg_NoPhysics_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
