#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SquidInk_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SquidInk.Buff_SquidInk_C.BPPreSetupForInstigator
struct ABuff_SquidInk_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SquidInk.Buff_SquidInk_C.BPDeactivated
struct ABuff_SquidInk_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SquidInk.Buff_SquidInk_C.BPCustomAllowAddBuff
struct ABuff_SquidInk_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SquidInk.Buff_SquidInk_C.UserConstructionScript
struct ABuff_SquidInk_C_UserConstructionScript_Params
{
};

// Function Buff_SquidInk.Buff_SquidInk_C.ExecuteUbergraph_Buff_SquidInk
struct ABuff_SquidInk_C_ExecuteUbergraph_Buff_SquidInk_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
