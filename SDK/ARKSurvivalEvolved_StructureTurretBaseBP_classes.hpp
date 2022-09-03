#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0068 (0x0FA8 - 0x0F40)
class AStructureTurretBaseBP_C : public APrimalStructureTurret
{
public:
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Turret_C*                 PrimalInventoryBP_Turret_C1;                              // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTooManyInRangeInactive;                                  // 0x0F60(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0F61(0x0007) MISSED OFFSET
	TArray<class UClass*>                              DinoClassList;                                            // 0x0F68(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                MaxDinoClasses;                                           // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInclusionList;                                         // 0x0F7C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F7D(0x0003) MISSED OFFSET
	int                                                MinDinoLevel;                                             // 0x0F80(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                MaxDinoLevel;                                             // 0x0F84(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<class UClass*>                              LastLocalInRangeClasses;                                  // 0x0F88(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x0F98(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretBaseBP.StructureTurretBaseBP_C");
		return ptr;
	}


	bool BPCopyCustomSettingsFromTurret(class APrimalStructureTurret** FromTurret);
	bool BPTurretPreventsTargeting(class APrimalCharacter** PotentialTarget);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
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
