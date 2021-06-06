#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderHacking_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_StriderHacking.Buff_StriderHacking_C.UpdateBuffTimer
struct ABuff_StriderHacking_C_UpdateBuffTimer_Params
{
	bool*                                              Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              from_player_trigger;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.Recieved Input
struct ABuff_StriderHacking_C_Recieved_Input_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            input_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              from_player_input;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.Beat Reached The End
struct ABuff_StriderHacking_C_Beat_Reached_The_End_Params
{
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.BPCheckPreventInput
struct ABuff_StriderHacking_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.BuffTickServer
struct ABuff_StriderHacking_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.BPSetupForInstigator
struct ABuff_StriderHacking_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.BPOnInputEvent
struct ABuff_StriderHacking_C_BPOnInputEvent_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.ReceiveAnyDamage
struct ABuff_StriderHacking_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.UserConstructionScript
struct ABuff_StriderHacking_C_UserConstructionScript_Params
{
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.do hacking vfx
struct ABuff_StriderHacking_C_do_hacking_vfx_Params
{
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.cancel early
struct ABuff_StriderHacking_C_cancel_early_Params
{
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.ExecuteUbergraph_Buff_StriderHacking
struct ABuff_StriderHacking_C_ExecuteUbergraph_Buff_StriderHacking_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit success__DelegateSignature
struct ABuff_StriderHacking_C_on_hack_hit_success__DelegateSignature_Params
{
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit miss__DelegateSignature
struct ABuff_StriderHacking_C_on_hack_hit_miss__DelegateSignature_Params
{
};

// Function Buff_StriderHacking.Buff_StriderHacking_C.Hacking Success__DelegateSignature
struct ABuff_StriderHacking_C_Hacking_Success__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
