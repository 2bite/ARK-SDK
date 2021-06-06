#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceDolphinBomb_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.BPIgnoreRadialDamageVictim
struct AProjSpaceDolphinBomb_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.UserConstructionScript
struct AProjSpaceDolphinBomb_C_UserConstructionScript_Params
{
};

// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveTick
struct AProjSpaceDolphinBomb_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveBeginPlay
struct AProjSpaceDolphinBomb_C_ReceiveBeginPlay_Params
{
};

// Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ExecuteUbergraph_ProjSpaceDolphinBomb
struct AProjSpaceDolphinBomb_C_ExecuteUbergraph_ProjSpaceDolphinBomb_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
