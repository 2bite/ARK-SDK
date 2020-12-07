#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Defender_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Defender_Character_BP.Defender_Character_BP_C
// 0x015A (0x22E2 - 0x2188)
class ADefender_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    DamageEffect;                                             // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    EnergyBladeLeft;                                          // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    EnergyBladeRight;                                         // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HeadFX;                                                   // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_EndTank_C*  DinoCharacterStatus_BP_EndTank_C1;                        // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRolled;                                                 // 0x21B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21B1(0x0003) MISSED OFFSET
	float                                              RollSpeedMultiplier;                                      // 0x21B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasMoving;                                                // 0x21B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInRollTransition;                                       // 0x21B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDropElement;                                        // 0x21BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x21BB(0x0001) MISSED OFFSET
	int                                                ElementDropAmount;                                        // 0x21BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefenderColor;                                            // 0x21C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAttackerPlayer;                                        // 0x21D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x21D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x21D2(0x0006) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x21D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue2;                    // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UTank_AnimBP_C*                              K2Node_DynamicCast_AsTank_AnimBP_C;                       // 0x21E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x21F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x21F1(0x0007) MISSED OFFSET
	class UTank_AnimBP_C*                              K2Node_DynamicCast_AsTank_AnimBP_C2;                      // 0x21F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x2201(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x2208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C* K2Node_DynamicCast_AsDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C;// 0x2210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2218(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2219(0x0007) MISSED OFFSET
	class UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C* K2Node_DynamicCast_AsDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C2;// 0x2220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2228(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2229(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue3;                    // 0x2230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C* K2Node_DynamicCast_AsDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C3;// 0x2238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsActive_ReturnValue;                            // 0x2241(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2242(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x2243(0x0005) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue2;                   // 0x2248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2250(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2254(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x2260(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2261(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x2262(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_Multiply_RotatorFloat_ReturnValue;               // 0x2264(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue3;                   // 0x2270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x2278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x2280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2281(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2284(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2288(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x228C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x2299(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x22A8(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_Event_Damage;                                      // 0x22B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x22BC(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_Event_DamageType;                                  // 0x22C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_Event_InstigatedBy;                                // 0x22C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x22D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x22D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x22E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x22E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Defender_Character_BP.Defender_Character_BP_C");
		return ptr;
	}


	void UpdateNoTargetRollState();
	void BPTimerServer();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UpdateDamageFX();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void OnRep_IsRolled();
	void BPDoAttack(int* AttackIndex);
	bool CheckAgainstRoll(int Selection, class AActor* Target);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void AnimNotify_ActivateEnergy();
	void RollUp();
	void Unroll();
	void SetRolledSettings();
	void SetUnrolledSettings();
	void Multi_UpdateDamageEffects();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ResetAttackerPlayer();
	void ExecuteUbergraph_Defender_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
