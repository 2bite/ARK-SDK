#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackTarget_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveActivation
struct UAttackTarget_SRV_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveDeactivation
struct UAttackTarget_SRV_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttackTarget_SRV.AttackTarget_SRV_C.ExecuteUbergraph_AttackTarget_SRV
struct UAttackTarget_SRV_C_ExecuteUbergraph_AttackTarget_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
