#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Female_LFL_Maxcombo_Parent_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.CalculateDoTDamage
struct ABuff_Female_LFL_Maxcombo_Parent_C_CalculateDoTDamage_Params
{
	float                                              TimeSinceLastDoT;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BuffTickServer
struct ABuff_Female_LFL_Maxcombo_Parent_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.Do Damage Over TimeFn
struct ABuff_Female_LFL_Maxcombo_Parent_C_Do_Damage_Over_TimeFn_Params
{
	double                                             LastDotTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BPAdjustStatusValueModification
struct ABuff_Female_LFL_Maxcombo_Parent_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveBeginPlay
struct ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveEndPlay
struct ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.UserConstructionScript
struct ABuff_Female_LFL_Maxcombo_Parent_C_UserConstructionScript_Params
{
};

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent
struct ABuff_Female_LFL_Maxcombo_Parent_C_ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
