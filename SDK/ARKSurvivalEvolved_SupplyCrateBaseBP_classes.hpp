#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateBaseBP.SupplyCrateBaseBP_C
// 0x01A1 (0x1009 - 0x0E68)
class ASupplyCrateBaseBP_C : public APrimalStructureItemContainer_SupplyCrate
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_SupplyCrate_C*            PrimalInventoryBP_SupplyCrate_C1;                         // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeRef;                                               // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitialLoc;                                               // 0x0E80(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    InitialRot;                                               // 0x0E8C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnInAttachedParticle;                                  // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFinishedSpawn;                                           // 0x0EA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0EA1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    SpawnInAttachedPSC;                                       // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SpawnInLocationEmitterInstance;                           // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpawnInLocationEffect;                                    // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnInMatinee;                                           // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnInMatineeLength;                                     // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnInAttachedParticleScale;                             // 0x0ECC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHiddenStuff;                                             // 0x0ED8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0ED9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x0EDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0EDB(0x0005) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_Conv_VectorToTransform_ReturnValue;              // 0x0EE0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x0F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMatineeActor1_Blueprint_C*                  CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0F18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0F20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0F2C(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x0F30(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue2;        // 0x0F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0F68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0F74(0x0004) MISSED OFFSET
	class ANote_Blueprint_MatineeTest_C*               CallFunc_FinishSpawningActor_ReturnValue2;                // 0x0F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue2;                      // 0x0F80(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_AddComponent_ReturnValue;                        // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue3;        // 0x0FB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue3;                // 0x0FC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0FC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0FC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0FCA(0x0002) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0FCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0FD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x0FD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x0FE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0FE1(0x0007) MISSED OFFSET
	class UActorComponent*                             CallFunc_GetComponentByClass_ReturnValue;                 // 0x0FE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UChildActorComponent*                        K2Node_DynamicCast_AsChildActorComponent;                 // 0x0FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0FF9(0x0007) MISSED OFFSET
	class AEmitter*                                    K2Node_DynamicCast_AsEmitter;                             // 0x1000(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateBaseBP.SupplyCrateBaseBP_C");
		return ptr;
	}


	void OnRep_bFinishedSpawn();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnSpawningIn();
	void OnCompletedSpawning();
	void DestroyEmitter();
	void CheckHiding();
	void ExecuteUbergraph_SupplyCrateBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
