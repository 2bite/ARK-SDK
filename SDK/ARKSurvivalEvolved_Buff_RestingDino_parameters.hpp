#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RestingDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RestingDino.Buff_RestingDino_C.BuffTickServer
struct ABuff_RestingDino_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RestingDino.Buff_RestingDino_C.BPPreventCharacterStatusValueModifiers
struct ABuff_RestingDino_C_BPPreventCharacterStatusValueModifiers_Params
{
	class APrimalCharacter**                           ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RestingDino.Buff_RestingDino_C.UserConstructionScript
struct ABuff_RestingDino_C_UserConstructionScript_Params
{
};

// Function Buff_RestingDino.Buff_RestingDino_C.ExecuteUbergraph_Buff_RestingDino
struct ABuff_RestingDino_C_ExecuteUbergraph_Buff_RestingDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
