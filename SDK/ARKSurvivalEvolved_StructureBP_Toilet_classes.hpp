#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Toilet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_Toilet.StructureBP_Toilet_C
// 0x003F (0x0F30 - 0x0EF1)
class AStructureBP_Toilet_C : public AStructureSeatingBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0EF1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        PoopMesh;                                                 // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Toilet_C*                 PrimalInventoryBP_Toilet_C1;                              // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WaterPlane;                                               // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPoop;                                                 // 0x0F10(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0F11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0F12(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0F13(0x0005) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x0F18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x0F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0F28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_Toilet.StructureBP_Toilet_C");
		return ptr;
	}


	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPHandleSitterPoop(class AShooterCharacter** ForSitter);
	void BPUnstasis();
	void ReceiveBeginPlay();
	void OnRep_bHasPoop();
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void BPContainerActivated();
	void BPContainerDeactivated();
	void UserConstructionScript();
	void NetFlushedToilet();
	void ExecuteUbergraph_StructureBP_Toilet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
