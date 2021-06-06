#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekRiderCockpit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPCustomAllowAddBuff
struct ABuff_MekRiderCockpit_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.UserConstructionScript
struct ABuff_MekRiderCockpit_C_UserConstructionScript_Params
{
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BuffTickServer
struct ABuff_MekRiderCockpit_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.DeactivateIfNotRidingMek
struct ABuff_MekRiderCockpit_C_DeactivateIfNotRidingMek_Params
{
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPDeactivated
struct ABuff_MekRiderCockpit_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ReceiveBeginPlay
struct ABuff_MekRiderCockpit_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekOutOfFuel
struct ABuff_MekRiderCockpit_C_NotifyMekOutOfFuel_Params
{
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekHasFuel
struct ABuff_MekRiderCockpit_C_NotifyMekHasFuel_Params
{
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ClientSetUnderwaterBreathing
struct ABuff_MekRiderCockpit_C_ClientSetUnderwaterBreathing_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.SetUnderwaterBreathing
struct ABuff_MekRiderCockpit_C_SetUnderwaterBreathing_Params
{
	bool                                               Allowed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ExecuteUbergraph_Buff_MekRiderCockpit
struct ABuff_MekRiderCockpit_C_ExecuteUbergraph_Buff_MekRiderCockpit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
