#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MagmaAoE_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.BPExcludeAoEActor
struct ABuff_MagmaAoE_C_BPExcludeAoEActor_Params
{
	class AActor**                                     ActorToConsider;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.UserConstructionScript
struct ABuff_MagmaAoE_C_UserConstructionScript_Params
{
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__FinishedFunc
struct ABuff_MagmaAoE_C_Timeline_0__FinishedFunc_Params
{
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__UpdateFunc
struct ABuff_MagmaAoE_C_Timeline_0__UpdateFunc_Params
{
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveTick
struct ABuff_MagmaAoE_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.SetStructure
struct ABuff_MagmaAoE_C_SetStructure_Params
{
	class APrimalStructure*                            NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.DoFadeOutMesh
struct ABuff_MagmaAoE_C_DoFadeOutMesh_Params
{
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.CheckForRain
struct ABuff_MagmaAoE_C_CheckForRain_Params
{
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveBeginPlay
struct ABuff_MagmaAoE_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.ExecuteUbergraph_Buff_MagmaAoE
struct ABuff_MagmaAoE_C_ExecuteUbergraph_Buff_MagmaAoE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
