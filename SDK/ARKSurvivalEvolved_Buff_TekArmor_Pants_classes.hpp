#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Pants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_Pants.Buff_TekArmor_Pants_C
// 0x01CF (0x0CC9 - 0x0AFA)
class ABuff_TekArmor_Pants_C : public ABuff_TekArmor_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0AFA(0x0006) MISSED OFFSET
	class UPrimalItemArmor_TekPants_C*                 Ref_TekPants;                                             // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTEKRunCharging;                                        // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B09(0x0003) MISSED OFFSET
	float                                              CurrentPlayerRunSpeed;                                    // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedTexRunVelocity;                                 // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeedMult_AdditionRate;                                // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TEKRunDamageType;                                         // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TEKRunFoliageDamageType;                                  // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunBaseDamage;                                         // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunDamageRadius;                                       // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunImpulseStrength;                                    // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunImpulseWeightLimit;                                 // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunningDamageUpdateRate;                               // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunningSecondsPerElementConsumed;                      // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunningHitPawnRefreshRate;                             // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalRunSpeedMult;                                   // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ForwardLocRelativeToSpeed;                                // 0x0B48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TekRunDamage_current;                                     // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    ChargeHitPawns;                                           // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalStructure*>                    ChargeHitStructures;                                      // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bDebug;                                                   // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B79(0x0003) MISSED OFFSET
	float                                              StructureBoxTraceZModifier;                               // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PawnBoxTraceModifier;                                     // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                damageStructureElementCost;                               // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WallUnbrokenImpactParticle;                               // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  WallUnbrokenImpactSound;                                  // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEKRunningPostProcessIntensityScale;                      // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallUnbrokenImpactDamage;                                 // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallUnbrokenBounceImpulse;                                // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeedMult_Base;                                        // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToCharge;                                           // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	float                                              currentPlayerVelocityLength;                              // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousTekRunDir;                                        // 0x0BB0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventVelocityConservationThisFrame;                    // 0x0BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0BBD(0x0003) MISSED OFFSET
	struct FRotator                                    interpControlRotation_target;                             // 0x0BC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interpControlRotation_speed;                              // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              accumulatedRunningTimeForElementCost;                     // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              runningTimeForElementCost;                                // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                damageEnemyElementCost;                                   // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                runningElementCost;                                       // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitPawn_Particle;                                         // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HitPawn_Sound;                                            // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     lastStructureImpactNormal;                                // 0x0BF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DustParticleIntensity;                                    // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDustTrailActive;                                       // 0x0C00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAltFirePressed;                                          // 0x0C01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0C02(0x0002) MISSED OFFSET
	float                                              TekRunServerTickInterval;                                 // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TekRunningState>                     CurrentTekRunState;                                       // 0x0C08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TekRunningState>                     PreviousTekRunState;                                      // 0x0C09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0C0A(0x0002) MISSED OFFSET
	float                                              requiredTekRunMaxVelocityRatio;                           // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_WaterRun_TPV;                                        // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              runOnWaterImpulse;                                        // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0C1C(0x0004) MISSED OFFSET
	class APhysicsVolume*                              Ref_AboveWaterVolume;                                     // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              aboveWaterClientTickInterval;                             // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0C2C(0x0004) MISSED OFFSET
	double                                             lastCheckForWaterTime;                                    // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waterCheckInterval;                                       // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRightFoot;                                               // 0x0C3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0C3D(0x0003) MISSED OFFSET
	float                                              footSplashOffset;                                         // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0C44(0x0004) MISSED OFFSET
	double                                             lastFootSplashTime;                                       // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              footSplashInterval;                                       // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasRunningOnWater;                                       // 0x0C54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0C55(0x0003) MISSED OFFSET
	class UAnimMontage*                                Ref_WaterRun_FPV;                                         // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waterRunDownCheckDistance;                                // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanRunOnWater;                                           // 0x0C64(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowRunningOnWater;                                     // 0x0C65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0C66(0x0002) MISSED OFFSET
	float                                              NewVar_1;                                                 // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSpeedModifierScale;                                   // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TekRunningWaterSubmergedThreshold;                        // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RestoreFullTekSpeedVelocityRatio;                         // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSonicBoom;                                         // 0x0C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTooSlowForTekRun;                                      // 0x0C79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x0C7A(0x0006) MISSED OFFSET
	double                                             lastTooSlowForTekRunStartTime;                            // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeAfterTooSlowToCancelTekRun;                           // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowJetpackStartTekRun;                                 // 0x0C8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0C8D(0x0003) MISSED OFFSET
	float                                              JetpackThrustImpulse;                                     // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              sonicBoomTekVelocityRatio;                                // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SonicBoomRequiredVelocityForwardDot;                      // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                startRunningElementCost;                                  // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waterRunRequiredForwardVelocityDot;                       // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TekRunningState>                     K2Node_CustomEvent_newRunState;                           // 0x0CA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0CA5(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_newModifier;                           // 0x0CA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanStartTekRun_result;                           // 0x0CAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreGlovesEquippedAndActive_result;               // 0x0CAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x0CAE(0x0002) MISSED OFFSET
	class ABuff_TekArmor_Gloves_C*                     CallFunc_AreGlovesEquippedAndActive_glovesRef;            // 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayerGrappled_result;                         // 0x0CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0CB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_PlayerHasFistsEquipped_result;                   // 0x0CBA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x5];                                       // 0x0CBB(0x0005) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetRef_OwningPlayer_player;                      // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0CC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Pants.Buff_TekArmor_Pants_C");
		return ptr;
	}


	void InstigatorDie();
	void IsPlayerUsingJetpack(bool* Result);
	void SetPlayerIgnoreSpeedModifiers(bool newIgnore);
	void PlayerHasFistsEquipped(bool* Result);
	void IsPlayerGrappled(bool* Result);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void GetPlayerMoveSpeedModifier(float* Result);
	void OnRep_bCanRunOnWater();
	void SetRunningOnWater(bool IsRunning);
	void OnRep_CurrentTekRunState();
	void AreGlovesEquippedAndActive(bool* Result, class ABuff_TekArmor_Gloves_C** glovesRef);
	void Get_Player_Max_Tek_Run_Velocity(float* MaxSpeed);
	float GetBuffPostprocessIntensity();
	void CanStartTekRun(bool* Result);
	void NetSetRunningSpeedModifier(float newModifier);
	void STATIC_RunDamageActor(class AActor* HitActor, bool* DidRebound);
	void NetSetTekRunningState(TEnumAsByte<E_TekRunningState> NewState);
	void SetDustParticlesActive(bool newActive);
	void UpdateLocalVarsByState(TEnumAsByte<E_TekRunningState> NewState);
	void LocalSetTekRunningState(TEnumAsByte<E_TekRunningState> NewState);
	void BuffTickServer(float* DeltaTime);
	void InitGloves();
	void ForceWalkForward();
	void UpdatePlayerControlRotation(float DeltaSeconds);
	void BPDeactivated(class AActor** ForInstigator);
	void GetPlayerTekRunVelocityRatio(float* Ratio);
	void Get_Player_MaxRunVelocity(float* MaxSpeed);
	void MaintainFullSpeed(bool bUsePlayerForward, const struct FVector& OverrideDirection, bool* wasMaintained);
	void GetPlayerMaxTekRunVelocity_Pure(float* MaxSpeed);
	void StoreCurrentVelocityLength();
	void SetChargeStartVariables();
	void Get_Default_Player_Run_Speed_Mult(float* SpeedMult);
	void Tick_Update_Tek_Run(float DeltaSeconds);
	void RedirectPlayerVelocity(const struct FVector& newForward);
	void STATIC_BuffTickClient(float* DeltaTime);
	void SetPreventEquipWeapons(bool prevent);
	struct FVector CalculateDeflectingImpulse(class AActor* TargetCharacter, float Impulse);
	void SetPlayerRunSpeed(float newSpeed);
	void ClearHitActors();
	void STATIC_Trace_and_Damage_ForwardPawns();
	void GetModifiedForward(float forwardScale, const struct FVector& AdditionalOffset, struct FVector* newForward);
	void STATIC_Trace_And_Damage_Forward_StationaryActors();
	void CalculateForwardRelativeToSpeed(float DeltaSeconds);
	void CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult);
	void SetCastedArmorPieceRef();
	void UserConstructionScript();
	void InpActEvt_AltFire_K2Node_InputActionEvent_79();
	void InpActEvt_AltFire_K2Node_InputActionEvent_78();
	void Server_SetTekRunningState(TEnumAsByte<E_TekRunningState> newRunState);
	void Client_SyncRunModifier(float newModifier);
	void Pants_AltFirePressed();
	void Pants_AltFireReleased();
	void ExecuteUbergraph_Buff_TekArmor_Pants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
