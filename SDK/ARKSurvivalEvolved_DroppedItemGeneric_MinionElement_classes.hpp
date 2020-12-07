#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_MinionElement_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C
// 0x001C (0x071C - 0x0700)
class ADroppedItemGeneric_MinionElement_C : public ADroppedItemGeneric_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 NewMesh;                                                  // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewMeshScale;                                             // 0x0710(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_MinionElement.DroppedItemGeneric_MinionElement_C");
		return ptr;
	}


	void BPPostInitializeComponents();
	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_MinionElement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
