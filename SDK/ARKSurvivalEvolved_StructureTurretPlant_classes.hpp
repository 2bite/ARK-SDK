#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x001D (0x0F65 - 0x0F48)
class AStructureTurretPlant_C : public APrimalStructureTurretPlant
{
public:
	class UStaticMeshComponent*                        Collision;                                                // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTurretsNearby;                                         // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTooManyInRangeInactive;                                  // 0x0F64(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretPlant.StructureTurretPlant_C");
		return ptr;
	}


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
