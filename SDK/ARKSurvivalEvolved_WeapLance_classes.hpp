#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapLance_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapLance.WeapLance_C
// 0x00D0 (0x0E58 - 0x0D88)
class AWeapLance_C : public AShooterWeapon_Melee
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonMesh;                                          // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAttacking;                                             // 0x0D98(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsAttacking;                                          // 0x0D99(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D9A(0x0006) MISSED OFFSET
	TArray<struct FVector>                             PreviousTracePoints;                                      // 0x0DA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              HurtList;                                                 // 0x0DB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	double                                             ClearHurtListTime;                                        // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCostPerSecondWantsAttacking;                       // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCostPerSecondIsAttacking;                          // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StartAttackingSound;                                      // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StopAttackingSound;                                       // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurabilityCostForDismount;                                // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	double                                             LastCostDurabilityTime;                                   // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CostDurabilityInterval;                                   // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CostDurabilityAmountPerInterval;                          // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0DF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0DFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0DFB(0x0005) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x0E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyOwned_ReturnValue;                      // 0x0E18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0E19(0x0007) MISSED OFFSET
	struct FWeaponAnim                                 K2Node_MakeStruct_WeaponAnim;                             // 0x0E20(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x0E30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0E34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0E35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x0E36(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0E37(0x0001) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x0E38(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0E48(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapLance.WeapLance_C");
		return ptr;
	}


	void STATIC_DoTrace(const struct FVector& Start, const struct FVector& End);
	void DamageActor(class AActor* Victim, struct FHitResult* HitInfo);
	void DoTraceAttacks();
	bool BPForceTPVTargetingAnimation();
	void ReceiveTick(float* DeltaSeconds);
	void BPHandleMeleeAttack();
	void BPStopMeleeAttack();
	void UserConstructionScript();
	void DoPlayStartAttackingSound();
	void DoPlayStopAttackingSound();
	void DidDismountHit();
	void ExecuteUbergraph_WeapLance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
