// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.AttachBuffToPlant
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::AttachBuffToPlant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.AttachBuffToPlant");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_AttachBuffToPlant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.InitializeEmitter
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::InitializeEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.InitializeEmitter");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_InitializeEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UpdateLightIntensity
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::UpdateLightIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UpdateLightIntensity");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_UpdateLightIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.BuffTickClient");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames>* variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double*                        dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ChargeVariableEvent");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetLightTargetIntensity
// ()
// Parameters:
// float                          targetIntensity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::GetLightTargetIntensity(float* targetIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetLightTargetIntensity");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_GetLightTargetIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetIntensity != nullptr)
		*targetIntensity = params.targetIntensity;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetEmitterLineTraceOrigin
// ()
// Parameters:
// class AActor**                 emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 lineTraceOrigin                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::GetEmitterLineTraceOrigin(class AActor** emitterActor, struct FVector* lineTraceOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetEmitterLineTraceOrigin");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_GetEmitterLineTraceOrigin_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lineTraceOrigin != nullptr)
		*lineTraceOrigin = params.lineTraceOrigin;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UserConstructionScript
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UserConstructionScript");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__FinishedFunc
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::LightFadeIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__FinishedFunc");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__UpdateFunc
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::LightFadeIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__UpdateFunc");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__FinishedFunc
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::LightFadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__FinishedFunc");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__UpdateFunc
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::LightFadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__UpdateFunc");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeInLight
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::FadeInLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeInLight");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_FadeInLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeOutLight
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::FadeOutLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeOutLight");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_FadeOutLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C::ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
