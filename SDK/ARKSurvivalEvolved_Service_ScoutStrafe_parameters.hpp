#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_ScoutStrafe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_ScoutStrafe.Service_ScoutStrafe_C.ReceiveTick
struct UService_ScoutStrafe_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_ScoutStrafe.Service_ScoutStrafe_C.ReceiveDeactivation
struct UService_ScoutStrafe_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_ScoutStrafe.Service_ScoutStrafe_C.ReceiveActivation
struct UService_ScoutStrafe_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_ScoutStrafe.Service_ScoutStrafe_C.ExecuteUbergraph_Service_ScoutStrafe
struct UService_ScoutStrafe_C_ExecuteUbergraph_Service_ScoutStrafe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
