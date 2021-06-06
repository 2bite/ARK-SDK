#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItem_Mutagen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItem_Mutagen.DroppedItem_Mutagen_C
// 0x0058 (0x0760 - 0x0708)
class ADroppedItem_Mutagen_C : public ADroppedItemGeneric_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnManager;                                             // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class UStaticMesh*                                 OverrideMesh;                                             // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   OverrideMaterial;                                         // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerNotificationRadius;                                 // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	class UClass*                                      WarningBuff;                                              // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnedItem;                                              // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x073A(0x0006) MISSED OFFSET
	double                                             SpawnTime;                                                // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MutagenExploererNoteIndex;                                // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUnlockingNote;                                          // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	class AActor*                                      K2Node_Event_Item;                                        // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_Event_ByPC;                                        // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItem_Mutagen.DroppedItem_Mutagen_C");
		return ptr;
	}


	void SpawnItem(class AActor* Manager, class AActor** SpawnedItem);
	void STATIC_UnlockExplorerNote(class UObject* Object);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPOnItemPickedUp(class APlayerController** ByPC, class UPrimalItem** InventoryItem);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void UserConstructionScript();
	void itemPickedUp(class AActor* Item, class APlayerController* ByPC);
	void AdjustableSpawnDelayChanged();
	void ExecuteUbergraph_DroppedItem_Mutagen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
