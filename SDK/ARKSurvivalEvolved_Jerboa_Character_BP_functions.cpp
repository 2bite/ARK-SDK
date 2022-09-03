// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jerboa_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Jerboa_Character_BP.Jerboa_Character_BP_C.IsPlayerNearby
// ()
// Parameters:
// bool                           bNearby                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJerboa_Character_BP_C::IsPlayerNearby(bool* bNearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.IsPlayerNearby");

	AJerboa_Character_BP_C_IsPlayerNearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNearby != nullptr)
		*bNearby = params.bNearby;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.BPTimerServer
// ()

void AJerboa_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.BPTimerServer");

	AJerboa_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.UserConstructionScript
// ()

void AJerboa_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.UserConstructionScript");

	AJerboa_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Rain
// ()

void AJerboa_Character_BP_C::PlayWeatherWarning_Rain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Rain");

	AJerboa_Character_BP_C_PlayWeatherWarning_Rain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Superheat
// ()

void AJerboa_Character_BP_C::PlayWeatherWarning_Superheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Superheat");

	AJerboa_Character_BP_C_PlayWeatherWarning_Superheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_ElectricalStorm
// ()

void AJerboa_Character_BP_C::PlayWeatherWarning_ElectricalStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_ElectricalStorm");

	AJerboa_Character_BP_C_PlayWeatherWarning_ElectricalStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Sandstorm
// ()

void AJerboa_Character_BP_C::PlayWeatherWarning_Sandstorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Sandstorm");

	AJerboa_Character_BP_C_PlayWeatherWarning_Sandstorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Earthquake
// ()

void AJerboa_Character_BP_C::PlayWeatherWarning_Earthquake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.PlayWeatherWarning_Earthquake");

	AJerboa_Character_BP_C_PlayWeatherWarning_Earthquake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerboa_Character_BP.Jerboa_Character_BP_C.ExecuteUbergraph_Jerboa_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJerboa_Character_BP_C::ExecuteUbergraph_Jerboa_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerboa_Character_BP.Jerboa_Character_BP_C.ExecuteUbergraph_Jerboa_Character_BP");

	AJerboa_Character_BP_C_ExecuteUbergraph_Jerboa_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
