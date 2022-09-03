#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Basil_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Basil.DinoCharacterStatusComponent_BP_Basil_C.BPAdjustStatusValueModification
struct UDinoCharacterStatusComponent_BP_Basil_C_BPAdjustStatusValueModification_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacterStatusComponent_BP_Basil.DinoCharacterStatusComponent_BP_Basil_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Basil
struct UDinoCharacterStatusComponent_BP_Basil_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Basil_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
