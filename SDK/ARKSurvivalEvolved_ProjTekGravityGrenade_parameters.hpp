#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekGravityGrenade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.UserConstructionScript
struct AProjTekGravityGrenade_C_UserConstructionScript_Params
{
};

// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.OnExplode
struct AProjTekGravityGrenade_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ApplyImpulseToDroppedItems
struct AProjTekGravityGrenade_C_ApplyImpulseToDroppedItems_Params
{
	TArray<class ADroppedItem*>                        Items;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     EffectOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ReceiveBeginPlay
struct AProjTekGravityGrenade_C_ReceiveBeginPlay_Params
{
};

// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ExecuteUbergraph_ProjTekGravityGrenade
struct AProjTekGravityGrenade_C_ExecuteUbergraph_ProjTekGravityGrenade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
