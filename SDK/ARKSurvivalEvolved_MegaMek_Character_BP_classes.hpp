#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaMek_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaMek_Character_BP.MegaMek_Character_BP_C
// 0x0112 (0x34CA - 0x33B8)
class AMegaMek_Character_BP_C : public AMek_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_MegaMek_C*  DinoCharacterStatus_BP_MegaMek_C1;                        // 0x33B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MegaMekBlinkIn_Alpha_AB1990A54557268CFE66879CAF045834;    // 0x33C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MegaMekBlinkIn__Direction_AB1990A54557268CFE66879CAF045834;// 0x33C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x33C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MegaMekBlinkIn;                                           // 0x33C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TakeDamageMaxPercentHealth;                               // 0x33D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x33D4(0x0004) MISSED OFFSET
	class UAnimMontage*                                StunnedAnim;                                              // 0x33D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PunchCooldownTime;                                        // 0x33E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x33E4(0x0004) MISSED OFFSET
	double                                             LastPunchNetworkTime;                                     // 0x33E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceKill;                                                // 0x33F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x33F1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MegaMekDynamicMat_Torso;                                  // 0x33F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MegaMekDynamicMat_Legs;                                   // 0x3400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MegaMekDynamicMat_Arms;                                   // 0x3408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastKingKaijuFailsafeCheck;                               // 0x3410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextKingKaijuFailsafeInterval;                            // 0x3418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FailsafeIntervalMin;                                      // 0x341C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FailsafeIntervalMax;                                      // 0x3420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KingKaijuArenaDiameter;                                   // 0x3424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x3428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x3429(0x0003) MISSED OFFSET
	float                                              K2Node_Event_StunDuration;                                // 0x342C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x3430(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x3434(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x3435(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x3436(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x3438(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_Value;                                       // 0x343C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x343D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x343E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x343F(0x0001) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item;                                  // 0x3440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item2;                                 // 0x3448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x3450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue2;      // 0x3458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item3;                                 // 0x3460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x3468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x3469(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue3;      // 0x3470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x3478(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x3479(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Value;                                 // 0x347C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Forward;                               // 0x3480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x3481(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x3488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x3490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue;             // 0x3498(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x349C(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x34A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x34A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x34A9(0x0007) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x34B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x34B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x34B9(0x0007) MISSED OFFSET
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x34C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x34C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x34C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaMek_Character_BP.MegaMek_Character_BP_C");
		return ptr;
	}


	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void ReceiveTick(float* DeltaSeconds);
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	float BPGetHUDOverrideBuffProgressBarPercent();
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void SetMegaMekBlinkProgress(float Value, bool Forward);
	void GetTurnInPlaceSpeed(float* DefaultSpeed, float* newSpeed);
	void AllowedToAutoRepair(bool* Allowed, float* CooldownTimeRemaining);
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void MegaMekBlinkIn__FinishedFunc();
	void MegaMekBlinkIn__UpdateFunc();
	void SetStunned(float StunDuration);
	void SetForceKill(bool Value);
	void ReceiveBeginPlay();
	void MultiReplayIntro();
	void MultiSetBlinkProgress(float Value, bool Forward);
	void ClientNotifySelfDestruct();
	void StartSelfDestructNow();
	void StartSelfDestruct();
	void ExecuteUbergraph_MegaMek_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
