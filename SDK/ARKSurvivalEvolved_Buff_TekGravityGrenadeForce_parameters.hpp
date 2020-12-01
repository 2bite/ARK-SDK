#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekGravityGrenadeForce_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BuffTickServer
struct ABuff_TekGravityGrenadeForce_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPDeactivated
struct ABuff_TekGravityGrenadeForce_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPActivated
struct ABuff_TekGravityGrenadeForce_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPPreventInstigatorMovementMode
struct ABuff_TekGravityGrenadeForce_C_BPPreventInstigatorMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        newMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     newCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPOverrideCharacterNewFallVelocity
struct ABuff_TekGravityGrenadeForce_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.SetupGravityForce
struct ABuff_TekGravityGrenadeForce_C_SetupGravityForce_Params
{
	struct FVector                                     GravityCenter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StrengthMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.UserConstructionScript
struct ABuff_TekGravityGrenadeForce_C_UserConstructionScript_Params
{
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.MultiOnSetupGravityForce
struct ABuff_TekGravityGrenadeForce_C_MultiOnSetupGravityForce_Params
{
	struct FVector                                     GravityCenter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitialLaunchDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ExplodeNetworkTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientUpdateVelocity
struct ABuff_TekGravityGrenadeForce_C_ClientUpdateVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.StopGravityEffect
struct ABuff_TekGravityGrenadeForce_C_StopGravityEffect_Params
{
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ForceInstigatorNetUpdate
struct ABuff_TekGravityGrenadeForce_C_ForceInstigatorNetUpdate_Params
{
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientSyncDesiredFallVelocity
struct ABuff_TekGravityGrenadeForce_C_ClientSyncDesiredFallVelocity_Params
{
	struct FVector                                     Vel;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ExecuteUbergraph_Buff_TekGravityGrenadeForce
struct ABuff_TekGravityGrenadeForce_C_ExecuteUbergraph_Buff_TekGravityGrenadeForce_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
