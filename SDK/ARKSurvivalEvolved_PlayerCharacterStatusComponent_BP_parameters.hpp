#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerCharacterStatusComponent_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxExperiencePoints
struct UPlayerCharacterStatusComponent_BP_C_BPModifyMaxExperiencePoints_Params
{
	float*                                             InMaxExperiencePoints;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxLevel
struct UPlayerCharacterStatusComponent_BP_C_BPModifyMaxLevel_Params
{
	int*                                               InMaxLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.ExecuteUbergraph_PlayerCharacterStatusComponent_BP
struct UPlayerCharacterStatusComponent_BP_C_ExecuteUbergraph_PlayerCharacterStatusComponent_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
