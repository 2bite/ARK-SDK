#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ReptileRabies_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BuffTickServer
struct ABuff_ReptileRabies_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BPCustomAllowAddBuff
struct ABuff_ReptileRabies_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.TryApplyDisease
struct ABuff_ReptileRabies_C_TryApplyDisease_Params
{
	class APrimalCharacter*                            TheTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InfectChance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.AllowContagionTarget
struct ABuff_ReptileRabies_C_AllowContagionTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BPSetupForInstigator
struct ABuff_ReptileRabies_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.Cough
struct ABuff_ReptileRabies_C_Cough_Params
{
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.NotifyBumpedPawn
struct ABuff_ReptileRabies_C_NotifyBumpedPawn_Params
{
	class APrimalCharacter**                           BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.NotifyBumpedByPawn
struct ABuff_ReptileRabies_C_NotifyBumpedByPawn_Params
{
	class APrimalCharacter**                           BumpedBy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.UserConstructionScript
struct ABuff_ReptileRabies_C_UserConstructionScript_Params
{
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct ABuff_ReptileRabies_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.ExecuteUbergraph_Buff_ReptileRabies
struct ABuff_ReptileRabies_C_ExecuteUbergraph_Buff_ReptileRabies_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
