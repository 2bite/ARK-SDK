#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_SpaceDolphin_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.Get Ammo And Laser HUDElement Color
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_Get_Ammo_And_Laser_HUDElement_Color_Params
{
	bool                                               IsUsingSuperFlight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LaserLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.HitCollisionStarFoxMode
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_HitCollisionStarFoxMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.StartedBraking
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_StartedBraking_Params
{
	class ASpaceDolphin_Character_BP_C*                self2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPGetHUDElements
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UpdateSFX
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_UpdateSFX_Params
{
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffDescription
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.AllowPostProcessEffect
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffPostprocessIntensity
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPCustomAllowAddBuff
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BuffTickClient
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UserConstructionScript
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_UserConstructionScript_Params
{
};

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin
struct ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
