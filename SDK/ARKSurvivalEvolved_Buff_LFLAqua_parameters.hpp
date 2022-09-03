#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFLAqua_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_LFLAqua.Buff_LFLAqua_C.ActivateAquaBuff
struct ABuff_LFLAqua_C_ActivateAquaBuff_Params
{
};

// Function Buff_LFLAqua.Buff_LFLAqua_C.DeactivateAquaBuff
struct ABuff_LFLAqua_C_DeactivateAquaBuff_Params
{
};

// Function Buff_LFLAqua.Buff_LFLAqua_C.UserConstructionScript
struct ABuff_LFLAqua_C_UserConstructionScript_Params
{
};

// Function Buff_LFLAqua.Buff_LFLAqua_C.BPDeactivated
struct ABuff_LFLAqua_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_LFLAqua.Buff_LFLAqua_C.ReceiveBeginPlay
struct ABuff_LFLAqua_C_ReceiveBeginPlay_Params
{
};

// Function Buff_LFLAqua.Buff_LFLAqua_C.ExecuteUbergraph_Buff_LFLAqua
struct ABuff_LFLAqua_C_ExecuteUbergraph_Buff_LFLAqua_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
