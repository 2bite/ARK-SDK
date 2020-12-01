#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.AttachBuffToPlant
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_AttachBuffToPlant_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.InitializeEmitter
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_InitializeEmitter_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UpdateLightIntensity
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_UpdateLightIntensity_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.BuffTickClient
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ChargeVariableEvent
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>*                variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double*                                            dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetLightTargetIntensity
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_GetLightTargetIntensity_Params
{
	float                                              targetIntensity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetEmitterLineTraceOrigin
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_GetEmitterLineTraceOrigin_Params
{
	class AActor**                                     emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     lineTraceOrigin;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UserConstructionScript
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__FinishedFunc
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeIn__FinishedFunc_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__UpdateFunc
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeIn__UpdateFunc_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__FinishedFunc
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeOut__FinishedFunc_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__UpdateFunc
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeOut__UpdateFunc_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeInLight
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_FadeInLight_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeOutLight
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_FadeOutLight_Params
{
};

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base
struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
