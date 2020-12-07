#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ShoulderCannon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.HasAmmoOrElement
struct UPrimalItemArmor_ShoulderCannon_C_HasAmmoOrElement_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ConsumeAmmo
struct UPrimalItemArmor_ShoulderCannon_C_ConsumeAmmo_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpdatedAmount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.GetBuff
struct UPrimalItemArmor_ShoulderCannon_C_GetBuff_Params
{
};

// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.InitBuff
struct UPrimalItemArmor_ShoulderCannon_C_InitBuff_Params
{
};

// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.BPAddedAttachments
struct UPrimalItemArmor_ShoulderCannon_C_BPAddedAttachments_Params
{
};

// Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ExecuteUbergraph_PrimalItemArmor_ShoulderCannon
struct UPrimalItemArmor_ShoulderCannon_C_ExecuteUbergraph_PrimalItemArmor_ShoulderCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
