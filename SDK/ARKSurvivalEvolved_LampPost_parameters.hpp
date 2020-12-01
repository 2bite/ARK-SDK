#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPost_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LampPost.LampPost_C.BPClientDoMultiUse
struct ALampPost_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPost.LampPost_C.GetLampLight
struct ALampPost_C_GetLampLight_Params
{
	class ULightComponent*                             Light;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LampPost.LampPost_C.Get Next Cycled LightIntensity Level
struct ALampPost_C_Get_Next_Cycled_LightIntensity_Level_Params
{
	int                                                nextLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LampPost.LampPost_C.SetLampLightIntensity
struct ALampPost_C_SetLampLightIntensity_Params
{
	int                                                intensityLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPost.LampPost_C.BPGetMultiUseEntries
struct ALampPost_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LampPost.LampPost_C.BPRefreshedStructureColors
struct ALampPost_C_BPRefreshedStructureColors_Params
{
};

// Function LampPost.LampPost_C.UserConstructionScript
struct ALampPost_C_UserConstructionScript_Params
{
};

// Function LampPost.LampPost_C.ReceiveBeginPlay
struct ALampPost_C_ReceiveBeginPlay_Params
{
};

// Function LampPost.LampPost_C.Multi_SetLampLightIntensity
struct ALampPost_C_Multi_SetLampLightIntensity_Params
{
	int                                                newPowerLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPost.LampPost_C.Client_SetLampLightIntensity
struct ALampPost_C_Client_SetLampLightIntensity_Params
{
	int                                                newPowerLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPost.LampPost_C.ExecuteUbergraph_LampPost
struct ALampPost_C_ExecuteUbergraph_LampPost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
