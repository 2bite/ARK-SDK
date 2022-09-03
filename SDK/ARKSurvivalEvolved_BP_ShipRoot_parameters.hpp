#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ShipRoot_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShipRoot.BP_ShipRoot_C.GetMatineeLengthsAndPlayRates
struct ABP_ShipRoot_C_GetMatineeLengthsAndPlayRates_Params
{
	struct FVector2D                                   WarmUp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Cooldown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipRoot.BP_ShipRoot_C.BindDCM
struct ABP_ShipRoot_C_BindDCM_Params
{
};

// Function BP_ShipRoot.BP_ShipRoot_C.UserConstructionScript
struct ABP_ShipRoot_C_UserConstructionScript_Params
{
};

// Function BP_ShipRoot.BP_ShipRoot_C.BindMatineeUpdateFromDCM
struct ABP_ShipRoot_C_BindMatineeUpdateFromDCM_Params
{
};

// Function BP_ShipRoot.BP_ShipRoot_C.OnDCMUpdated
struct ABP_ShipRoot_C_OnDCMUpdated_Params
{
};

// Function BP_ShipRoot.BP_ShipRoot_C.ReceiveBeginPlay
struct ABP_ShipRoot_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShipRoot.BP_ShipRoot_C.RecieveMatineeUpdated
struct ABP_ShipRoot_C_RecieveMatineeUpdated_Params
{
};

// Function BP_ShipRoot.BP_ShipRoot_C.ExecuteUbergraph_BP_ShipRoot
struct ABP_ShipRoot_C_ExecuteUbergraph_BP_ShipRoot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
