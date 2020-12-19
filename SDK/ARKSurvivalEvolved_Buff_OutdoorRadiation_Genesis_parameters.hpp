#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OutdoorRadiation_Genesis_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPPreventAddingOtherBuff
struct ABuff_OutdoorRadiation_Genesis_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.Get Max Health
struct ABuff_OutdoorRadiation_Genesis_C_Get_Max_Health_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.GetDamageMitigationArmorEquippedCount
struct ABuff_OutdoorRadiation_Genesis_C_GetDamageMitigationArmorEquippedCount_Params
{
	int                                                NumItemsEquipped;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.DamageDurability
struct ABuff_OutdoorRadiation_Genesis_C_DamageDurability_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.RemoveBuffs
struct ABuff_OutdoorRadiation_Genesis_C_RemoveBuffs_Params
{
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPActivated
struct ABuff_OutdoorRadiation_Genesis_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BuffTickServer
struct ABuff_OutdoorRadiation_Genesis_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.UserConstructionScript
struct ABuff_OutdoorRadiation_Genesis_C_UserConstructionScript_Params
{
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__FinishedFunc
struct ABuff_OutdoorRadiation_Genesis_C_LocalParticleFadeout__FinishedFunc_Params
{
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__UpdateFunc
struct ABuff_OutdoorRadiation_Genesis_C_LocalParticleFadeout__UpdateFunc_Params
{
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ReceiveBeginPlay
struct ABuff_OutdoorRadiation_Genesis_C_ReceiveBeginPlay_Params
{
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPDeactivated
struct ABuff_OutdoorRadiation_Genesis_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ExecuteUbergraph_Buff_OutdoorRadiation_Genesis
struct ABuff_OutdoorRadiation_Genesis_C_ExecuteUbergraph_Buff_OutdoorRadiation_Genesis_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
