#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OnFire_VentHeat_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.BuffTickServer
struct ABuff_OnFire_VentHeat_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_OnFire_VentHeat_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.SetupVentHeat
struct ABuff_OnFire_VentHeat_C_SetupVentHeat_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.UserConstructionScript
struct ABuff_OnFire_VentHeat_C_UserConstructionScript_Params
{
};

// Function Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C.ExecuteUbergraph_Buff_OnFire_VentHeat
struct ABuff_OnFire_VentHeat_C_ExecuteUbergraph_Buff_OnFire_VentHeat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
