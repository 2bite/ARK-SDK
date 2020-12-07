#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0028 (0x1068 - 0x1040)
class AStructureTurretCatapult_C : public APrimalStructureTurretBallista
{
public:
	class UPrimalInventoryBP_Catapult_C*               PrimalInventoryBP_Catapult_C1;                            // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CatapultMesh;                                             // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x1058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x1060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretCatapult.StructureTurretCatapult_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureTurretCatapult(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
