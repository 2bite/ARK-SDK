#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Clear in SPZ
struct AGen2_AreaBuff_Base_C_Clear_in_SPZ_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetInSPZ
struct AGen2_AreaBuff_Base_C_SetInSPZ_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.CheckOverhang
struct AGen2_AreaBuff_Base_C_CheckOverhang_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateClouds
struct AGen2_AreaBuff_Base_C_UpdateClouds_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.GetClosestStormIntensity
struct AGen2_AreaBuff_Base_C_GetClosestStormIntensity_Params
{
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateLocalTransform
struct AGen2_AreaBuff_Base_C_UpdateLocalTransform_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPGetHUDElements
struct AGen2_AreaBuff_Base_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SwitchAudioWaterAndCave
struct AGen2_AreaBuff_Base_C_SwitchAudioWaterAndCave_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickServer
struct AGen2_AreaBuff_Base_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickClient
struct AGen2_AreaBuff_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetParticleVis
struct AGen2_AreaBuff_Base_C_SetParticleVis_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.LocalEffects
struct AGen2_AreaBuff_Base_C_LocalEffects_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPPreventRunning
struct AGen2_AreaBuff_Base_C_BPPreventRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPCustomAllowAddBuff
struct AGen2_AreaBuff_Base_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UserConstructionScript
struct AGen2_AreaBuff_Base_C_UserConstructionScript_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__FinishedFunc
struct AGen2_AreaBuff_Base_C_Timeline_0__FinishedFunc_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__UpdateFunc
struct AGen2_AreaBuff_Base_C_Timeline_0__UpdateFunc_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ReceiveBeginPlay
struct AGen2_AreaBuff_Base_C_ReceiveBeginPlay_Params
{
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.OnPlayerStatusUpdate
struct AGen2_AreaBuff_Base_C_OnPlayerStatusUpdate_Params
{
	bool                                               IsInCave;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderwater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPDeactivated
struct AGen2_AreaBuff_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPSetupForInstigator
struct AGen2_AreaBuff_Base_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Blend_Visuals
struct AGen2_AreaBuff_Base_C_Blend_Visuals_Params
{
	float                                              currentIntensity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ExecuteUbergraph_Gen2_AreaBuff_Base
struct AGen2_AreaBuff_Base_C_ExecuteUbergraph_Gen2_AreaBuff_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
