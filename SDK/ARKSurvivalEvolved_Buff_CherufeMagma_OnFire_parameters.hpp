#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CherufeMagma_OnFire_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.ReceiveTick
struct ABuff_CherufeMagma_OnFire_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.BPCustomAllowAddBuff
struct ABuff_CherufeMagma_OnFire_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.UserConstructionScript
struct ABuff_CherufeMagma_OnFire_C_UserConstructionScript_Params
{
};

// Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.ExecuteUbergraph_Buff_CherufeMagma_OnFire
struct ABuff_CherufeMagma_OnFire_C_ExecuteUbergraph_Buff_CherufeMagma_OnFire_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
