#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekShoulderCannon_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.BPIgnoreRadialDamageVictim
struct AProjTekShoulderCannon_Base_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.UserConstructionScript
struct AProjTekShoulderCannon_Base_C_UserConstructionScript_Params
{
};

// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ReceiveBeginPlay
struct AProjTekShoulderCannon_Base_C_ReceiveBeginPlay_Params
{
};

// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.OnExplode
struct AProjTekShoulderCannon_Base_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ExecuteUbergraph_ProjTekShoulderCannon_Base
struct AProjTekShoulderCannon_Base_C_ExecuteUbergraph_ProjTekShoulderCannon_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
