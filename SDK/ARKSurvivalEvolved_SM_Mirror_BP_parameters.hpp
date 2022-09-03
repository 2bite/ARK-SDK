#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_Mirror_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SM_Mirror_BP.SM_Mirror_BP_C.CanUseRenderTarget
struct ASM_Mirror_BP_C_CanUseRenderTarget_Params
{
	bool                                               Can_Use;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.GetMirrorBlend
struct ASM_Mirror_BP_C_GetMirrorBlend_Params
{
	float                                              CurrentMirrorBlend;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveDestroyed
struct ASM_Mirror_BP_C_ReceiveDestroyed_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.SetMirrorBlend
struct ASM_Mirror_BP_C_SetMirrorBlend_Params
{
	float                                              NewMirrorBlend;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.UserConstructionScript
struct ASM_Mirror_BP_C_UserConstructionScript_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveBeginPlay
struct ASM_Mirror_BP_C_ReceiveBeginPlay_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.ForcedTick
struct ASM_Mirror_BP_C_ForcedTick_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.DistanceCheck
struct ASM_Mirror_BP_C_DistanceCheck_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.OnSemaphoreTaken_Event
struct ASM_Mirror_BP_C_OnSemaphoreTaken_Event_Params
{
	struct FName                                       SemaphoreName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveActorBeginOverlap
struct ASM_Mirror_BP_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.DestroyMirror
struct ASM_Mirror_BP_C_DestroyMirror_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.LerpMirrorBlend
struct ASM_Mirror_BP_C_LerpMirrorBlend_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.FadeOutDestroy
struct ASM_Mirror_BP_C_FadeOutDestroy_Params
{
};

// Function SM_Mirror_BP.SM_Mirror_BP_C.ExecuteUbergraph_SM_Mirror_BP
struct ASM_Mirror_BP_C_ExecuteUbergraph_SM_Mirror_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
