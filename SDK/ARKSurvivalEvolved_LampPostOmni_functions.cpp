// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPostOmni_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LampPostOmni.LampPostOmni_C.Get Next Cycled LightIntensityLevel
// ()
// Parameters:
// int                            nextLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALampPostOmni_C::Get_Next_Cycled_LightIntensityLevel(int* nextLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.Get Next Cycled LightIntensityLevel");

	ALampPostOmni_C_Get_Next_Cycled_LightIntensityLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nextLevel != nullptr)
		*nextLevel = params.nextLevel;
}


// Function LampPostOmni.LampPostOmni_C.GetLampLight
// ()
// Parameters:
// class ULightComponent*         Light                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALampPostOmni_C::GetLampLight(class ULightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.GetLampLight");

	ALampPostOmni_C_GetLampLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function LampPostOmni.LampPostOmni_C.SetLampLightIntensity
// ()
// Parameters:
// int                            intensityLevel                 (Parm, ZeroConstructor, IsPlainOldData)

void ALampPostOmni_C::SetLampLightIntensity(int intensityLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.SetLampLightIntensity");

	ALampPostOmni_C_SetLampLightIntensity_Params params;
	params.intensityLevel = intensityLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostOmni.LampPostOmni_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ALampPostOmni_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.BPClientDoMultiUse");

	ALampPostOmni_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostOmni.LampPostOmni_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Event, NetResponse, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ALampPostOmni_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.BPGetMultiUseEntries");

	ALampPostOmni_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function LampPostOmni.LampPostOmni_C.BPRefreshedStructureColors
// ()

void ALampPostOmni_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.BPRefreshedStructureColors");

	ALampPostOmni_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostOmni.LampPostOmni_C.UserConstructionScript
// ()

void ALampPostOmni_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.UserConstructionScript");

	ALampPostOmni_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostOmni.LampPostOmni_C.ReceiveBeginPlay
// ()

void ALampPostOmni_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.ReceiveBeginPlay");

	ALampPostOmni_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostOmni.LampPostOmni_C.Multi_SetLampLightIntensity
// ()
// Parameters:
// int                            newPowerLevel                  (Parm, ZeroConstructor, IsPlainOldData)

void ALampPostOmni_C::Multi_SetLampLightIntensity(int newPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.Multi_SetLampLightIntensity");

	ALampPostOmni_C_Multi_SetLampLightIntensity_Params params;
	params.newPowerLevel = newPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostOmni.LampPostOmni_C.Client_SetLampLightIntensity
// ()
// Parameters:
// int                            newPowerLevel                  (Parm, ZeroConstructor, IsPlainOldData)

void ALampPostOmni_C::Client_SetLampLightIntensity(int newPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.Client_SetLampLightIntensity");

	ALampPostOmni_C_Client_SetLampLightIntensity_Params params;
	params.newPowerLevel = newPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostOmni.LampPostOmni_C.ExecuteUbergraph_LampPostOmni
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALampPostOmni_C::ExecuteUbergraph_LampPostOmni(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostOmni.LampPostOmni_C.ExecuteUbergraph_LampPostOmni");

	ALampPostOmni_C_ExecuteUbergraph_LampPostOmni_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
