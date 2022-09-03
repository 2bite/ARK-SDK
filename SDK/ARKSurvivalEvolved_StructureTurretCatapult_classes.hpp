#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretCatapult_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTurretCatapult.StructureTurretCatapult_C
// 0x0028 (0x10F0 - 0x10C8)
class AStructureTurretCatapult_C : public APrimalStructureTurretBallista
{
public:
	class UPrimalInventoryBP_Catapult_C*               PrimalInventoryBP_Catapult_C1;                            // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CatapultMesh;                                             // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretCatapult.StructureTurretCatapult_C");
		return ptr;
	}


	void GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int* LowAmmoWarningAmount);
	void BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretCatapult(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
