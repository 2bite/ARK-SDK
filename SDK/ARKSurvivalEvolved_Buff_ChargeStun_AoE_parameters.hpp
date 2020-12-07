#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeStun_AoE_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.InitializeAoE
struct ABuff_ChargeStun_AoE_C_InitializeAoE_Params
{
	class ABuff_ChargeEmitter_C*                       chargeManagerBuff;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Can Stun Character
struct ABuff_ChargeStun_AoE_C_Can_Stun_Character_Params
{
	class APrimalCharacter*                            characterToStun;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canStun;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Get WeaponCharge Buff
struct ABuff_ChargeStun_AoE_C_Get_WeaponCharge_Buff_Params
{
	class ABuff_ChargeEmitter_C*                       chargeBuff;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.BPExcludeAoEActor
struct ABuff_ChargeStun_AoE_C_BPExcludeAoEActor_Params
{
	class AActor**                                     ActorToConsider;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.UserConstructionScript
struct ABuff_ChargeStun_AoE_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.ExecuteUbergraph_Buff_ChargeStun_AoE
struct ABuff_ChargeStun_AoE_C_ExecuteUbergraph_Buff_ChargeStun_AoE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
