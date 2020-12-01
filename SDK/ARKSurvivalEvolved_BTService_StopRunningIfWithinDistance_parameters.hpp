#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTService_StopRunningIfWithinDistance_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveTick
struct UBTService_StopRunningIfWithinDistance_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveDeactivation
struct UBTService_StopRunningIfWithinDistance_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveActivation
struct UBTService_StopRunningIfWithinDistance_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ExecuteUbergraph_BTService_StopRunningIfWithinDistance
struct UBTService_StopRunningIfWithinDistance_C_ExecuteUbergraph_BTService_StopRunningIfWithinDistance_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
