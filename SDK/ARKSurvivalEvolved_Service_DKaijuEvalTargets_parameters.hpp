#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_DKaijuEvalTargets_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.IsTamedAndPassive
struct UService_DKaijuEvalTargets_C_IsTamedAndPassive_Params
{
	bool                                               IsPassive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.AlertFlocksForRoll
struct UService_DKaijuEvalTargets_C_AlertFlocksForRoll_Params
{
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.Eval Attacks
struct UService_DKaijuEvalTargets_C_Eval_Attacks_Params
{
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.DestroyFlocks
struct UService_DKaijuEvalTargets_C_DestroyFlocks_Params
{
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SetFlockTargets
struct UService_DKaijuEvalTargets_C_SetFlockTargets_Params
{
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SummonLightningGroundTargets
struct UService_DKaijuEvalTargets_C_SummonLightningGroundTargets_Params
{
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.EvalFlockHoverAttackModes
struct UService_DKaijuEvalTargets_C_EvalFlockHoverAttackModes_Params
{
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.MaybeSummonFlocks
struct UService_DKaijuEvalTargets_C_MaybeSummonFlocks_Params
{
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveTick
struct UService_DKaijuEvalTargets_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveActivation
struct UService_DKaijuEvalTargets_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ExecuteUbergraph_Service_DKaijuEvalTargets
struct UService_DKaijuEvalTargets_C_ExecuteUbergraph_Service_DKaijuEvalTargets_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
