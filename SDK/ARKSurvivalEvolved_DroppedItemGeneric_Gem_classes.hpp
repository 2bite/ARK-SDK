#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_Gem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C
// 0x0020 (0x0720 - 0x0700)
class ADroppedItemGeneric_Gem_C : public ADroppedItemGeneric_C
{
public:
	class UStaticMesh*                                 NewMesh;                                                  // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewMeshScale;                                             // 0x0708(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     initialImpulse;                                           // 0x0714(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C");
		return ptr;
	}


	void BPPostInitializeComponents();
	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_Gem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
