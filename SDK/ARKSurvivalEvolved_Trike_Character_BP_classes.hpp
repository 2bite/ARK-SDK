#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trike_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trike_Character_BP.Trike_Character_BP_C
// 0x02EF (0x28A3 - 0x25B4)
class ATrike_Character_BP_C : public ADino_Character_BP_Ramming_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x25B4(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Trike_C*    DinoCharacterStatus_BP_Trike_C1;                          // 0x25B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneDamageAdjuster>                 DamageReflectionBones;                                    // 0x25C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              DamageReflectionTypes;                                    // 0x25D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      ReflectedDamageType;                                      // 0x25E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxReflectedDamage;                                       // 0x25E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x25EC(0x0004) MISSED OFFSET
	class UClass*                                      DamageReflectionEffect;                                   // 0x25F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamDamageMin;                                             // 0x25F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamDamageMax;                                             // 0x25FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RamDamageCurve;                                           // 0x2600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2601(0x0003) MISSED OFFSET
	float                                              RammingSpeedMin;                                          // 0x2604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RammingSpeedMax;                                          // 0x2608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RammingSpeedCurve;                                        // 0x260C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x260D(0x0003) MISSED OFFSET
	float                                              RamStaminaPerSecondDrainMin;                              // 0x2610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamStaminaPerSecondDrainMax;                              // 0x2614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RamStaminaPerSecondDrainCurve;                            // 0x2618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2619(0x0003) MISSED OFFSET
	float                                              RamImpulseMin;                                            // 0x261C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamImpulseMax;                                            // 0x2620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RamImpulseCurve;                                          // 0x2624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2625(0x0003) MISSED OFFSET
	float                                              RamAccelerationTime;                                      // 0x2628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RamAccelerationCurve;                                     // 0x262C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x262D(0x0003) MISSED OFFSET
	float                                              MaxStepHeightDuringRam;                                   // 0x2630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRateDuringRamMin;                                 // 0x2634(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRateDuringRamMax;                                 // 0x2640(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x264C(0x0004) MISSED OFFSET
	class UClass*                                      RivalryBuffClass;                                         // 0x2650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CalculatedRamMaxSpeed;                                    // 0x2658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x265C(0x0004) MISSED OFFSET
	double                                             RamEndTime;                                               // 0x2660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RamHUDStartPercentage;                                    // 0x2668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x266C(0x0004) MISSED OFFSET
	class UAnimMontage*                                RamBuildupInAnim;                                         // 0x2670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RamOutAnim;                                               // 0x2678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RivalryBuffTickInterval;                                  // 0x2680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x2684(0x0004) MISSED OFFSET
	class UAnimMontage*                                RamBuildupOutAnim;                                        // 0x2688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RivalryBuffMassThresholdTrigger;                          // 0x2690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDamageReflection;                                   // 0x2694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedRamBuildUpOutAnim;                                  // 0x2695(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x2696(0x0002) MISSED OFFSET
	class UCurveFloat*                                 BuildupHuffPitch;                                         // 0x2698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BuildupHuffVolume;                                        // 0x26A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BuildupHuffCount;                                         // 0x26A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderLastInitiatedRamTimeSeconds;                         // 0x26AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x26B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x26B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x26B5(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x26B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x26BC(0x0004) MISSED OFFSET
	class APawn*                                       K2Node_CustomEvent_DamageTarget;                          // 0x26C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Damage;                                // 0x26C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_BoneName;                              // 0x26CC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x26D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_GetPawnRootComponent_AsPrimitiveComponent;       // 0x26E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x26E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x26F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x26F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x26F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x26F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x26F7(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x26F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_FromBone;                              // 0x2704(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDirectionVector_ReturnValue;                  // 0x270C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2718(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x2719(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_MakeHitResult_ReturnValue;                       // 0x2720(0x0088) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x27A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0xC];                                       // 0x27B4(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_Conv_VectorToTransform_ReturnValue;              // 0x27C0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x27F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x27F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x2800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2808(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x2814(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActorsClass_ReturnValue;      // 0x2818(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2828(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x282C(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x2830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2838(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2839(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x283A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x5];                                       // 0x283B(0x0005) MISSED OFFSET
	double                                             CallFunc_GetDeactivationTime_ReturnValue;                 // 0x2840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x2850(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x2859(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2860(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x2868(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x2869(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x286A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x5];                                       // 0x286B(0x0005) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2878(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x2888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x2890(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x2894(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2898(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x289C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x289D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x289E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x289F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x28A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x28A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x28A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trike_Character_BP.Trike_Character_BP_C");
		return ptr;
	}


	void Stop_Ram_Attack_Buildup();
	void GetRammingSpeedMax(float* MaxSpeed);
	void CanTickStartedRam(bool* Tick);
	void Start_Ram_Attack_Buildup();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void CanStartRamAttack(bool* AllowedToRam);
	float BP_GetCustomModifier_MaxSpeed();
	void Handle_Ram_Started(float* RamBuildupTime, float* RamDuration);
	void Handle_Ram_Ended(bool* HitSomething);
	void Calculate_Ram_Duration(float* HoldTime, float* Duration);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPHandleOnStopTargeting();
	float BPGetHUDOverrideBuffProgressBarPercent();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void GetPawnRootComponent(class AActor* Target, class UPrimitiveComponent** AsPrimitiveComponent);
	float STATIC_BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void DoReflectDamage(class APawn* DamageTarget, float Damage, const struct FName& BoneName);
	void MulticastReflectDamageEffect(const struct FName& FromBone);
	void ReceiveBeginPlay();
	void CheckRivalryTick();
	void RamBuildupEndEvent();
	void BP_OnJumpPressed();
	void ExecuteUbergraph_Trike_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
