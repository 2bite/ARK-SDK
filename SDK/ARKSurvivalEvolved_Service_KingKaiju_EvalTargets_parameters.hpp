#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_KingKaiju_EvalTargets_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.LaunchMeteor
struct UService_KingKaiju_EvalTargets_C_LaunchMeteor_Params
{
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.IsDoingWipeout
struct UService_KingKaiju_EvalTargets_C_IsDoingWipeout_Params
{
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.LeashKingKaiju
struct UService_KingKaiju_EvalTargets_C_LeashKingKaiju_Params
{
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.CheckIfTargetStillValid
struct UService_KingKaiju_EvalTargets_C_CheckIfTargetStillValid_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ClearArrays
struct UService_KingKaiju_EvalTargets_C_ClearArrays_Params
{
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ReceiveActivation
struct UService_KingKaiju_EvalTargets_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ReceiveTick
struct UService_KingKaiju_EvalTargets_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.DelayedMeteorLaunch
struct UService_KingKaiju_EvalTargets_C_DelayedMeteorLaunch_Params
{
};

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ExecuteUbergraph_Service_KingKaiju_EvalTargets
struct UService_KingKaiju_EvalTargets_C_ExecuteUbergraph_Service_KingKaiju_EvalTargets_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
