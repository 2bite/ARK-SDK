#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trike_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup
struct ATrike_Character_BP_C_Stop_Ram_Attack_Buildup_Params
{
};

// Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax
struct ATrike_Character_BP_C_GetRammingSpeedMax_Params
{
	float                                              MaxSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam
struct ATrike_Character_BP_C_CanTickStartedRam_Params
{
	bool                                               Tick;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup
struct ATrike_Character_BP_C_Start_Ram_Attack_Buildup_Params
{
};

// Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ATrike_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack
struct ATrike_Character_BP_C_CanStartRamAttack_Params
{
	bool                                               AllowedToRam;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ATrike_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started
struct ATrike_Character_BP_C_Handle_Ram_Started_Params
{
	float*                                             RamBuildupTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RamDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended
struct ATrike_Character_BP_C_Handle_Ram_Ended_Params
{
	bool*                                              HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration
struct ATrike_Character_BP_C_Calculate_Ram_Duration_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack
struct ATrike_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack
struct ATrike_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting
struct ATrike_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
struct ATrike_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack
struct ATrike_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent
struct ATrike_Character_BP_C_GetPawnRootComponent_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         AsPrimitiveComponent;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage
struct ATrike_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.UserConstructionScript
struct ATrike_Character_BP_C_UserConstructionScript_Params
{
};

// Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage
struct ATrike_Character_BP_C_DoReflectDamage_Params
{
	class APawn*                                       DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect
struct ATrike_Character_BP_C_MulticastReflectDamageEffect_Params
{
	struct FName                                       FromBone;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay
struct ATrike_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick
struct ATrike_Character_BP_C_CheckRivalryTick_Params
{
};

// Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent
struct ATrike_Character_BP_C_RamBuildupEndEvent_Params
{
};

// Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed
struct ATrike_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP
struct ATrike_Character_BP_C_ExecuteUbergraph_Trike_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
