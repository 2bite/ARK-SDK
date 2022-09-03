#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_SilenceCannon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPGetHUDElements
struct ABuff_TekStrider_SilenceCannon_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Is Ai Controlled
struct ABuff_TekStrider_SilenceCannon_C_Is_Ai_Controlled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is target within angle
struct ABuff_TekStrider_SilenceCannon_C_is_target_within_angle_Params
{
	class APrimalDinoCharacter*                        NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.CanFire
struct ABuff_TekStrider_SilenceCannon_C_CanFire_Params
{
	bool                                               from_animbp;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuff_ChargeEmitter_Strider_C*               AsBuff_ChargeEmitter_Strider_C;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BuffTickClient
struct ABuff_TekStrider_SilenceCannon_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Trigger
struct ABuff_TekStrider_SilenceCannon_C_Trigger_Params
{
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPSetupForInstigator
struct ABuff_TekStrider_SilenceCannon_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.IsDinoInCone?
struct ABuff_TekStrider_SilenceCannon_C_IsDinoInCone__Params
{
	class APrimalCharacter*                            Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          hit_result;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsInCone;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Get Cone Forward
struct ABuff_TekStrider_SilenceCannon_C_Get_Cone_Forward_Params
{
	struct FVector                                     Forward;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.GetConeOrigin
struct ABuff_TekStrider_SilenceCannon_C_GetConeOrigin_Params
{
	struct FVector                                     ConeOrigin;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.UserConstructionScript
struct ABuff_TekStrider_SilenceCannon_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Multicast_Fire
struct ABuff_TekStrider_SilenceCannon_C_Multicast_Fire_Params
{
};

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.ExecuteUbergraph_Buff_TekStrider_SilenceCannon
struct ABuff_TekStrider_SilenceCannon_C_ExecuteUbergraph_Buff_TekStrider_SilenceCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
