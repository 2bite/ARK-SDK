#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Fjordhawk_Retrieval_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.BPAllowAddInventoryItem
struct UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_BPAllowAddInventoryItem_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RequestedQuantity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOnlyAddAll;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval
struct UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
