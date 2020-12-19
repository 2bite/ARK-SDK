#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorTopSwitch_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.AllowedToChangePublicUse
struct AWoodElevatorTopSwitch_C_AllowedToChangePublicUse_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Make Multi Use Entry
struct AWoodElevatorTopSwitch_C_Make_Multi_Use_Entry_Params
{
	TEnumAsByte<EPrimalStructureElevatorState>         Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMultiUseEntry                              Entry;                                                    // (Parm, OutParm)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Get Elevator Platform
struct AWoodElevatorTopSwitch_C_Get_Elevator_Platform_Params
{
	class AWoodElevatorPlatform_Base_C*                Elevator;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Move Elevator
struct AWoodElevatorTopSwitch_C_Move_Elevator_Params
{
	class APrimalStructureElevatorPlatform*            Elevator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>         Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPTryMultiUse
struct AWoodElevatorTopSwitch_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPGetMultiUseEntries
struct AWoodElevatorTopSwitch_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.UserConstructionScript
struct AWoodElevatorTopSwitch_C_UserConstructionScript_Params
{
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ReceiveBeginPlay
struct AWoodElevatorTopSwitch_C_ReceiveBeginPlay_Params
{
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStartMove
struct AWoodElevatorTopSwitch_C_OnElevatorStartMove_Params
{
	TEnumAsByte<EPrimalStructureElevatorState>         Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStop
struct AWoodElevatorTopSwitch_C_OnElevatorStop_Params
{
	bool                                               SwitchedDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>         NewDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ExecuteUbergraph_WoodElevatorTopSwitch
struct AWoodElevatorTopSwitch_C_ExecuteUbergraph_WoodElevatorTopSwitch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
