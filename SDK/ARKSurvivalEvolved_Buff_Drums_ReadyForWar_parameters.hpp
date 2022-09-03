#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Drums_ReadyForWar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPCanBeCarried
struct ABuff_Drums_ReadyForWar_C_BPCanBeCarried_Params
{
	class APrimalCharacter**                           ByCarrier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPInterceptUseAction
struct ABuff_Drums_ReadyForWar_C_BPInterceptUseAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated
struct ABuff_Drums_ReadyForWar_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript
struct ABuff_Drums_ReadyForWar_C_UserConstructionScript_Params
{
};

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.AllowDismount
struct ABuff_Drums_ReadyForWar_C_AllowDismount_Params
{
};

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.PreventDismount
struct ABuff_Drums_ReadyForWar_C_PreventDismount_Params
{
};

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar
struct ABuff_Drums_ReadyForWar_C_ExecuteUbergraph_Buff_Drums_ReadyForWar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
