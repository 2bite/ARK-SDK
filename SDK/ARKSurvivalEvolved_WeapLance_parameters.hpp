#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapLance_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapLance.WeapLance_C.DoTrace
struct AWeapLance_C_DoTrace_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapLance.WeapLance_C.DamageActor
struct AWeapLance_C_DamageActor_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function WeapLance.WeapLance_C.DoTraceAttacks
struct AWeapLance_C_DoTraceAttacks_Params
{
};

// Function WeapLance.WeapLance_C.BPForceTPVTargetingAnimation
struct AWeapLance_C_BPForceTPVTargetingAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapLance.WeapLance_C.ReceiveTick
struct AWeapLance_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapLance.WeapLance_C.BPHandleMeleeAttack
struct AWeapLance_C_BPHandleMeleeAttack_Params
{
};

// Function WeapLance.WeapLance_C.BPStopMeleeAttack
struct AWeapLance_C_BPStopMeleeAttack_Params
{
};

// Function WeapLance.WeapLance_C.UserConstructionScript
struct AWeapLance_C_UserConstructionScript_Params
{
};

// Function WeapLance.WeapLance_C.DoPlayStartAttackingSound
struct AWeapLance_C_DoPlayStartAttackingSound_Params
{
};

// Function WeapLance.WeapLance_C.DoPlayStopAttackingSound
struct AWeapLance_C_DoPlayStopAttackingSound_Params
{
};

// Function WeapLance.WeapLance_C.DidDismountHit
struct AWeapLance_C_DidDismountHit_Params
{
};

// Function WeapLance.WeapLance_C.ExecuteUbergraph_WeapLance
struct AWeapLance_C_ExecuteUbergraph_WeapLance_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
