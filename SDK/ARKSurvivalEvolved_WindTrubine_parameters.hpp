#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindTrubine_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WindTrubine.WindTrubine_C.BPOverrideCantBuildReasonString
struct AWindTrubine_C_BPOverrideCantBuildReasonString_Params
{
	int*                                               CantBuildReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WindTrubine.WindTrubine_C.BPIsAllowedToBuild
struct AWindTrubine_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindTrubine.WindTrubine_C.BPUnstasis
struct AWindTrubine_C_BPUnstasis_Params
{
};

// Function WindTrubine.WindTrubine_C.UpdateWind
struct AWindTrubine_C_UpdateWind_Params
{
};

// Function WindTrubine.WindTrubine_C.BPIsValidWaterSourceForPipe
struct AWindTrubine_C_BPIsValidWaterSourceForPipe_Params
{
	class APrimalStructureWaterPipe**                  ForWaterPipe;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindTrubine.WindTrubine_C.BPCanBeActivatedByPlayer
struct AWindTrubine_C_BPCanBeActivatedByPlayer_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindTrubine.WindTrubine_C.BPCanBeActivated
struct AWindTrubine_C_BPCanBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindTrubine.WindTrubine_C.BPContainerActivated
struct AWindTrubine_C_BPContainerActivated_Params
{
};

// Function WindTrubine.WindTrubine_C.BPContainerDeactivated
struct AWindTrubine_C_BPContainerDeactivated_Params
{
};

// Function WindTrubine.WindTrubine_C.UserConstructionScript
struct AWindTrubine_C_UserConstructionScript_Params
{
};

// Function WindTrubine.WindTrubine_C.ReceiveBeginPlay
struct AWindTrubine_C_ReceiveBeginPlay_Params
{
};

// Function WindTrubine.WindTrubine_C.ForceUpdateWind
struct AWindTrubine_C_ForceUpdateWind_Params
{
};

// Function WindTrubine.WindTrubine_C.ExecuteUbergraph_WindTrubine
struct AWindTrubine_C_ExecuteUbergraph_WindTrubine_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
