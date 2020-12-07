#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinAttackRangeAndGetBestAttack_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.UpdateBlackboardKeys
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params
{
	class APrimalDinoAIController*                     OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
