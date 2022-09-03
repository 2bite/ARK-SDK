#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_DinoPawn_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.IsDotProductValid
struct ABuff_Flashbang_DinoPawn_C_IsDotProductValid_Params
{
};

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPPreSetupForInstigator
struct ABuff_Flashbang_DinoPawn_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPSetupForInstigator
struct ABuff_Flashbang_DinoPawn_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.PlayStartledAnim
struct ABuff_Flashbang_DinoPawn_C_PlayStartledAnim_Params
{
};

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPCheckPreventInput
struct ABuff_Flashbang_DinoPawn_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.UserConstructionScript
struct ABuff_Flashbang_DinoPawn_C_UserConstructionScript_Params
{
};

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPActivated
struct ABuff_Flashbang_DinoPawn_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.ExecuteUbergraph_Buff_Flashbang_DinoPawn
struct ABuff_Flashbang_DinoPawn_C_ExecuteUbergraph_Buff_Flashbang_DinoPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
