#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Freeze_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Freeze.Buff_Freeze_C.BPPreventFirstPerson
struct ABuff_Freeze_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.GetBuffPostprocessIntensity
struct ABuff_Freeze_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.BPAdjustStatusValueModification
struct ABuff_Freeze_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.BPCustomAllowAddBuff
struct ABuff_Freeze_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.BuffTickClient
struct ABuff_Freeze_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.Initialize
struct ABuff_Freeze_C_Initialize_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.CreateMIC
struct ABuff_Freeze_C_CreateMIC_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.BuffTickServer
struct ABuff_Freeze_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.ApplyFrozenDebuff
struct ABuff_Freeze_C_ApplyFrozenDebuff_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.AddFreeze
struct ABuff_Freeze_C_AddFreeze_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.CheckDeactivateCondition
struct ABuff_Freeze_C_CheckDeactivateCondition_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.BPActivated
struct ABuff_Freeze_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.BPDeactivated
struct ABuff_Freeze_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.UserConstructionScript
struct ABuff_Freeze_C_UserConstructionScript_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.ChangeFreezingFX
struct ABuff_Freeze_C_ChangeFreezingFX_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.MultiExtendBuffTime
struct ABuff_Freeze_C_MultiExtendBuffTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.MultiCreateFrozenMIC
struct ABuff_Freeze_C_MultiCreateFrozenMIC_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.MultiAddFreeze
struct ABuff_Freeze_C_MultiAddFreeze_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze.Buff_Freeze_C.ReceiveBeginPlay
struct ABuff_Freeze_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.ApplyFrozen
struct ABuff_Freeze_C_ApplyFrozen_Params
{
};

// Function Buff_Freeze.Buff_Freeze_C.ExecuteUbergraph_Buff_Freeze
struct ABuff_Freeze_C_ExecuteUbergraph_Buff_Freeze_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
