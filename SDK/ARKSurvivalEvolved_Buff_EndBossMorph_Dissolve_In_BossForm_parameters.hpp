#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_In_BossForm_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.PlayTauntAnims
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_PlayTauntAnims_Params
{
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Additional Set Dissolve
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_Additional_Set_Dissolve_Params
{
	float*                                             NewPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      DissolveParameterName;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.AdditionalDissolveFunc
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_AdditionalDissolveFunc_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      DissolveParamName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.BuffAdjustDamage
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Activate Boss In Effects
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_Activate_Boss_In_Effects_Params
{
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Disable Boss Visuals
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_Disable_Boss_Visuals_Params
{
	class APrimalDinoCharacter*                        InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.BPDeactivated
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.UpdateAdditionalParameters
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_UpdateAdditionalParameters_Params
{
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.UserConstructionScript
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_UserConstructionScript_Params
{
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.ReceiveBeginPlay
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_ReceiveBeginPlay_Params
{
};

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_BossForm
struct ABuff_EndBossMorph_Dissolve_In_BossForm_C_ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_BossForm_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
