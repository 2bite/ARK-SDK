#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeStun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeStun.Buff_ChargeStun_C.Get ImmunityTime
struct ABuff_ChargeStun_C_Get_ImmunityTime_Params
{
	float                                              immunityTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.Get Max StunTime
struct ABuff_ChargeStun_C_Get_Max_StunTime_Params
{
	float                                              maxStunTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.BuffTickClient
struct ABuff_ChargeStun_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.Get Armor Rating
struct ABuff_ChargeStun_C_Get_Armor_Rating_Params
{
	float                                              rating;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.IsUsingShield
struct ABuff_ChargeStun_C_IsUsingShield_Params
{
	bool                                               usingShield;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.Get Instigator Player
struct ABuff_ChargeStun_C_Get_Instigator_Player_Params
{
	class AShooterCharacter*                           instigatorPlayer;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.ApplyDamage
struct ABuff_ChargeStun_C_ApplyDamage_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.BPCheckPreventInput
struct ABuff_ChargeStun_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.BPDeactivated
struct ABuff_ChargeStun_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.DoStun
struct ABuff_ChargeStun_C_DoStun_Params
{
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.Should Be Stunned
struct ABuff_ChargeStun_C_Should_Be_Stunned_Params
{
	bool                                               canBeStunned;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.Calculate Multipliers
struct ABuff_ChargeStun_C_Calculate_Multipliers_Params
{
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.BPPostInitializeComponents
struct ABuff_ChargeStun_C_BPPostInitializeComponents_Params
{
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.AddStunAmount
struct ABuff_ChargeStun_C_AddStunAmount_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.BPResetBuffStart
struct ABuff_ChargeStun_C_BPResetBuffStart_Params
{
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.UserConstructionScript
struct ABuff_ChargeStun_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeStun.Buff_ChargeStun_C.ExecuteUbergraph_Buff_ChargeStun
struct ABuff_ChargeStun_C_ExecuteUbergraph_Buff_ChargeStun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
