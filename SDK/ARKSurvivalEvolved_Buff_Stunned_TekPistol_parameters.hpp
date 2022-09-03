#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_TekPistol_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPCheckPreventInput
struct ABuff_Stunned_TekPistol_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPCustomAllowAddBuff
struct ABuff_Stunned_TekPistol_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPDeactivated
struct ABuff_Stunned_TekPistol_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPSetupForInstigator
struct ABuff_Stunned_TekPistol_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.UserConstructionScript
struct ABuff_Stunned_TekPistol_C_UserConstructionScript_Params
{
};

// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.ExecuteUbergraph_Buff_Stunned_TekPistol
struct ABuff_Stunned_TekPistol_C_ExecuteUbergraph_Buff_Stunned_TekPistol_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
