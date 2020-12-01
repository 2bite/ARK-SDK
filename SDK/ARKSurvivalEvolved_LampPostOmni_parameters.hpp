#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPostOmni_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LampPostOmni.LampPostOmni_C.Get Next Cycled LightIntensityLevel
struct ALampPostOmni_C_Get_Next_Cycled_LightIntensityLevel_Params
{
	int                                                nextLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LampPostOmni.LampPostOmni_C.GetLampLight
struct ALampPostOmni_C_GetLampLight_Params
{
	class ULightComponent*                             Light;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LampPostOmni.LampPostOmni_C.SetLampLightIntensity
struct ALampPostOmni_C_SetLampLightIntensity_Params
{
	int                                                intensityLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPostOmni.LampPostOmni_C.BPClientDoMultiUse
struct ALampPostOmni_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPostOmni.LampPostOmni_C.BPGetMultiUseEntries
struct ALampPostOmni_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LampPostOmni.LampPostOmni_C.BPRefreshedStructureColors
struct ALampPostOmni_C_BPRefreshedStructureColors_Params
{
};

// Function LampPostOmni.LampPostOmni_C.UserConstructionScript
struct ALampPostOmni_C_UserConstructionScript_Params
{
};

// Function LampPostOmni.LampPostOmni_C.ReceiveBeginPlay
struct ALampPostOmni_C_ReceiveBeginPlay_Params
{
};

// Function LampPostOmni.LampPostOmni_C.Multi_SetLampLightIntensity
struct ALampPostOmni_C_Multi_SetLampLightIntensity_Params
{
	int                                                newPowerLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPostOmni.LampPostOmni_C.Client_SetLampLightIntensity
struct ALampPostOmni_C_Client_SetLampLightIntensity_Params
{
	int                                                newPowerLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LampPostOmni.LampPostOmni_C.ExecuteUbergraph_LampPostOmni
struct ALampPostOmni_C_ExecuteUbergraph_LampPostOmni_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
