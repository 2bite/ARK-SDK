// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MammothDrummer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayDrumLoop
// ()
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::PlayDrumLoop(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayDrumLoop");

	ABuff_MammothDrummer_C_PlayDrumLoop_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientManageDrumBeat
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType> InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::ClientManageDrumBeat(TEnumAsByte<EPrimalCharacterInputType> InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientManageDrumBeat");

	ABuff_MammothDrummer_C_ClientManageDrumBeat_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.BuffTickClient");

	ABuff_MammothDrummer_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Sync HUD Widget
// ()

void ABuff_MammothDrummer_C::Sync_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.Sync HUD Widget");

	ABuff_MammothDrummer_C_Sync_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Notify Toggle HUD Widget
// ()
// Parameters:
// bool                           HUD_Hidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::Notify_Toggle_HUD_Widget(bool HUD_Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.Notify Toggle HUD Widget");

	ABuff_MammothDrummer_C_Notify_Toggle_HUD_Widget_Params params;
	params.HUD_Hidden = HUD_Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Destroy HUD Widget
// ()
// Parameters:
// bool                           DestroyNow                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::Destroy_HUD_Widget(bool DestroyNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.Destroy HUD Widget");

	ABuff_MammothDrummer_C_Destroy_HUD_Widget_Params params;
	params.DestroyNow = DestroyNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Setup HUD Widget
// ()
// Parameters:
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::Setup_HUD_Widget(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.Setup HUD Widget");

	ABuff_MammothDrummer_C_Setup_HUD_Widget_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.UpdateDrumEffectVisibility
// ()

void ABuff_MammothDrummer_C::UpdateDrumEffectVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.UpdateDrumEffectVisibility");

	ABuff_MammothDrummer_C_UpdateDrumEffectVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooLate
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MammothDrummer_C::IsBeatTooLate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooLate");

	ABuff_MammothDrummer_C_IsBeatTooLate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooSoon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MammothDrummer_C::IsBeatTooSoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooSoon");

	ABuff_MammothDrummer_C_IsBeatTooSoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_MammothDrummer_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPGetHUDElements");

	ABuff_MammothDrummer_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ActivateBuff
// ()

void ABuff_MammothDrummer_C::ActivateBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ActivateBuff");

	ABuff_MammothDrummer_C_ActivateBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerManageDrumBeat
// ()
// Parameters:
// int                            DrumIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TooSoon                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TooLate                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::ServerManageDrumBeat(int DrumIndex, bool TooSoon, bool TooLate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerManageDrumBeat");

	ABuff_MammothDrummer_C_ServerManageDrumBeat_Params params;
	params.DrumIndex = DrumIndex;
	params.TooSoon = TooSoon;
	params.TooLate = TooLate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPOnInputEvent
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::BPOnInputEvent(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPOnInputEvent");

	ABuff_MammothDrummer_C_BPOnInputEvent_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.GetWeaponMontage
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType> index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ABuff_MammothDrummer_C::GetWeaponMontage(TEnumAsByte<EPrimalCharacterInputType> index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.GetWeaponMontage");

	ABuff_MammothDrummer_C_GetWeaponMontage_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayWeaponMontage
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType> index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Started                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::PlayWeaponMontage(TEnumAsByte<EPrimalCharacterInputType> index, bool* Started)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayWeaponMontage");

	ABuff_MammothDrummer_C_PlayWeaponMontage_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Started != nullptr)
		*Started = params.Started;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPDeactivated");

	ABuff_MammothDrummer_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPSetupForInstigator");

	ABuff_MammothDrummer_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ABuff_MammothDrummer_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPForceCameraStyle");

	ABuff_MammothDrummer_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.UserConstructionScript
// ()

void ABuff_MammothDrummer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.UserConstructionScript");

	ABuff_MammothDrummer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerPlayWeaponMontage
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType> index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TooSoon                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TooLate                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::ServerPlayWeaponMontage(TEnumAsByte<EPrimalCharacterInputType> index, bool TooSoon, bool TooLate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerPlayWeaponMontage");

	ABuff_MammothDrummer_C_ServerPlayWeaponMontage_Params params;
	params.index = index;
	params.TooSoon = TooSoon;
	params.TooLate = TooLate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlayDrumLoop
// ()
// Parameters:
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::ClientPlayDrumLoop(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlayDrumLoop");

	ABuff_MammothDrummer_C_ClientPlayDrumLoop_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientUpdateDrumRadius
// ()
// Parameters:
// bool                           NewVis                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::ClientUpdateDrumRadius(bool NewVis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientUpdateDrumRadius");

	ABuff_MammothDrummer_C_ClientUpdateDrumRadius_Params params;
	params.NewVis = NewVis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlaySuccessHitVFX
// ()

void ABuff_MammothDrummer_C::ClientPlaySuccessHitVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlaySuccessHitVFX");

	ABuff_MammothDrummer_C_ClientPlaySuccessHitVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerActivateBuff
// ()
// Parameters:
// bool                           DoActivate                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::ServerActivateBuff(bool DoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerActivateBuff");

	ABuff_MammothDrummer_C_ServerActivateBuff_Params params;
	params.DoActivate = DoActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ExecuteUbergraph_Buff_MammothDrummer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MammothDrummer_C::ExecuteUbergraph_Buff_MammothDrummer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MammothDrummer.Buff_MammothDrummer_C.ExecuteUbergraph_Buff_MammothDrummer");

	ABuff_MammothDrummer_C_ExecuteUbergraph_Buff_MammothDrummer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
