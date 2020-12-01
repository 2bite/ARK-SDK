#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WyvernFire_OnFire_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ReceiveTick
struct ABuff_WyvernFire_OnFire_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.BPCustomAllowAddBuff
struct ABuff_WyvernFire_OnFire_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.UserConstructionScript
struct ABuff_WyvernFire_OnFire_C_UserConstructionScript_Params
{
};

// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ExecuteUbergraph_Buff_WyvernFire_OnFire
struct ABuff_WyvernFire_OnFire_C_ExecuteUbergraph_Buff_WyvernFire_OnFire_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
