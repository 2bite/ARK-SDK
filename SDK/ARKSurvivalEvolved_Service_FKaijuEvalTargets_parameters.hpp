#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_FKaijuEvalTargets_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFindNewAggroTarget
struct UService_FKaijuEvalTargets_C_MaybeFindNewAggroTarget_Params
{
	bool                                               ShouldRunSecondaryAttackLogic;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.IsTamedAndPassive
struct UService_FKaijuEvalTargets_C_IsTamedAndPassive_Params
{
	bool                                               IsPassive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearTargets
struct UService_FKaijuEvalTargets_C_ClearTargets_Params
{
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeShakePlayersOff
struct UService_FKaijuEvalTargets_C_MaybeShakePlayersOff_Params
{
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFlyerAttack
struct UService_FKaijuEvalTargets_C_MaybeFlyerAttack_Params
{
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackGrab
struct UService_FKaijuEvalTargets_C_MaybeAttackGrab_Params
{
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackRoot
struct UService_FKaijuEvalTargets_C_MaybeAttackRoot_Params
{
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ChooseQuadWithMostEnemies
struct UService_FKaijuEvalTargets_C_ChooseQuadWithMostEnemies_Params
{
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearArrays
struct UService_FKaijuEvalTargets_C_ClearArrays_Params
{
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.SetQuadrants
struct UService_FKaijuEvalTargets_C_SetQuadrants_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.TargetAcquire
struct UService_FKaijuEvalTargets_C_TargetAcquire_Params
{
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveActivation
struct UService_FKaijuEvalTargets_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveTick
struct UService_FKaijuEvalTargets_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ExecuteUbergraph_Service_FKaijuEvalTargets
struct UService_FKaijuEvalTargets_C_ExecuteUbergraph_Service_FKaijuEvalTargets_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
