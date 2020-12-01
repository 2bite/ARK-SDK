// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_Indicator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffDeactivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::BPNotifyOtherBuffDeactivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffDeactivated");

	ABuff_Radiation_Indicator_C_BPNotifyOtherBuffDeactivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffActivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffActivated");

	ABuff_Radiation_Indicator_C_BPNotifyOtherBuffActivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPSetupForInstigator");

	ABuff_Radiation_Indicator_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Set Radiation Indicator Hidden
// ()
// Parameters:
// bool                           HideIcon                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MuteSound                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::Set_Radiation_Indicator_Hidden(bool HideIcon, bool MuteSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Set Radiation Indicator Hidden");

	ABuff_Radiation_Indicator_C_Set_Radiation_Indicator_Hidden_Params params;
	params.HideIcon = HideIcon;
	params.MuteSound = MuteSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickServer");

	ABuff_Radiation_Indicator_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Is Instigator Near Tek Forcefield
// ()
// Parameters:
// class AStorageBox_TekShield_C* TekShield                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInsideShield                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::Is_Instigator_Near_Tek_Forcefield(class AStorageBox_TekShield_C* TekShield, bool* IsInsideShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Is Instigator Near Tek Forcefield");

	ABuff_Radiation_Indicator_C_Is_Instigator_Near_Tek_Forcefield_Params params;
	params.TekShield = TekShield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInsideShield != nullptr)
		*IsInsideShield = params.IsInsideShield;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickClient");

	ABuff_Radiation_Indicator_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPResetBuffStart
// ()

void ABuff_Radiation_Indicator_C::BPResetBuffStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPResetBuffStart");

	ABuff_Radiation_Indicator_C_BPResetBuffStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.UserConstructionScript
// ()

void ABuff_Radiation_Indicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.UserConstructionScript");

	ABuff_Radiation_Indicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.ExecuteUbergraph_Buff_Radiation_Indicator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Indicator_C::ExecuteUbergraph_Buff_Radiation_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.ExecuteUbergraph_Buff_Radiation_Indicator");

	ABuff_Radiation_Indicator_C_ExecuteUbergraph_Buff_Radiation_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
