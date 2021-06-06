#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorPlatform_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.GetTopSwitch
struct AWoodElevatorPlatform_Base_C_GetTopSwitch_Params
{
	class AWoodElevatorTopSwitch_C*                    Switch;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.BPElevatorStopped
struct AWoodElevatorPlatform_Base_C_BPElevatorStopped_Params
{
	bool*                                              bSwitchedDirection;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>*        NewDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.UserConstructionScript
struct AWoodElevatorPlatform_Base_C_UserConstructionScript_Params
{
};

// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.ExecuteUbergraph_WoodElevatorPlatform_Base
struct AWoodElevatorPlatform_Base_C_ExecuteUbergraph_WoodElevatorPlatform_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
