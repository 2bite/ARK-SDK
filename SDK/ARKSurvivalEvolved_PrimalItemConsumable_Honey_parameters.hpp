#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Honey_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.BPNotifyDropped
struct UPrimalItemConsumable_Honey_C_BPNotifyDropped_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWasThrown;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.ExecuteUbergraph_PrimalItemConsumable_Honey
struct UPrimalItemConsumable_Honey_C_ExecuteUbergraph_PrimalItemConsumable_Honey_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
