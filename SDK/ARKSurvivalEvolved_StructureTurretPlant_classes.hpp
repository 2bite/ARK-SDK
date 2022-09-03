#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretPlant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTurretPlant.StructureTurretPlant_C
// 0x001D (0x0FBD - 0x0FA0)
class AStructureTurretPlant_C : public APrimalStructureTurretPlant
{
public:
	class UStaticMeshComponent*                        Collision;                                                // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0FB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTurretsNearby;                                         // 0x0FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTooManyInRangeInactive;                                  // 0x0FBC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretPlant.StructureTurretPlant_C");
		return ptr;
	}


	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void BPPostLoadedFromSaveGame();
	bool BPCanBeActivated();
	void Turret_Check_Hard_Limit();
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretPlant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
