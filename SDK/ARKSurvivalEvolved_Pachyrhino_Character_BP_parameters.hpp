#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pachyrhino_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintAdjustOutputDamage
struct APachyrhino_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.OnDecidedToFlee
struct APachyrhino_Character_BP_C_OnDecidedToFlee_Params
{
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintCanAttack
struct APachyrhino_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintCanRiderAttack
struct APachyrhino_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.UserConstructionScript
struct APachyrhino_Character_BP_C_UserConstructionScript_Params
{
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct APachyrhino_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.BPDoAttack
struct APachyrhino_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.DelayedAttack
struct APachyrhino_Character_BP_C_DelayedAttack_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pachyrhino_Character_BP.Pachyrhino_Character_BP_C.ExecuteUbergraph_Pachyrhino_Character_BP
struct APachyrhino_Character_BP_C_ExecuteUbergraph_Pachyrhino_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
