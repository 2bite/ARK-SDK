#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OwlIceCrash_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPCustomAllowAddBuff
struct ABuff_OwlIceCrash_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BuffTickClient
struct ABuff_OwlIceCrash_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPActivated
struct ABuff_OwlIceCrash_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPOnInstigatorCapsuleComponentHit
struct ABuff_OwlIceCrash_C_BPOnInstigatorCapsuleComponentHit_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPDeactivated
struct ABuff_OwlIceCrash_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.SetupIceCrash
struct ABuff_OwlIceCrash_C_SetupIceCrash_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Frozen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPSetupForInstigator
struct ABuff_OwlIceCrash_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_OwlIceCrash_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.UserConstructionScript
struct ABuff_OwlIceCrash_C_UserConstructionScript_Params
{
};

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.ExecuteUbergraph_Buff_OwlIceCrash
struct ABuff_OwlIceCrash_C_ExecuteUbergraph_Buff_OwlIceCrash_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
