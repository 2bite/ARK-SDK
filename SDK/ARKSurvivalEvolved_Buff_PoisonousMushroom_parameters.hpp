#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousMushroom_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.BuffTickServer
struct ABuff_PoisonousMushroom_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.BPAdjustStatusValueModification
struct ABuff_PoisonousMushroom_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.UserConstructionScript
struct ABuff_PoisonousMushroom_C_UserConstructionScript_Params
{
};

// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.ExecuteUbergraph_Buff_PoisonousMushroom
struct ABuff_PoisonousMushroom_C_ExecuteUbergraph_Buff_PoisonousMushroom_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
