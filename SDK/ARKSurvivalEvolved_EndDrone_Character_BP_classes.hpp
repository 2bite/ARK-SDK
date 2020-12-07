#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDrone_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndDrone_Character_BP.EndDrone_Character_BP_C
// 0x0236 (0x23BE - 0x2188)
class AEndDrone_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Drone_C*    DinoCharacterStatus_BP_Drone_C1;                          // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Fly_SFX;                                                  // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DamageEffect;                                             // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WingThrusterR;                                            // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WingThrusterL;                                            // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MainThruster;                                             // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseInterpPitch;                                           // 0x21B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseInterpRoll;                                            // 0x21B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x21BA(0x0002) MISSED OFFSET
	float                                              CurrentTurnRate;                                          // 0x21BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x21C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentAcceleration;                                      // 0x21CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotorsRight;                                              // 0x21D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotorsLeft;                                               // 0x21D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x21DA(0x0002) MISSED OFFSET
	float                                              DistanceToBoostBackFromTarget;                            // 0x21DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDropElement;                                        // 0x21E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x21E1(0x0003) MISSED OFFSET
	int                                                ElementDropAmount;                                        // 0x21E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PendingDestroy;                                           // 0x21E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x21E9(0x0007) MISSED OFFSET
	class UClass*                                      BuffToAddOnDeath;                                         // 0x21F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x21F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2200(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2204(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item;                                  // 0x2208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2210(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2214(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x2218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2220(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2221(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x2222(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x2223(0x0001) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2224(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue;                       // 0x2228(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2229(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2238(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2244(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x2250(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue;                    // 0x225C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x225D(0x0003) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x2260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UEndBoss_FunctionObject_C*                   K2Node_DynamicCast_AsEndBoss_FunctionObject_C;            // 0x2268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2270(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2271(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_GetEndBossColor_Color;                           // 0x2274(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x2284(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2285(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakColor_R;                                    // 0x2288(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakColor_G;                                    // 0x228C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakColor_B;                                    // 0x2290(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakColor_A;                                    // 0x2294(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_MakeColor_ReturnValue;                           // 0x2298(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x22A8(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class ADroppedItem*                                CallFunc_StaticDropNewItem_ReturnValue;                   // 0x22B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x22C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x22C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_ComponentBoundEvent_NormalImpulse;                 // 0x22D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x22DC(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_Hit;                           // 0x22E0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x2368(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x2374(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x2380(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x238C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x2398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x23A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x23A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x23B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x23B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x23BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x23BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndDrone_Character_BP.EndDrone_Character_BP_C");
		return ptr;
	}


	void BPTimerServer();
	void UpdateAccel(float DeltaTime);
	void Update_Turn_Anims_And_Rate(float DeltaTime);
	void Update_Visual_Roll_and_Pitch(float DeltaTime);
	void UpdateDamageEffect();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void Multi_UpdateDamage();
	void Multi_DeathUpdateParticles();
	void BPTimerNonDedicated();
	void DestroySelf();
	void ServerUpdateVisuals();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_138_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_EndDrone_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
