#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTransmitter_Strider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.ReceiveBeginPlay
struct ATekTransmitter_Strider_C_ReceiveBeginPlay_Params
{
};

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerDeactivated
struct ATekTransmitter_Strider_C_BPContainerDeactivated_Params
{
};

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerActivated
struct ATekTransmitter_Strider_C_BPContainerActivated_Params
{
};

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPPreInitializeComponents
struct ATekTransmitter_Strider_C_BPPreInitializeComponents_Params
{
};

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPCanBeActivatedByPlayer
struct ATekTransmitter_Strider_C_BPCanBeActivatedByPlayer_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.UserConstructionScript
struct ATekTransmitter_Strider_C_UserConstructionScript_Params
{
};

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.ExecuteUbergraph_TekTransmitter_Strider
struct ATekTransmitter_Strider_C_ExecuteUbergraph_TekTransmitter_Strider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
