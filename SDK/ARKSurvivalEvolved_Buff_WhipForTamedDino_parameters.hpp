#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WhipForTamedDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPResetBuffStart
struct ABuff_WhipForTamedDino_C_BPResetBuffStart_Params
{
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.SetBuffCauser
struct ABuff_WhipForTamedDino_C_SetBuffCauser_Params
{
	class AActor**                                     CausedBy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BuffTickServer
struct ABuff_WhipForTamedDino_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.PlayStartledAnim
struct ABuff_WhipForTamedDino_C_PlayStartledAnim_Params
{
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPActivated
struct ABuff_WhipForTamedDino_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPCustomAllowAddBuff
struct ABuff_WhipForTamedDino_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.UserConstructionScript
struct ABuff_WhipForTamedDino_C_UserConstructionScript_Params
{
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPSetupForInstigator
struct ABuff_WhipForTamedDino_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.ExecuteUbergraph_Buff_WhipForTamedDino
struct ABuff_WhipForTamedDino_C_ExecuteUbergraph_Buff_WhipForTamedDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
