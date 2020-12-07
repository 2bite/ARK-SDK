#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Iguanodon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemAdded
struct UDinoTamedInventoryComponent_Iguanodon_C_BPNotifyItemAdded_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemRemoved
struct UDinoTamedInventoryComponent_Iguanodon_C_BPNotifyItemRemoved_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon
struct UDinoTamedInventoryComponent_Iguanodon_C_ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
