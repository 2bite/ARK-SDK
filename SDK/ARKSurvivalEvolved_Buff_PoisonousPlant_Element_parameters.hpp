#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousPlant_Element_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.BPSetupForInstigator
struct ABuff_PoisonousPlant_Element_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.BPActivated
struct ABuff_PoisonousPlant_Element_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.BPAdjustStatusValueModification
struct ABuff_PoisonousPlant_Element_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.UserConstructionScript
struct ABuff_PoisonousPlant_Element_C_UserConstructionScript_Params
{
};

// Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.ExecuteUbergraph_Buff_PoisonousPlant_Element
struct ABuff_PoisonousPlant_Element_C_ExecuteUbergraph_Buff_PoisonousPlant_Element_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
