#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjLiquidBomb_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjLiquidBomb.ProjLiquidBomb_C.UserConstructionScript
struct AProjLiquidBomb_C_UserConstructionScript_Params
{
};

// Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveTick
struct AProjLiquidBomb_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveBeginPlay
struct AProjLiquidBomb_C_ReceiveBeginPlay_Params
{
};

// Function ProjLiquidBomb.ProjLiquidBomb_C.ReceiveEndPlay
struct AProjLiquidBomb_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjLiquidBomb.ProjLiquidBomb_C.ExecuteUbergraph_ProjLiquidBomb
struct AProjLiquidBomb_C_ExecuteUbergraph_ProjLiquidBomb_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
