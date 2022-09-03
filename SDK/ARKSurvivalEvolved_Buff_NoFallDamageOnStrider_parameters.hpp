#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NoFallDamageOnStrider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_NoFallDamageOnStrider_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPCustomAllowAddBuff
struct ABuff_NoFallDamageOnStrider_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.UserConstructionScript
struct ABuff_NoFallDamageOnStrider_C_UserConstructionScript_Params
{
};

// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.ExecuteUbergraph_Buff_NoFallDamageOnStrider
struct ABuff_NoFallDamageOnStrider_C_ExecuteUbergraph_Buff_NoFallDamageOnStrider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
