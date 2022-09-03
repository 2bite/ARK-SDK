#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldFleeFromAttack_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ReceiveTick
struct UShouldFleeFromAttack_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ExecuteUbergraph_ShouldFleeFromAttack_SRV
struct UShouldFleeFromAttack_SRV_C_ExecuteUbergraph_ShouldFleeFromAttack_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
