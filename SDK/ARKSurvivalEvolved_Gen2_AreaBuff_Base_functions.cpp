// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Clear in SPZ
// ()

void AGen2_AreaBuff_Base_C::Clear_in_SPZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Clear in SPZ");

	AGen2_AreaBuff_Base_C_Clear_in_SPZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetInSPZ
// ()

void AGen2_AreaBuff_Base_C::SetInSPZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetInSPZ");

	AGen2_AreaBuff_Base_C_SetInSPZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.CheckOverhang
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)

void AGen2_AreaBuff_Base_C::STATIC_CheckOverhang()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.CheckOverhang");

	AGen2_AreaBuff_Base_C_CheckOverhang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateClouds
// ()

void AGen2_AreaBuff_Base_C::UpdateClouds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateClouds");

	AGen2_AreaBuff_Base_C_UpdateClouds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.GetClosestStormIntensity
// ()
// Parameters:
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::GetClosestStormIntensity(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.GetClosestStormIntensity");

	AGen2_AreaBuff_Base_C_GetClosestStormIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateLocalTransform
// ()

void AGen2_AreaBuff_Base_C::UpdateLocalTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UpdateLocalTransform");

	AGen2_AreaBuff_Base_C_UpdateLocalTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AGen2_AreaBuff_Base_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPGetHUDElements");

	AGen2_AreaBuff_Base_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SwitchAudioWaterAndCave
// ()

void AGen2_AreaBuff_Base_C::SwitchAudioWaterAndCave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SwitchAudioWaterAndCave");

	AGen2_AreaBuff_Base_C_SwitchAudioWaterAndCave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickServer");

	AGen2_AreaBuff_Base_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BuffTickClient");

	AGen2_AreaBuff_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetParticleVis
// ()

void AGen2_AreaBuff_Base_C::SetParticleVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.SetParticleVis");

	AGen2_AreaBuff_Base_C_SetParticleVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.LocalEffects
// ()

void AGen2_AreaBuff_Base_C::LocalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.LocalEffects");

	AGen2_AreaBuff_Base_C_LocalEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPPreventRunning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen2_AreaBuff_Base_C::BPPreventRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPPreventRunning");

	AGen2_AreaBuff_Base_C_BPPreventRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen2_AreaBuff_Base_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPCustomAllowAddBuff");

	AGen2_AreaBuff_Base_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UserConstructionScript
// ()

void AGen2_AreaBuff_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.UserConstructionScript");

	AGen2_AreaBuff_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__FinishedFunc
// ()

void AGen2_AreaBuff_Base_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__FinishedFunc");

	AGen2_AreaBuff_Base_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__UpdateFunc
// ()

void AGen2_AreaBuff_Base_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Timeline_0__UpdateFunc");

	AGen2_AreaBuff_Base_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ReceiveBeginPlay
// ()

void AGen2_AreaBuff_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ReceiveBeginPlay");

	AGen2_AreaBuff_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.OnPlayerStatusUpdate
// ()
// Parameters:
// bool                           IsInCave                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnderwater                   (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::OnPlayerStatusUpdate(bool IsInCave, bool IsUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.OnPlayerStatusUpdate");

	AGen2_AreaBuff_Base_C_OnPlayerStatusUpdate_Params params;
	params.IsInCave = IsInCave;
	params.IsUnderwater = IsUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPDeactivated");

	AGen2_AreaBuff_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.BPSetupForInstigator");

	AGen2_AreaBuff_Base_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Blend_Visuals
// ()
// Parameters:
// float                          currentIntensity               (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::Blend_Visuals(float currentIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.Blend_Visuals");

	AGen2_AreaBuff_Base_C_Blend_Visuals_Params params;
	params.currentIntensity = currentIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ExecuteUbergraph_Gen2_AreaBuff_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Base_C::ExecuteUbergraph_Gen2_AreaBuff_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Base.Gen2_AreaBuff_Base_C.ExecuteUbergraph_Gen2_AreaBuff_Base");

	AGen2_AreaBuff_Base_C_ExecuteUbergraph_Gen2_AreaBuff_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
