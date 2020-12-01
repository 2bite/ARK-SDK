#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0019 (0x0ED9 - 0x0EC0)
class AStructureTurretBaseBP_BaseHeavy_C : public APrimalStructureTurret
{
public:
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTooManyInRangeInactive;                                  // 0x0ED8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C");
		return ptr;
	}


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