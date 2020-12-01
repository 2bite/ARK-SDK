#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekClaw_Target_MaxPower_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ReceiveDestroyed
struct ABuff_TekClaw_Target_MaxPower_C_ReceiveDestroyed_Params
{
};

// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.BPSetupForInstigator
struct ABuff_TekClaw_Target_MaxPower_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.UserConstructionScript
struct ABuff_TekClaw_Target_MaxPower_C_UserConstructionScript_Params
{
};

// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.HideMesh
struct ABuff_TekClaw_Target_MaxPower_C_HideMesh_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Target_MaxPower
struct ABuff_TekClaw_Target_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Target_MaxPower_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
