#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Net_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjArrow_Net.ProjArrow_Net_C.OnExplode
struct AProjArrow_Net_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjArrow_Net.ProjArrow_Net_C.ReceiveBeginPlay
struct AProjArrow_Net_C_ReceiveBeginPlay_Params
{
};

// Function ProjArrow_Net.ProjArrow_Net_C.UserConstructionScript
struct AProjArrow_Net_C_UserConstructionScript_Params
{
};

// Function ProjArrow_Net.ProjArrow_Net_C.Multicast_OpenNet
struct AProjArrow_Net_C_Multicast_OpenNet_Params
{
};

// Function ProjArrow_Net.ProjArrow_Net_C.ExecuteUbergraph_ProjArrow_Net
struct AProjArrow_Net_C_ExecuteUbergraph_ProjArrow_Net_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
