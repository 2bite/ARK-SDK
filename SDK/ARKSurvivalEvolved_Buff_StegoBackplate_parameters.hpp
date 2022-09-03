#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoBackplate_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_StegoBackplate.Buff_StegoBackplate_C.BPAdjustStatusValueModification
struct ABuff_StegoBackplate_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBuffDescription
struct ABuff_StegoBackplate_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_StegoBackplate.Buff_StegoBackplate_C.Set Backplate Mode
struct ABuff_StegoBackplate_C_Set_Backplate_Mode_Params
{
	TEnumAsByte<E_StegoBackplateMode>                  StegoBackplateMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBackplateMode
struct ABuff_StegoBackplate_C_GetBackplateMode_Params
{
	TEnumAsByte<E_StegoBackplateMode>                  BackplateMode;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StegoBackplate.Buff_StegoBackplate_C.UserConstructionScript
struct ABuff_StegoBackplate_C_UserConstructionScript_Params
{
};

// Function Buff_StegoBackplate.Buff_StegoBackplate_C.ExecuteUbergraph_Buff_StegoBackplate
struct ABuff_StegoBackplate_C_ExecuteUbergraph_Buff_StegoBackplate_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
