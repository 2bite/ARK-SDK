// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekLight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekLight.TekLight_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekLight_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.BPClientDoMultiUse");

	ATekLight_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLight.TekLight_C.GetLampLight
// ()
// Parameters:
// class ULightComponent*         Light                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekLight_C::GetLampLight(class ULightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.GetLampLight");

	ATekLight_C_GetLampLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function TekLight.TekLight_C.Get Next Cycled LightIntensity Level
// ()
// Parameters:
// int                            nextLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekLight_C::Get_Next_Cycled_LightIntensity_Level(int* nextLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.Get Next Cycled LightIntensity Level");

	ATekLight_C_Get_Next_Cycled_LightIntensity_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nextLevel != nullptr)
		*nextLevel = params.nextLevel;
}


// Function TekLight.TekLight_C.SetLampLightIntensity
// ()
// Parameters:
// int                            intensityLevel                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekLight_C::SetLampLightIntensity(int intensityLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.SetLampLightIntensity");

	ATekLight_C_SetLampLightIntensity_Params params;
	params.intensityLevel = intensityLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLight.TekLight_C.BPGetMultiUseEntries
// (Native, NetResponse, MulticastDelegate, Protected, HasOutParms, HasDefaults, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekLight_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.BPGetMultiUseEntries");

	ATekLight_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekLight.TekLight_C.BPRefreshedStructureColors
// ()

void ATekLight_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.BPRefreshedStructureColors");

	ATekLight_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLight.TekLight_C.UserConstructionScript
// ()

void ATekLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.UserConstructionScript");

	ATekLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLight.TekLight_C.ReceiveBeginPlay
// ()

void ATekLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.ReceiveBeginPlay");

	ATekLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLight.TekLight_C.Multi_SetLampLightIntensity
// ()
// Parameters:
// int                            newPowerLevel                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekLight_C::Multi_SetLampLightIntensity(int newPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.Multi_SetLampLightIntensity");

	ATekLight_C_Multi_SetLampLightIntensity_Params params;
	params.newPowerLevel = newPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLight.TekLight_C.Client_SetLampLightIntensity
// ()
// Parameters:
// int                            newPowerLevel                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekLight_C::Client_SetLampLightIntensity(int newPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.Client_SetLampLightIntensity");

	ATekLight_C_Client_SetLampLightIntensity_Params params;
	params.newPowerLevel = newPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekLight.TekLight_C.ExecuteUbergraph_TekLight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekLight_C::ExecuteUbergraph_TekLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekLight.TekLight_C.ExecuteUbergraph_TekLight");

	ATekLight_C_ExecuteUbergraph_TekLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
