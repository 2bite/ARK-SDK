#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggIncubatorInterface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
struct UEggIncubatorInterface_C_IsEggItemAllowed_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllowed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
struct UEggIncubatorInterface_C_GetItemDisplaySlot_Params
{
	class UPrimalItem*                                 ForItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSlot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SlotFound;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
