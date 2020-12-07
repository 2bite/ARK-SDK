#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ForceFlee_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Restore Flee State
struct ABuff_ForceFlee_Base_C_Restore_Flee_State_Params
{
};

// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Set Flee State
struct ABuff_ForceFlee_Base_C_Set_Flee_State_Params
{
};

// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPDeactivated
struct ABuff_ForceFlee_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPActivated
struct ABuff_ForceFlee_Base_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.UserConstructionScript
struct ABuff_ForceFlee_Base_C_UserConstructionScript_Params
{
};

// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ExecuteUbergraph_Buff_ForceFlee_Base
struct ABuff_ForceFlee_Base_C_ExecuteUbergraph_Buff_ForceFlee_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
