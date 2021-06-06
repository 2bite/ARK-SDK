// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExosuitHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExosuitHUD.ExosuitHUD_C.SetupDynamicMaterial
// ()

void UExosuitHUD_C::SetupDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.SetupDynamicMaterial");

	UExosuitHUD_C_SetupDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExosuitHUD.ExosuitHUD_C.SyncHUDWidget
// (Native, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, NetValidate)
// Parameters:
// class FString                  ModeString                     (Parm, ZeroConstructor)
// class FString                  RepairRequirementsString       (Parm, ZeroConstructor)
// float                          BeamAvailabilityPercent        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BeamPressAndHoldPercent        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsesChestBeam                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUseChestBeam               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ChestBeamState                 (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        LastAimedStructure             (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentMode                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          HUDModeTextFadeOutTimeMultiplier (Parm, ZeroConstructor, IsPlainOldData)

void UExosuitHUD_C::SyncHUDWidget(const class FString& ModeString, const class FString& RepairRequirementsString, float BeamAvailabilityPercent, float BeamPressAndHoldPercent, bool bUsesChestBeam, bool bCanUseChestBeam, int ChestBeamState, class APrimalStructure* LastAimedStructure, int CurrentMode, float HUDModeTextFadeOutTimeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.SyncHUDWidget");

	UExosuitHUD_C_SyncHUDWidget_Params params;
	params.ModeString = ModeString;
	params.RepairRequirementsString = RepairRequirementsString;
	params.BeamAvailabilityPercent = BeamAvailabilityPercent;
	params.BeamPressAndHoldPercent = BeamPressAndHoldPercent;
	params.bUsesChestBeam = bUsesChestBeam;
	params.bCanUseChestBeam = bCanUseChestBeam;
	params.ChestBeamState = ChestBeamState;
	params.LastAimedStructure = LastAimedStructure;
	params.CurrentMode = CurrentMode;
	params.HUDModeTextFadeOutTimeMultiplier = HUDModeTextFadeOutTimeMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExosuitHUD.ExosuitHUD_C.Initialize HUD Widget
// ()

void UExosuitHUD_C::Initialize_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.Initialize HUD Widget");

	UExosuitHUD_C_Initialize_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExosuitHUD.ExosuitHUD_C.Reset HUD Widget
// ()

void UExosuitHUD_C::Reset_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.Reset HUD Widget");

	UExosuitHUD_C_Reset_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExosuitHUD.ExosuitHUD_C.DestroyWidget
// ()

void UExosuitHUD_C::DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.DestroyWidget");

	UExosuitHUD_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExosuitHUD.ExosuitHUD_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifeSpan                    (Parm, ZeroConstructor, IsPlainOldData)

void UExosuitHUD_C::StartClosingWidget(float NewLifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.StartClosingWidget");

	UExosuitHUD_C_StartClosingWidget_Params params;
	params.NewLifeSpan = NewLifeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExosuitHUD.ExosuitHUD_C.ExecuteUbergraph_ExosuitHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExosuitHUD_C::ExecuteUbergraph_ExosuitHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.ExecuteUbergraph_ExosuitHUD");

	UExosuitHUD_C_ExecuteUbergraph_ExosuitHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExosuitHUD.ExosuitHUD_C.OnWidgetDestroyed__DelegateSignature
// ()

void UExosuitHUD_C::OnWidgetDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.OnWidgetDestroyed__DelegateSignature");

	UExosuitHUD_C_OnWidgetDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
