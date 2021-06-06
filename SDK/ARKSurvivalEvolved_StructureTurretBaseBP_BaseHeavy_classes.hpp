#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_BaseHeavy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C
// 0x0060 (0x0FA0 - 0x0F40)
class AStructureTurretBaseBP_BaseHeavy_C : public APrimalStructureTurret
{
public:
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTooManyInRangeInactive;                                  // 0x0F58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0F59(0x0007) MISSED OFFSET
	TArray<class UClass*>                              DinoClassList;                                            // 0x0F60(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                MaxDinoClasses;                                           // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInclusionList;                                         // 0x0F74(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F75(0x0003) MISSED OFFSET
	TArray<class UClass*>                              LastLocalInRangeClasses;                                  // 0x0F78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MinDinoLevel;                                             // 0x0F88(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                MaxDinoLevel;                                             // 0x0F8C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x0F90(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C");
		return ptr;
	}


	bool BPCopyCustomSettingsFromTurret(class APrimalStructureTurret** FromTurret);
	bool BPTurretPreventsTargeting(class APrimalCharacter** PotentialTarget);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPCanBeActivated();
	void BPPostLoadedFromSaveGame();
	void TurretCheckHardLimit();
	void STATIC_BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	int BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
