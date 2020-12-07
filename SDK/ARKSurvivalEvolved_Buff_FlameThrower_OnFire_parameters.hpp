#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FlameThrower_OnFire_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FlameThrower_OnFire.Buff_FlameThrower_OnFire_C.BPDeactivated
struct ABuff_FlameThrower_OnFire_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FlameThrower_OnFire.Buff_FlameThrower_OnFire_C.BPSetupForInstigator
struct ABuff_FlameThrower_OnFire_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FlameThrower_OnFire.Buff_FlameThrower_OnFire_C.ReceiveTick
struct ABuff_FlameThrower_OnFire_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FlameThrower_OnFire.Buff_FlameThrower_OnFire_C.BPCustomAllowAddBuff
struct ABuff_FlameThrower_OnFire_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FlameThrower_OnFire.Buff_FlameThrower_OnFire_C.UserConstructionScript
struct ABuff_FlameThrower_OnFire_C_UserConstructionScript_Params
{
};

// Function Buff_FlameThrower_OnFire.Buff_FlameThrower_OnFire_C.ExecuteUbergraph_Buff_FlameThrower_OnFire
struct ABuff_FlameThrower_OnFire_C_ExecuteUbergraph_Buff_FlameThrower_OnFire_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
