#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldSwitchBiped_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShouldSwitchBiped.ShouldSwitchBiped_C.ReceiveTick
struct UShouldSwitchBiped_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShouldSwitchBiped.ShouldSwitchBiped_C.ReceiveActivation
struct UShouldSwitchBiped_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShouldSwitchBiped.ShouldSwitchBiped_C.ExecuteUbergraph_ShouldSwitchBiped
struct UShouldSwitchBiped_C_ExecuteUbergraph_ShouldSwitchBiped_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
