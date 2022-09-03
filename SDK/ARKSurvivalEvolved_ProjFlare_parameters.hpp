#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFlare_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjFlare.ProjFlare_C.ReceiveBeginPlay
struct AProjFlare_C_ReceiveBeginPlay_Params
{
};

// Function ProjFlare.ProjFlare_C.ReceiveEndPlay
struct AProjFlare_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlare.ProjFlare_C.DestroySelf
struct AProjFlare_C_DestroySelf_Params
{
};

// Function ProjFlare.ProjFlare_C.UserConstructionScript
struct AProjFlare_C_UserConstructionScript_Params
{
};

// Function ProjFlare.ProjFlare_C.ExecuteUbergraph_ProjFlare
struct AProjFlare_C_ExecuteUbergraph_ProjFlare_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
