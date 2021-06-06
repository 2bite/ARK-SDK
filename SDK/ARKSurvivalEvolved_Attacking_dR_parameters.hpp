#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Attacking_dR_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart
struct UAttacking_DR_C_ReceiveExecutionStart_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish
struct UAttacking_DR_C_ReceiveExecutionFinish_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTNodeResult>*                        NodeResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
struct UAttacking_DR_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR
struct UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
