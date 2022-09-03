#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Tropeognathus_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.BPRemoteInventoryAllowViewing
struct UDinoTamedInventoryComponent_Tropeognathus_C_BPRemoteInventoryAllowViewing_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItems
struct UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItem
struct UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItem_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus
struct UDinoTamedInventoryComponent_Tropeognathus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
