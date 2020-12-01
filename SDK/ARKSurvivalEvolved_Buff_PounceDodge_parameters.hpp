#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PounceDodge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PounceDodge.Buff_PounceDodge_C.ReceiveTick
struct ABuff_PounceDodge_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PounceDodge.Buff_PounceDodge_C.BPPreventFirstPerson
struct ABuff_PounceDodge_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PounceDodge.Buff_PounceDodge_C.PreventJump
struct ABuff_PounceDodge_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PounceDodge.Buff_PounceDodge_C.UserConstructionScript
struct ABuff_PounceDodge_C_UserConstructionScript_Params
{
};

// Function Buff_PounceDodge.Buff_PounceDodge_C.ServerDodge
struct ABuff_PounceDodge_C_ServerDodge_Params
{
};

// Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodge
struct ABuff_PounceDodge_C_MultiOnDodge_Params
{
};

// Function Buff_PounceDodge.Buff_PounceDodge_C.MultiOnDodgeEnd
struct ABuff_PounceDodge_C_MultiOnDodgeEnd_Params
{
};

// Function Buff_PounceDodge.Buff_PounceDodge_C.ExecuteUbergraph_Buff_PounceDodge
struct ABuff_PounceDodge_C_ExecuteUbergraph_Buff_PounceDodge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
