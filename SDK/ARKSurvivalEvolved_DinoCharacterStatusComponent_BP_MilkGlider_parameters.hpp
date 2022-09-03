#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_MilkGlider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_MilkGlider.DinoCharacterStatusComponent_BP_MilkGlider_C.BPAdjustStatusValueModification
struct UDinoCharacterStatusComponent_BP_MilkGlider_C_BPAdjustStatusValueModification_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacterStatusComponent_BP_MilkGlider.DinoCharacterStatusComponent_BP_MilkGlider_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_MilkGlider
struct UDinoCharacterStatusComponent_BP_MilkGlider_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_MilkGlider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
