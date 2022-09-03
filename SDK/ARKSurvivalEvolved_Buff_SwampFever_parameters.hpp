#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SwampFever_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SwampFever.Buff_SwampFever_C.BPCustomAllowAddBuff
struct ABuff_SwampFever_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SwampFever.Buff_SwampFever_C.TryApplyDisease
struct ABuff_SwampFever_C_TryApplyDisease_Params
{
	class APrimalCharacter*                            TheTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InfectChance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SwampFever.Buff_SwampFever_C.AllowContagionTarget
struct ABuff_SwampFever_C_AllowContagionTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SwampFever.Buff_SwampFever_C.BPSetupForInstigator
struct ABuff_SwampFever_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SwampFever.Buff_SwampFever_C.Cough
struct ABuff_SwampFever_C_Cough_Params
{
};

// Function Buff_SwampFever.Buff_SwampFever_C.NotifyBumpedPawn
struct ABuff_SwampFever_C_NotifyBumpedPawn_Params
{
	class APrimalCharacter**                           BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SwampFever.Buff_SwampFever_C.NotifyBumpedByPawn
struct ABuff_SwampFever_C_NotifyBumpedByPawn_Params
{
	class APrimalCharacter**                           BumpedBy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SwampFever.Buff_SwampFever_C.ReceiveTick
struct ABuff_SwampFever_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SwampFever.Buff_SwampFever_C.UserConstructionScript
struct ABuff_SwampFever_C_UserConstructionScript_Params
{
};

// Function Buff_SwampFever.Buff_SwampFever_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct ABuff_SwampFever_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Buff_SwampFever.Buff_SwampFever_C.ExecuteUbergraph_Buff_SwampFever
struct ABuff_SwampFever_C_ExecuteUbergraph_Buff_SwampFever_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
