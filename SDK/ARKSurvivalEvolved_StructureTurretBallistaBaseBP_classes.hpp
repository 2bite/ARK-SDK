#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBallistaBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C
// 0x0018 (0x10E0 - 0x10C8)
class AStructureTurretBallistaBaseBP_C : public APrimalStructureTurretBallista
{
public:
	class UPrimalInventoryBP_Ballista_C*               PrimalInventoryBP_Ballista_C1;                            // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C");
		return ptr;
	}


	void GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int* LowAmmoWarningAmount);
	void BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretBallistaBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
