#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekLight_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekLight.TekLight_C.BPClientDoMultiUse
struct ATekLight_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekLight.TekLight_C.GetLampLight
struct ATekLight_C_GetLampLight_Params
{
	class ULightComponent*                             Light;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekLight.TekLight_C.Get Next Cycled LightIntensity Level
struct ATekLight_C_Get_Next_Cycled_LightIntensity_Level_Params
{
	int                                                nextLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekLight.TekLight_C.SetLampLightIntensity
struct ATekLight_C_SetLampLightIntensity_Params
{
	int                                                intensityLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekLight.TekLight_C.BPGetMultiUseEntries
struct ATekLight_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekLight.TekLight_C.BPRefreshedStructureColors
struct ATekLight_C_BPRefreshedStructureColors_Params
{
};

// Function TekLight.TekLight_C.UserConstructionScript
struct ATekLight_C_UserConstructionScript_Params
{
};

// Function TekLight.TekLight_C.ReceiveBeginPlay
struct ATekLight_C_ReceiveBeginPlay_Params
{
};

// Function TekLight.TekLight_C.Multi_SetLampLightIntensity
struct ATekLight_C_Multi_SetLampLightIntensity_Params
{
	int                                                newPowerLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekLight.TekLight_C.Client_SetLampLightIntensity
struct ATekLight_C_Client_SetLampLightIntensity_Params
{
	int                                                newPowerLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekLight.TekLight_C.ExecuteUbergraph_TekLight
struct ATekLight_C_ExecuteUbergraph_TekLight_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
