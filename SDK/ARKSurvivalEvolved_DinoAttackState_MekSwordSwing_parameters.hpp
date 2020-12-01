#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekSwordSwing_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ShouldDoDamageTo
struct UDinoAttackState_MekSwordSwing_C_ShouldDoDamageTo_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackEnd
struct UDinoAttackState_MekSwordSwing_C_BPOnAttackEnd_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAnimNotifyCustomEvent
struct UDinoAttackState_MekSwordSwing_C_BPOnAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.DoSwordDamage
struct UDinoAttackState_MekSwordSwing_C_DoSwordDamage_Params
{
};

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordCapsule
struct UDinoAttackState_MekSwordSwing_C_GetSwordCapsule_Params
{
	struct FTransform                                  WorldTransform;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              CapsuleRadius;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordDamagePoint
struct UDinoAttackState_MekSwordSwing_C_GetSwordDamagePoint_Params
{
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackStart
struct UDinoAttackState_MekSwordSwing_C_BPOnAttackStart_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ExecuteUbergraph_DinoAttackState_MekSwordSwing
struct UDinoAttackState_MekSwordSwing_C_ExecuteUbergraph_DinoAttackState_MekSwordSwing_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
