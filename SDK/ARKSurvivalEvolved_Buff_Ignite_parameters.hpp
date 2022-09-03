#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Ignite_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Ignite.Buff_Ignite_C.BPCustomAllowAddBuff
struct ABuff_Ignite_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.BPPreventAddingOtherBuff
struct ABuff_Ignite_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.MeleeIncIgnite
struct ABuff_Ignite_C_MeleeIncIgnite_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.UpdateBuffDescription
struct ABuff_Ignite_C_UpdateBuffDescription_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.GetBuffDescription
struct ABuff_Ignite_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_Ignite.Buff_Ignite_C.BPServerHandleNetExecCommand
struct ABuff_Ignite_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.GetBuffPostprocessIntensity
struct ABuff_Ignite_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.BuffTickClient
struct ABuff_Ignite_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.Initialize
struct ABuff_Ignite_C_Initialize_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.BuffTickServer
struct ABuff_Ignite_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.ApplyOnFireDebuff
struct ABuff_Ignite_C_ApplyOnFireDebuff_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.AddIgnite
struct ABuff_Ignite_C_AddIgnite_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.CheckDeactivateCondition
struct ABuff_Ignite_C_CheckDeactivateCondition_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.BPDeactivated
struct ABuff_Ignite_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.UserConstructionScript
struct ABuff_Ignite_C_UserConstructionScript_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.MultiExtendBuffTime
struct ABuff_Ignite_C_MultiExtendBuffTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.MultiAddIgnite
struct ABuff_Ignite_C_MultiAddIgnite_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Ignite.Buff_Ignite_C.ReceiveBeginPlay
struct ABuff_Ignite_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.ApplyOnFire
struct ABuff_Ignite_C_ApplyOnFire_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.ChangeIgniteVFX
struct ABuff_Ignite_C_ChangeIgniteVFX_Params
{
};

// Function Buff_Ignite.Buff_Ignite_C.ExecuteUbergraph_Buff_Ignite
struct ABuff_Ignite_C_ExecuteUbergraph_Buff_Ignite_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
