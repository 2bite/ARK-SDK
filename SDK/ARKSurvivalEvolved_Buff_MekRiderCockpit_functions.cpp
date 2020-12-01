// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekRiderCockpit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MekRiderCockpit_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPCustomAllowAddBuff");

	ABuff_MekRiderCockpit_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.UserConstructionScript
// ()

void ABuff_MekRiderCockpit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.UserConstructionScript");

	ABuff_MekRiderCockpit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekRiderCockpit_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BuffTickServer");

	ABuff_MekRiderCockpit_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.DeactivateIfNotRidingMek
// ()

void ABuff_MekRiderCockpit_C::DeactivateIfNotRidingMek()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.DeactivateIfNotRidingMek");

	ABuff_MekRiderCockpit_C_DeactivateIfNotRidingMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekRiderCockpit_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.BPDeactivated");

	ABuff_MekRiderCockpit_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ReceiveBeginPlay
// ()

void ABuff_MekRiderCockpit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ReceiveBeginPlay");

	ABuff_MekRiderCockpit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekOutOfFuel
// ()

void ABuff_MekRiderCockpit_C::NotifyMekOutOfFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekOutOfFuel");

	ABuff_MekRiderCockpit_C_NotifyMekOutOfFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekHasFuel
// ()

void ABuff_MekRiderCockpit_C::NotifyMekHasFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.NotifyMekHasFuel");

	ABuff_MekRiderCockpit_C_NotifyMekHasFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ClientSetUnderwaterBreathing
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekRiderCockpit_C::ClientSetUnderwaterBreathing(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ClientSetUnderwaterBreathing");

	ABuff_MekRiderCockpit_C_ClientSetUnderwaterBreathing_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.SetUnderwaterBreathing
// ()
// Parameters:
// bool                           Allowed                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekRiderCockpit_C::SetUnderwaterBreathing(bool Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.SetUnderwaterBreathing");

	ABuff_MekRiderCockpit_C_SetUnderwaterBreathing_Params params;
	params.Allowed = Allowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ExecuteUbergraph_Buff_MekRiderCockpit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekRiderCockpit_C::ExecuteUbergraph_Buff_MekRiderCockpit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekRiderCockpit.Buff_MekRiderCockpit_C.ExecuteUbergraph_Buff_MekRiderCockpit");

	ABuff_MekRiderCockpit_C_ExecuteUbergraph_Buff_MekRiderCockpit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
