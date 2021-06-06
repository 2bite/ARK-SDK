#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjZiplineAnchor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.CheckForInvisibleWall
struct AProjZiplineAnchor_C_CheckForInvisibleWall_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.HitValidForAttachment
struct AProjZiplineAnchor_C_HitValidForAttachment_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter
struct AProjZiplineAnchor_C_SpawnBreakEmitter_Params
{
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.UserConstructionScript
struct AProjZiplineAnchor_C_UserConstructionScript_Params
{
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveBeginPlay
struct AProjZiplineAnchor_C_ReceiveBeginPlay_Params
{
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveTick
struct AProjZiplineAnchor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.OnExplode
struct AProjZiplineAnchor_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveDestroyed
struct AProjZiplineAnchor_C_ReceiveDestroyed_Params
{
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter_Multicast
struct AProjZiplineAnchor_C_SpawnBreakEmitter_Multicast_Params
{
};

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ExecuteUbergraph_ProjZiplineAnchor
struct AProjZiplineAnchor_C_ExecuteUbergraph_ProjZiplineAnchor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
