#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FishingNetStopMovement_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStopFire
struct ABuff_FishingNetStopMovement_C_BPHandleOnStopFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ReceiveBeginPlay
struct ABuff_FishingNetStopMovement_C_ReceiveBeginPlay_Params
{
};

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickClient
struct ABuff_FishingNetStopMovement_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPPreventInstigatorMovementMode
struct ABuff_FishingNetStopMovement_C_BPPreventInstigatorMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickServer
struct ABuff_FishingNetStopMovement_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStartFire
struct ABuff_FishingNetStopMovement_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.UserConstructionScript
struct ABuff_FishingNetStopMovement_C_UserConstructionScript_Params
{
};

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ExecuteUbergraph_Buff_FishingNetStopMovement
struct ABuff_FishingNetStopMovement_C_ExecuteUbergraph_Buff_FishingNetStopMovement_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
