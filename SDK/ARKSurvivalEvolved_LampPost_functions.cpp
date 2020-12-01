// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LampPost.LampPost_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ALampPost_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.BPClientDoMultiUse");

	ALampPost_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPost.LampPost_C.GetLampLight
// ()
// Parameters:
// class ULightComponent*         Light                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALampPost_C::GetLampLight(class ULightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.GetLampLight");

	ALampPost_C_GetLampLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function LampPost.LampPost_C.Get Next Cycled LightIntensity Level
// ()
// Parameters:
// int                            nextLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALampPost_C::Get_Next_Cycled_LightIntensity_Level(int* nextLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.Get Next Cycled LightIntensity Level");

	ALampPost_C_Get_Next_Cycled_LightIntensity_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nextLevel != nullptr)
		*nextLevel = params.nextLevel;
}


// Function LampPost.LampPost_C.SetLampLightIntensity
// ()
// Parameters:
// int                            intensityLevel                 (Parm, ZeroConstructor, IsPlainOldData)

void ALampPost_C::SetLampLightIntensity(int intensityLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.SetLampLightIntensity");

	ALampPost_C_SetLampLightIntensity_Params params;
	params.intensityLevel = intensityLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPost.LampPost_C.BPGetMultiUseEntries
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Protected, HasOutParms, HasDefaults, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ALampPost_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.BPGetMultiUseEntries");

	ALampPost_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function LampPost.LampPost_C.BPRefreshedStructureColors
// ()

void ALampPost_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.BPRefreshedStructureColors");

	ALampPost_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPost.LampPost_C.UserConstructionScript
// ()

void ALampPost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.UserConstructionScript");

	ALampPost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPost.LampPost_C.ReceiveBeginPlay
// ()

void ALampPost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.ReceiveBeginPlay");

	ALampPost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPost.LampPost_C.Multi_SetLampLightIntensity
// ()
// Parameters:
// int                            newPowerLevel                  (Parm, ZeroConstructor, IsPlainOldData)

void ALampPost_C::Multi_SetLampLightIntensity(int newPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.Multi_SetLampLightIntensity");

	ALampPost_C_Multi_SetLampLightIntensity_Params params;
	params.newPowerLevel = newPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPost.LampPost_C.Client_SetLampLightIntensity
// ()
// Parameters:
// int                            newPowerLevel                  (Parm, ZeroConstructor, IsPlainOldData)

void ALampPost_C::Client_SetLampLightIntensity(int newPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.Client_SetLampLightIntensity");

	ALampPost_C_Client_SetLampLightIntensity_Params params;
	params.newPowerLevel = newPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPost.LampPost_C.ExecuteUbergraph_LampPost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALampPost_C::ExecuteUbergraph_LampPost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPost.LampPost_C.ExecuteUbergraph_LampPost");

	ALampPost_C_ExecuteUbergraph_LampPost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
