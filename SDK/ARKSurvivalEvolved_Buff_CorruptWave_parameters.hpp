#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CorruptWave_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CorruptWave.Buff_CorruptWave_C.BuffTickServer
struct ABuff_CorruptWave_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CorruptWave.Buff_CorruptWave_C.BPAdjustStatusValueModification
struct ABuff_CorruptWave_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CorruptWave.Buff_CorruptWave_C.UserConstructionScript
struct ABuff_CorruptWave_C_UserConstructionScript_Params
{
};

// Function Buff_CorruptWave.Buff_CorruptWave_C.ExecuteUbergraph_Buff_CorruptWave
struct ABuff_CorruptWave_C_ExecuteUbergraph_Buff_CorruptWave_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
