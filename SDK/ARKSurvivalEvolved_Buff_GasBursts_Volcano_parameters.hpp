#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBursts_Volcano_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GasBursts_Volcano.Buff_GasBursts_Volcano_C.BPAdjustStatusValueModification
struct ABuff_GasBursts_Volcano_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_GasBursts_Volcano.Buff_GasBursts_Volcano_C.BPDeactivated
struct ABuff_GasBursts_Volcano_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GasBursts_Volcano.Buff_GasBursts_Volcano_C.UserConstructionScript
struct ABuff_GasBursts_Volcano_C_UserConstructionScript_Params
{
};

// Function Buff_GasBursts_Volcano.Buff_GasBursts_Volcano_C.ExecuteUbergraph_Buff_GasBursts_Volcano
struct ABuff_GasBursts_Volcano_C_ExecuteUbergraph_Buff_GasBursts_Volcano_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
