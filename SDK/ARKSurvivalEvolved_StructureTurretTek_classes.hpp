#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretTek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTurretTek.StructureTurretTek_C
// 0x0070 (0x0FB0 - 0x0F40)
class AStructureTurretTek_C : public APrimalStructureTurret
{
public:
	class UPrimalInventoryBP_TurretTek_C*              PrimalInventoryBP_TurretTek_C1;                           // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DinoClassList;                                            // 0x0F60(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                MaxDinoClasses;                                           // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInclusionList;                                         // 0x0F74(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F75(0x0003) MISSED OFFSET
	TArray<class UClass*>                              LastLocalInRangeClasses;                                  // 0x0F78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MinDinoLevel;                                             // 0x0F88(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                MaxDinoLevel;                                             // 0x0F8C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bTooManyInRangeInactive;                                  // 0x0F90(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F91(0x0007) MISSED OFFSET
	double                                             LastTimePrintDebugString;                                 // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x0FA0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretTek.StructureTurretTek_C");
		return ptr;
	}


	bool BPCopyCustomSettingsFromTurret(class APrimalStructureTurret** FromTurret);
	bool BPCanBeActivated();
	void TurretCheckHardLimit();
	void BPPostLoadedFromSaveGame();
	int BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData);
	void STATIC_BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	bool BPCanBeActivatedByPlayer(class AShooterPlayerController** PC);
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed, bool* bForInventoryOnly);
	bool BPTurretPreventsTargeting(class APrimalCharacter** PotentialTarget);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretTek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
