#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoop_Shapeshifter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BP_IgnoreProjectileImpact
struct AProjPoop_Shapeshifter_C_BP_IgnoreProjectileImpact_Params
{
	struct FHitResult*                                 ImpactHit;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BPProjectileBounced
struct AProjPoop_Shapeshifter_C_BPProjectileBounced_Params
{
	struct FHitResult                                  ImpactResult;                                             // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpactVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ReceiveBeginPlay
struct AProjPoop_Shapeshifter_C_ReceiveBeginPlay_Params
{
};

// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.UserConstructionScript
struct AProjPoop_Shapeshifter_C_UserConstructionScript_Params
{
};

// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ExecuteUbergraph_ProjPoop_Shapeshifter
struct AProjPoop_Shapeshifter_C_ExecuteUbergraph_ProjPoop_Shapeshifter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
