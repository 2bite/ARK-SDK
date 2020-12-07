#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Liopleurodon_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Liopleurodon_Character_BP.Liopleurodon_Character_BP_C
// 0x0150 (0x22D8 - 0x2188)
class ALiopleurodon_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    MagicTrail;                                               // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MagicParticle;                                            // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Liopleurodon_C* DinoCharacterStatus_BP_Liopleurodon_C1;                   // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisappearTimeline_CurrentTime_CBC0227C4308D72C327964995A7FC5EB;// 0x21A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DisappearTimeline__Direction_CBC0227C4308D72C327964995A7FC5EB;// 0x21A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DisappearTimeline;                                        // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MagicBuffClass;                                           // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TameDuration;                                             // 0x21B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x21BC(0x0004) MISSED OFFSET
	double                                             TameTime;                                                 // 0x21C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TimeDamageScale;                                          // 0x21C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MagicBuffRadius;                                          // 0x21CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreventDisappearing;                                      // 0x21D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x21D1(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x21D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x21D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_Damage;                                      // 0x21DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UDamageType*                                 K2Node_Event_DamageType;                                  // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_Event_InstigatedBy;                                // 0x21E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x21F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsShooterCharacter_ReturnValue;                  // 0x21F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x21F9(0x0003) MISSED OFFSET
	float                                              CallFunc_GetTimelineLength_ReturnValue;                   // 0x21FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x2201(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2202(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2204(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x2211(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2212(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x2213(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2214(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2228(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2240(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x224C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x2250(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2260(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2264(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2270(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2271(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x2278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x2281(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2290(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2291(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x2292(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2294(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue;                  // 0x2298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x22A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x22AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Square_ReturnValue;                              // 0x22B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x22B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x22B5(0x0003) MISSED OFFSET
	float                                              CallFunc_FMax_ReturnValue;                                // 0x22B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x22BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetHealthPercentage_ReturnValue;                 // 0x22C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x22CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x22CD(0x0003) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x22D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Liopleurodon_Character_BP.Liopleurodon_Character_BP_C");
		return ptr;
	}


	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void BPTimerServer();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void Find_Remaining_Tame_Time(float* TimeLeft);
	void BPSetupTamed(bool* bWasJustTamed);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void UserConstructionScript();
	void DisappearTimeline__FinishedFunc();
	void DisappearTimeline__UpdateFunc();
	void StartDisappear();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void AnimNotify_SpawnSpinEffect();
	void RefreshMagicBuffTimers();
	void ReceiveBeginPlay();
	void OnDied_ClearParticles(class APrimalCharacter* DiedCharacter);
	void ExecuteUbergraph_Liopleurodon_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
