#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SuffocateRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SuffocateRider.Buff_SuffocateRider_C.BPAdjustStatusValueModification
struct ABuff_SuffocateRider_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SuffocateRider.Buff_SuffocateRider_C.BPCheckPreventInput
struct ABuff_SuffocateRider_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SuffocateRider.Buff_SuffocateRider_C.UserConstructionScript
struct ABuff_SuffocateRider_C_UserConstructionScript_Params
{
};

// Function Buff_SuffocateRider.Buff_SuffocateRider_C.ExecuteUbergraph_Buff_SuffocateRider
struct ABuff_SuffocateRider_C_ExecuteUbergraph_Buff_SuffocateRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
