#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FishingNetXrayVision_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPGetHUDElements
struct ABuff_FishingNetXrayVision_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.clear caught animals
struct ABuff_FishingNetXrayVision_C_clear_caught_animals_Params
{
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.Set All Components Render Custom Depth
struct ABuff_FishingNetXrayVision_C_Set_All_Components_Render_Custom_Depth_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               render_custom_depth;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.Set All Components Custom Depth Stencil Value
struct ABuff_FishingNetXrayVision_C_Set_All_Components_Custom_Depth_Stencil_Value_Params
{
	int                                                Stencil_Value;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickClient
struct ABuff_FishingNetXrayVision_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BuffTickServer
struct ABuff_FishingNetXrayVision_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ReceiveBeginPlay
struct ABuff_FishingNetXrayVision_C_ReceiveBeginPlay_Params
{
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.BPDeactivated
struct ABuff_FishingNetXrayVision_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.UserConstructionScript
struct ABuff_FishingNetXrayVision_C_UserConstructionScript_Params
{
};

// Function Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C.ExecuteUbergraph_Buff_FishingNetXrayVision
struct ABuff_FishingNetXrayVision_C_ExecuteUbergraph_Buff_FishingNetXrayVision_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
