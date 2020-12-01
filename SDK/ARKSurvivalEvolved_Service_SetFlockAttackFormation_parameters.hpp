#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_SetFlockAttackFormation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveDeactivation
struct UService_SetFlockAttackFormation_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ReceiveActivation
struct UService_SetFlockAttackFormation_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C.ExecuteUbergraph_Service_SetFlockAttackFormation
struct UService_SetFlockAttackFormation_C_ExecuteUbergraph_Service_SetFlockAttackFormation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
