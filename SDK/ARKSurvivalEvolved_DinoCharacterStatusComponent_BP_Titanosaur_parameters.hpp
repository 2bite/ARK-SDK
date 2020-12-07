#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Titanosaur_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Titanosaur.DinoCharacterStatusComponent_BP_Titanosaur_C.BPAdjustStatusValueModification
struct UDinoCharacterStatusComponent_BP_Titanosaur_C_BPAdjustStatusValueModification_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacterStatusComponent_BP_Titanosaur.DinoCharacterStatusComponent_BP_Titanosaur_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Titanosaur
struct UDinoCharacterStatusComponent_BP_Titanosaur_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Titanosaur_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
