#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoop_Dinopithecus_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ReceiveTick
struct AProjPoop_Dinopithecus_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.PreventExplosionEmitter
struct AProjPoop_Dinopithecus_C_PreventExplosionEmitter_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.UserConstructionScript
struct AProjPoop_Dinopithecus_C_UserConstructionScript_Params
{
};

// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ExecuteUbergraph_ProjPoop_Dinopithecus
struct AProjPoop_Dinopithecus_C_ExecuteUbergraph_ProjPoop_Dinopithecus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
