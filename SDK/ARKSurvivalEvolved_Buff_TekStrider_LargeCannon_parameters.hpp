#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_LargeCannon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.prevent ai doubleshooting
struct ABuff_TekStrider_LargeCannon_C_prevent_ai_doubleshooting_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is cannon blocked
struct ABuff_TekStrider_LargeCannon_C_is_cannon_blocked_Params
{
	bool                                               from_animbp;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Check for Valid Shot Loc
struct ABuff_TekStrider_LargeCannon_C_Delay_Check_for_Valid_Shot_Loc_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.get start and end location
struct ABuff_TekStrider_LargeCannon_C_get_start_and_end_location_Params
{
	bool                                               use_passed_in_loc;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPServerHandleNetExecCommand
struct ABuff_TekStrider_LargeCannon_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPGetHUDElements
struct ABuff_TekStrider_LargeCannon_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.target is within angle
struct ABuff_TekStrider_LargeCannon_C_target_is_within_angle_Params
{
	class APrimalDinoCharacter*                        NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Is Ai Controlled
struct ABuff_TekStrider_LargeCannon_C_Is_Ai_Controlled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Fire
struct ABuff_TekStrider_LargeCannon_C_Delay_Fire_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Get Fire Start And End Location
struct ABuff_TekStrider_LargeCannon_C_Get_Fire_Start_And_End_Location_Params
{
	bool                                               use_validated_loc;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     start_loc;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End_Loc;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire
struct ABuff_TekStrider_LargeCannon_C_Can_Fire_Params
{
	bool                                               from_animbp;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Deactivate Charge
struct ABuff_TekStrider_LargeCannon_C_Delay_Deactivate_Charge_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Trigger
struct ABuff_TekStrider_LargeCannon_C_Trigger_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire? logic
struct ABuff_TekStrider_LargeCannon_C_Can_Fire__logic_Params
{
	bool                                               from_animbp;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.FireCannonProjectile
struct ABuff_TekStrider_LargeCannon_C_FireCannonProjectile_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPSetupForInstigator
struct ABuff_TekStrider_LargeCannon_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.UserConstructionScript
struct ABuff_TekStrider_LargeCannon_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast fire events
struct ABuff_TekStrider_LargeCannon_C_multicast_fire_events_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast prepare to fire
struct ABuff_TekStrider_LargeCannon_C_multicast_prepare_to_fire_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.trace line
struct ABuff_TekStrider_LargeCannon_C_trace_line_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Request Player Shot Loc
struct ABuff_TekStrider_LargeCannon_C_Request_Player_Shot_Loc_Params
{
};

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon
struct ABuff_TekStrider_LargeCannon_C_ExecuteUbergraph_Buff_TekStrider_LargeCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
