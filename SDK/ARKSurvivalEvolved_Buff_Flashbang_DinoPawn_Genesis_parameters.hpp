#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_DinoPawn_Genesis_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.IsDotProductValid
struct ABuff_Flashbang_DinoPawn_Genesis_C_IsDotProductValid_Params
{
};

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPPreSetupForInstigator
struct ABuff_Flashbang_DinoPawn_Genesis_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPSetupForInstigator
struct ABuff_Flashbang_DinoPawn_Genesis_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.PlayStartledAnim
struct ABuff_Flashbang_DinoPawn_Genesis_C_PlayStartledAnim_Params
{
};

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPCheckPreventInput
struct ABuff_Flashbang_DinoPawn_Genesis_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.UserConstructionScript
struct ABuff_Flashbang_DinoPawn_Genesis_C_UserConstructionScript_Params
{
};

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPActivated
struct ABuff_Flashbang_DinoPawn_Genesis_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis
struct ABuff_Flashbang_DinoPawn_Genesis_C_ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
