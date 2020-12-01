#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBursts_Bog_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.BPAdjustStatusValueModification
struct ABuff_GasBursts_Bog_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.BPDeactivated
struct ABuff_GasBursts_Bog_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.UserConstructionScript
struct ABuff_GasBursts_Bog_C_UserConstructionScript_Params
{
};

// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.ExecuteUbergraph_Buff_GasBursts_Bog
struct ABuff_GasBursts_Bog_C_ExecuteUbergraph_Buff_GasBursts_Bog_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
