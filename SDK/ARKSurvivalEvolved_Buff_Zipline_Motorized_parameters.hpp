#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Motorized_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UpdateFX
struct ABuff_Zipline_Motorized_C_UpdateFX_Params
{
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPOverrideWeaponBob
struct ABuff_Zipline_Motorized_C_BPOverrideWeaponBob_Params
{
	struct FVector                                     InWeaponBob;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BuffTickClient
struct ABuff_Zipline_Motorized_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.Try Refill Gas
struct ABuff_Zipline_Motorized_C_Try_Refill_Gas_Params
{
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDrawBuffStatusHUD
struct ABuff_Zipline_Motorized_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.GetMotorAndParentItem
struct ABuff_Zipline_Motorized_C_GetMotorAndParentItem_Params
{
	class UObject*                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 ParentItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 MyItemSkin;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.TickMoveAlongZipline
struct ABuff_Zipline_Motorized_C_TickMoveAlongZipline_Params
{
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDeactivated
struct ABuff_Zipline_Motorized_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPSetupForInstigator
struct ABuff_Zipline_Motorized_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UserConstructionScript
struct ABuff_Zipline_Motorized_C_UserConstructionScript_Params
{
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ConsumeGasoline
struct ABuff_Zipline_Motorized_C_ConsumeGasoline_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ExecuteUbergraph_Buff_Zipline_Motorized
struct ABuff_Zipline_Motorized_C_ExecuteUbergraph_Buff_Zipline_Motorized_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
