#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChalicoSit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChalicoSit.Buff_ChalicoSit_C.BuffTickServer
struct ABuff_ChalicoSit_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChalicoSit.Buff_ChalicoSit_C.BPPreventCharacterStatusValueModifiers
struct ABuff_ChalicoSit_C_BPPreventCharacterStatusValueModifiers_Params
{
	class APrimalCharacter**                           ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ChalicoSit.Buff_ChalicoSit_C.UserConstructionScript
struct ABuff_ChalicoSit_C_UserConstructionScript_Params
{
};

// Function Buff_ChalicoSit.Buff_ChalicoSit_C.ExecuteUbergraph_Buff_ChalicoSit
struct ABuff_ChalicoSit_C_ExecuteUbergraph_Buff_ChalicoSit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
