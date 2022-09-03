#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CruiseMissileStopMovement_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ReceiveBeginPlay
struct ABuff_CruiseMissileStopMovement_C_ReceiveBeginPlay_Params
{
};

// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPPreventInstigatorMovementMode
struct ABuff_CruiseMissileStopMovement_C_BPPreventInstigatorMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BuffTickServer
struct ABuff_CruiseMissileStopMovement_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPHandleOnStartFire
struct ABuff_CruiseMissileStopMovement_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.UserConstructionScript
struct ABuff_CruiseMissileStopMovement_C_UserConstructionScript_Params
{
};

// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ExecuteUbergraph_Buff_CruiseMissileStopMovement
struct ABuff_CruiseMissileStopMovement_C_ExecuteUbergraph_Buff_CruiseMissileStopMovement_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
