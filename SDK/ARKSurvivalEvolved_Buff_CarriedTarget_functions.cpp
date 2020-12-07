// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CarriedTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.Sruggle
// (Net, NetReliable, Exec, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void ABuff_CarriedTarget_C::STATIC_Sruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.Sruggle");

	ABuff_CarriedTarget_C_Sruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.Validate
// ()

void ABuff_CarriedTarget_C::Validate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.Validate");

	ABuff_CarriedTarget_C_Validate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.SetIsHostileBuff
// ()
// Parameters:
// bool                           NewSetting                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::SetIsHostileBuff(bool NewSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.SetIsHostileBuff");

	ABuff_CarriedTarget_C_SetIsHostileBuff_Params params;
	params.NewSetting = NewSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffDescription
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_CarriedTarget_C::STATIC_GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffDescription");

	ABuff_CarriedTarget_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateEquipmentDOT
// ()
// Parameters:
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::UpdateEquipmentDOT(float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateEquipmentDOT");

	ABuff_CarriedTarget_C_UpdateEquipmentDOT_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateStruggle
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::UpdateStruggle(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateStruggle");

	ABuff_CarriedTarget_C_UpdateStruggle_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPActivated");

	ABuff_CarriedTarget_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPGetHUDElements
// (Net, NetReliable, Native, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_CarriedTarget_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPGetHUDElements");

	ABuff_CarriedTarget_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.BuffTickServer");

	ABuff_CarriedTarget_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartAltFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::BPHandleOnStartAltFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartAltFire");

	ABuff_CarriedTarget_C_BPHandleOnStartAltFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.TryStruggle
// ()

void ABuff_CarriedTarget_C::TryStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.TryStruggle");

	ABuff_CarriedTarget_C_TryStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_CarriedTarget_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.PreventJump");

	ABuff_CarriedTarget_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartFire");

	ABuff_CarriedTarget_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_CarriedTarget_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffPostprocessIntensity");

	ABuff_CarriedTarget_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_CarriedTarget_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.AllowPostProcessEffect");

	ABuff_CarriedTarget_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPDeactivated");

	ABuff_CarriedTarget_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPSetupForInstigator");

	ABuff_CarriedTarget_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.UserConstructionScript
// ()

void ABuff_CarriedTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.UserConstructionScript");

	ABuff_CarriedTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.ServerRequestStruggle
// ()

void ABuff_CarriedTarget_C::ServerRequestStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.ServerRequestStruggle");

	ABuff_CarriedTarget_C_ServerRequestStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.ClientOnStruggle
// ()

void ABuff_CarriedTarget_C::ClientOnStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.ClientOnStruggle");

	ABuff_CarriedTarget_C_ClientOnStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.MultiOnArmorDurabilityDamage
// ()

void ABuff_CarriedTarget_C::MultiOnArmorDurabilityDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.MultiOnArmorDurabilityDamage");

	ABuff_CarriedTarget_C_MultiOnArmorDurabilityDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CarriedTarget.Buff_CarriedTarget_C.ExecuteUbergraph_Buff_CarriedTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CarriedTarget_C::ExecuteUbergraph_Buff_CarriedTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CarriedTarget.Buff_CarriedTarget_C.ExecuteUbergraph_Buff_CarriedTarget");

	ABuff_CarriedTarget_C_ExecuteUbergraph_Buff_CarriedTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
