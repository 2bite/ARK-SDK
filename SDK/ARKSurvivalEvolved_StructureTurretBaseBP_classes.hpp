#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTurretBaseBP.StructureTurretBaseBP_C
// 0x0021 (0x0F09 - 0x0EE8)
class AStructureTurretBaseBP_C : public APrimalStructureTurret
{
public:
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Turret_C*                 PrimalInventoryBP_Turret_C1;                              // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTooManyInRangeInactive;                                  // 0x0F08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretBaseBP.StructureTurretBaseBP_C");
		return ptr;
	}


	void BPPostLoadedFromSaveGame();
	void TurretCheckHardLimit();
	bool BPUseCountStructureInRange();
	bool BPCanBeActivated();
	int BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData);
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
