#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Sunlight_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Sunlight.Buff_Sunlight_C.BPPreventAddingOtherBuff
struct ABuff_Sunlight_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Sunlight.Buff_Sunlight_C.Get Max Health
struct ABuff_Sunlight_C_Get_Max_Health_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Sunlight.Buff_Sunlight_C.GetDamageMitigationArmorEquippedCount
struct ABuff_Sunlight_C_GetDamageMitigationArmorEquippedCount_Params
{
	int                                                NumItemsEquipped;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Sunlight.Buff_Sunlight_C.DamageDurability
struct ABuff_Sunlight_C_DamageDurability_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Sunlight.Buff_Sunlight_C.RemoveBuffs
struct ABuff_Sunlight_C_RemoveBuffs_Params
{
};

// Function Buff_Sunlight.Buff_Sunlight_C.BPActivated
struct ABuff_Sunlight_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Sunlight.Buff_Sunlight_C.BuffTickServer
struct ABuff_Sunlight_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Sunlight.Buff_Sunlight_C.UserConstructionScript
struct ABuff_Sunlight_C_UserConstructionScript_Params
{
};

// Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__FinishedFunc
struct ABuff_Sunlight_C_LocalParticleFadeout__FinishedFunc_Params
{
};

// Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__UpdateFunc
struct ABuff_Sunlight_C_LocalParticleFadeout__UpdateFunc_Params
{
};

// Function Buff_Sunlight.Buff_Sunlight_C.ReceiveBeginPlay
struct ABuff_Sunlight_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Sunlight.Buff_Sunlight_C.BPDeactivated
struct ABuff_Sunlight_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Sunlight.Buff_Sunlight_C.ExecuteUbergraph_Buff_Sunlight
struct ABuff_Sunlight_C_ExecuteUbergraph_Buff_Sunlight_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
