#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NotifyHoversailFollow_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BPGetHUDElements
struct ABuff_NotifyHoversailFollow_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.Set and Pass Loc
struct ABuff_NotifyHoversailFollow_C_Set_and_Pass_Loc_Params
{
};

// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickServer
struct ABuff_NotifyHoversailFollow_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickClient
struct ABuff_NotifyHoversailFollow_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.UserConstructionScript
struct ABuff_NotifyHoversailFollow_C_UserConstructionScript_Params
{
};

// Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.ExecuteUbergraph_Buff_NotifyHoversailFollow
struct ABuff_NotifyHoversailFollow_C_ExecuteUbergraph_Buff_NotifyHoversailFollow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
