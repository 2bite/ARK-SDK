#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekSecurityConsole_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.OnConsoleUpdated
struct UPrimalInventoryBP_TekSecurityConsole_C_OnConsoleUpdated_Params
{
};

// Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.BPNotifyItemAdded
struct UPrimalInventoryBP_TekSecurityConsole_C_BPNotifyItemAdded_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C.ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole
struct UPrimalInventoryBP_TekSecurityConsole_C_ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
