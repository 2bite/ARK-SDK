// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TrappedTarget_VenusFlyTrap_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPPreventOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TrappedTarget_VenusFlyTrap_BP_C::BPPreventOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPPreventOnStartJump");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPPreventOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Struggle
// (Net, Exec, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::Struggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Struggle");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_Struggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Validate
// ()

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::Validate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.Validate");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_Validate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.SetIsHostileBuff
// ()
// Parameters:
// bool                           NewSetting                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::SetIsHostileBuff(bool NewSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.SetIsHostileBuff");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_SetIsHostileBuff_Params params;
	params.NewSetting = NewSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffDescription
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_TrappedTarget_VenusFlyTrap_BP_C::STATIC_GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffDescription");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UpdateStruggle
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::UpdateStruggle(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UpdateStruggle");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_UpdateStruggle_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPActivated");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPGetHUDElements
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPGetHUDElements");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BuffTickServer");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartAltFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::BPHandleOnStartAltFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartAltFire");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPHandleOnStartAltFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.TryStruggle
// ()

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::TryStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.TryStruggle");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_TryStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TrappedTarget_VenusFlyTrap_BP_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.PreventJump");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPHandleOnStartFire");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TrappedTarget_VenusFlyTrap_BP_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.GetBuffPostprocessIntensity");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPDeactivated");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.BPSetupForInstigator");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UserConstructionScript
// ()

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.UserConstructionScript");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ServerRequestStruggle
// ()

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::ServerRequestStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ServerRequestStruggle");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_ServerRequestStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ClientOnStruggle
// ()

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::ClientOnStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ClientOnStruggle");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_ClientOnStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrappedTarget_VenusFlyTrap_BP_C::ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C.ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP");

	ABuff_TrappedTarget_VenusFlyTrap_BP_C_ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
