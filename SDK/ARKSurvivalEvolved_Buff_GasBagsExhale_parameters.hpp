#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBagsExhale_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_GasBagsExhale_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BuffTickServer
struct ABuff_GasBagsExhale_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.SetupExhale
struct ABuff_GasBagsExhale_C_SetupExhale_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPActivated
struct ABuff_GasBagsExhale_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.UserConstructionScript
struct ABuff_GasBagsExhale_C_UserConstructionScript_Params
{
};

// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.ExecuteUbergraph_Buff_GasBagsExhale
struct ABuff_GasBagsExhale_C_ExecuteUbergraph_Buff_GasBagsExhale_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
