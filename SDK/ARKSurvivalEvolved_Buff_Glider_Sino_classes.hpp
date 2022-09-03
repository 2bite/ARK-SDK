#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Glider_Sino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Glider_Sino.Buff_Glider_Sino_C
// 0x0157 (0x0F1C - 0x0DC5)
class ABuff_Glider_Sino_C : public ABuff_Glider_C
{
public:
	TEnumAsByte<E_SinoMovementState>                   SinoMovementState;                                        // 0x0DC5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0DC6(0x0002) MISSED OFFSET
	TArray<class UTexture2D*>                          MovementStateIcons;                                       // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              MovementStateNames;                                       // 0x0DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bJumpPressed;                                             // 0x0DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DE9(0x0003) MISSED OFFSET
	float                                              NonGlideAirControl;                                       // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachutingVelocity;                                      // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlappingVelocity;                                         // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SubmergedFlappingSpeedMultiplier;                         // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonGlideVelocityInterpSpeed;                              // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SubmergedFlappingVelocityInterpSpeed;                     // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToDoubleJump;                                       // 0x0E04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E05(0x0003) MISSED OFFSET
	double                                             ClientLastJumpTime;                                       // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeReleaseCrouchProneForParachute;                       // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E14(0x0004) MISSED OFFSET
	double                                             ClientLastCrouchProneToggleTime;                          // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoubleJumpFlappingVelocity;                               // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDoubleJumping;                                         // 0x0E24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E25(0x0003) MISSED OFFSET
	float                                              DoubleJumpInterval;                                       // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoubleJumpStaminaCost;                                    // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DoubleJumpMontage;                                        // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastClientStatsUpdateTime;                                // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SinoMountIndex;                                           // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterDamageToPrevParaFlap;                            // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastNoFlySPZCheckTime;                                    // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInNoFlySPZ;                                            // 0x0E50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0E51(0x0007) MISSED OFFSET
	class FString                                      BiomeBuffToPreventFlappingString;                         // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastMountIndexChangeTime;                                 // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSinoMovementStopType;                                 // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bToggleCrouchPressed;                                     // 0x0E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0E79(0x0003) MISSED OFFSET
	float                                              MinGlideSpeedRatioForTrailVis;                            // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonGlideVelocityClamp;                                    // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Set;                                   // 0x0E84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0E85(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0E86(0x0002) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0E90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_SinoMovementState>                   K2Node_CustomEvent_NewState;                              // 0x0E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0E99(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0EA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_DoubleDouble_ReturnValue;               // 0x0EA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x0EA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0EAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsDoubleJump;                          // 0x0EAB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0EAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetCanDoubleJump_CanDoubleJump;                  // 0x0EAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0EAE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseSinoMovement_CanUse;                       // 0x0EAF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseSinoMovement_CanUse2;                      // 0x0EB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsGliderActive_result;                           // 0x0EB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x0EB2(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseSinoMovement_CanUse3;                      // 0x0EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue2;                        // 0x0EC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0EC2(0x0002) MISSED OFFSET
	float                                              CallFunc_GetSinoStaminaVals_Current;                      // 0x0EC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSinoStaminaVals_Max;                          // 0x0EC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0ECC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0ECD(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Stam;                                  // 0x0ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Food;                                  // 0x0ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0EE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0EE1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetSinoStaminaVals_Current2;                     // 0x0EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSinoStaminaVals_Max2;                         // 0x0EE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0EED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0EEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0EEF(0x0001) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseSinoMovement_CanUse4;                      // 0x0F00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue3;                        // 0x0F01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x0F02(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x0F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSinoStaminaVals_Current3;                     // 0x0F10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSinoStaminaVals_Max3;                         // 0x0F14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue4;                        // 0x0F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x0F19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsGliderActive_result2;                          // 0x0F1A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseSinoMovement_CanUse5;                      // 0x0F1B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Glider_Sino.Buff_Glider_Sino_C");
		return ptr;
	}


	void GetSinoFoodVals(float* current, float* Max);
	void UpdateGliderSFX();
	void UpdateVelocityForVFX();
	void InitGlider();
	float BP_ModifyCharacterFOV(float* inFOV);
	void DoInjuredJumpIfRequired();
	void CheckIsInNoFlySPZ(bool* IsInNonFlightArea);
	void ClearIsGlideFallingFromDamage();
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void AttachWingVFX();
	void PlayInsufficientStaminaMessage();
	void GetGliderInactiveMeshTargetRotVals(struct FRotator* Rot, float* InterpSpeed);
	void GetCanDoubleJump(bool* CanDoubleJump);
	void ClearIsDoubleJumping();
	void STATIC_AttemptSetIsDoubleJumping(bool isDoubleJumping);
	void GetGliderMesh(bool* foundMesh, class USkeletalMeshComponent** meshRef);
	void ClearOwnerIgnoreWater();
	void GetIsCloseToWaterSurface(bool* IsClose, bool* IsSwimming);
	void STATIC_BuffTickServer(float* DeltaTime);
	void Can_Use_Glider(bool* isToStart, bool* Result);
	void ExCanUseSinoMovementState(TEnumAsByte<E_SinoMovementState> MovementState, bool* CanEnter);
	void UpdateGliderByState_ServerAndClient();
	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	bool HideBuffFromHUD();
	void NetSetCurrentSinoState(TEnumAsByte<E_SinoMovementState> NewState);
	void NetSetCurrentGliderState(TEnumAsByte<E_GliderStates>* NewState);
	void CanUseSinoMovement(TEnumAsByte<E_SinoMovementState> MovementType, bool* CanUse);
	void BuffTickClient(float* DeltaTime);
	void GetSinoStaminaVals(float* current, float* Max);
	void UpdateBuffDescription();
	void RefreshMountedSinoMovementState();
	void OnRep_SinoMovementState();
	void UserConstructionScript();
	void InpActEvt_Jump_K2Node_InputActionEvent_422();
	void InpActEvt_Jump_K2Node_InputActionEvent_421();
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90();
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89();
	void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420();
	void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419();
	void InpActEvt_Crouch_K2Node_InputActionEvent_418();
	void InpActEvt_Prone_K2Node_InputActionEvent_417();
	void Server_RequestChangeSinoMovementState(TEnumAsByte<E_SinoMovementState> NewState);
	void OnPlayerJump_Pressed();
	void OnPlayerJump_Released();
	void BPDeactivated(class AActor** ForInstigator);
	void Server_AttemptSetDoubleJump(bool IsDoubleJump);
	void Client_UpdateSinoStatVals(float Stam, float food);
	void OnPlayerToggleCrouch_Released();
	void OnPlayerToggleCrouch_Pressed();
	void Client_SetIsGlideFallingFromDam(bool Set);
	void ExecuteUbergraph_Buff_Glider_Sino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
