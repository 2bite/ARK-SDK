#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mammoth_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mammoth_Character_BP.Mammoth_Character_BP_C
// 0x01B0 (0x2438 - 0x2288)
class AMammoth_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Mammoth_C*  DinoCharacterStatus_BP_Mammoth_C1;                        // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SwimmingAttackIndex;                                      // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrumpetDelay;                                             // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RoarOverlapSocket;                                        // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarRadius;                                               // 0x22A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Roar_DotProductThreshold;                                 // 0x22A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RoarBuffClass;                                            // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PreventRoarBuff;                                          // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrumpetWeightThreshold;                                   // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x22BC(0x0004) MISSED OFFSET
	class UClass*                                      DrumWeapon;                                               // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StompAttackIndex;                                         // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GrabTravelIndex;                                          // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGrabTracing;                                           // 0x22D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x22D1(0x0007) MISSED OFFSET
	class APrimalCharacter*                            CharToGrabTest;                                           // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharToGrabTestHitLoc;                                     // 0x22E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabTraceRadius;                                          // 0x22EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GrabSocket;                                               // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GrabOrigin;                                               // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            LastThrownCharacter;                                      // 0x2300(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrowVelocity;                                            // 0x2308(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowDrumRadius;                                           // 0x2314(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2315(0x0003) MISSED OFFSET
	int                                                CarriedStompIndex;                                        // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	class UClass*                                      PassengerBuff;                                            // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseCameraOffset;                                          // 0x2328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2329(0x0003) MISSED OFFSET
	struct FVector                                     TPVCameraThrowOffset;                                     // 0x232C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowAimLimit;                                            // 0x2338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceLength;                                              // 0x233C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               throwTraceHit;                                            // 0x2340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2341(0x0003) MISSED OFFSET
	struct FVector                                     ThrowTraceLoc;                                            // 0x2344(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrownCharactersApexTravelTime;                           // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              throwUpStrengthMax;                                       // 0x2354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              throwUpStrengthMin;                                       // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowFwdStrengthMax;                                      // 0x235C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    TrumpetVFX;                                               // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrunkHasWater;                                            // 0x2368(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2369(0x0007) MISSED OFFSET
	TArray<struct FName>                               FlameBuffTags;                                            // 0x2370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             WaterDrops;                                               // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2389(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x238A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x238B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x238C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x238D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RetrieveAnyGrabbableCharacter_FoundCharacter;    // 0x238E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x238F(0x0001) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2394(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2399(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x239C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_TraceLoc;                              // 0x23A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_TraceHit;                              // 0x23AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x23AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x23AE(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x23B0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalCharacter*                            CallFunc_GetPassengerPerSeat_ReturnValue;                 // 0x23C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APawn*>                               CallFunc_GetTrueBasedPawns_ReturnValue;                   // 0x23C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x23D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x23DC(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_Array_Get_Item;                                  // 0x23E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x23E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x23E9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x23F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x23F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsInWater_ReturnValue;                           // 0x23F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x23FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x23FB(0x0001) MISSED OFFSET
	struct FName                                       K2Node_Select_ReturnValue;                                // 0x23FC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x2404(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2405(0x0003) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select_ReturnValue2;                               // 0x2408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x2410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x2411(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x2420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty;// 0x2428(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mammoth_Character_BP.Mammoth_Character_BP_C");
		return ptr;
	}


	bool IsInWater();
	void WaterSprayCharacter(class APrimalCharacter* Character);
	void RefillWaterStat(class UPrimalCharacterStatusComponent* StatusComp);
	bool BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos);
	void ThrottledTick();
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void ShortestAngleDifference(float AngleCurrent, float AngleTarget, float* Difference);
	void GetClampedLookDir(bool LimitLowerPitch, struct FVector* Dir);
	void STATIC_ThrowTrace();
	struct FVector GetThrowVelocity(class APrimalCharacter* ThrownCharacter);
	void BPTimerServer();
	bool canThrow();
	void BPTimerNonDedicated();
	void BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void BPNotifyToggleHUD(bool* bHudHidden);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void ClearThrow();
	void LaunchGrabbedCharacter();
	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void GrabFoundCharacter();
	void FindProperGrabTarget(class APrimalCharacter* TestChar, class APrimalCharacter** TargetChar);
	void CheckProperCanCarry(class APrimalCharacter* TestActor, bool* CanCarry);
	bool IsBetterGrabTarget(class AActor* NewTarget);
	struct FVector GetGrabLocation();
	void STATIC_RetrieveAnyGrabbableCharacter(bool* FoundCharacter);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	bool BPOnStartJump();
	void OnPassengerWeaponChanged(class AShooterWeapon* newWeapon);
	void BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void AllowTrumpetDebuff(class APrimalCharacter* Target, bool* Result);
	void STATIC_DoTrumpetAttack();
	void BPDoAttack(int* AttackIndex);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UserConstructionScript();
	void AnimNotify_EndGrab();
	void TraceGrab();
	void AnimNotify_StartGrab();
	void AnimNotify_MidGrab();
	void AnimNotify_EndGrabAttack();
	void AnimNotify_ReleaseGrab();
	void ClientGrabNotify();
	void ClientThrowNotify();
	void ServerTraceHit(const struct FVector& TraceLoc, bool TraceHit);
	void AnimNotify_TrumpetVFX();
	void AnimNotify_StopTrumpetVFX();
	void AnimNotify_TrunkSplash();
	void ExecuteUbergraph_Mammoth_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
