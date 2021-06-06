// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekHoverSail_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCameraRotationFinal
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InCurrentFinalRot              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ATekHoverSail_Character_BP_C::BPCameraRotationFinal(class APrimalCharacter** viewingCharacter, struct FRotator* InCurrentFinalRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCameraRotationFinal");

	ATekHoverSail_Character_BP_C_BPCameraRotationFinal_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCurrentFinalRot != nullptr)
		*InCurrentFinalRot = params.InCurrentFinalRot;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Clear Trick Hint Text
// ()

void ATekHoverSail_Character_BP_C::Clear_Trick_Hint_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Clear Trick Hint Text");

	ATekHoverSail_Character_BP_C_Clear_Trick_Hint_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Hint Text
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_Add_Trick_Hint_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Hint Text");

	ATekHoverSail_Character_BP_C_Add_Trick_Hint_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATekHoverSail_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnRefreshColorization");

	ATekHoverSail_Character_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Trick Button - direction variant
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_Client_Holds_Trick_Button___direction_variant()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Trick Button - direction variant");

	ATekHoverSail_Character_BP_C_Client_Holds_Trick_Button___direction_variant_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFPVViewLocation");

	ATekHoverSail_Character_BP_C_BPOverrideFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSail_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetFPVViewLocation");

	ATekHoverSail_Character_BP_C_BPGetFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ClearTrickActivationText
// ()

void ATekHoverSail_Character_BP_C::ClearTrickActivationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ClearTrickActivationText");

	ATekHoverSail_Character_BP_C_ClearTrickActivationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Activation Text
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_Add_Trick_Activation_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add Trick Activation Text");

	ATekHoverSail_Character_BP_C_Add_Trick_Activation_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetAccumulatedTricks
// ()

void ATekHoverSail_Character_BP_C::ResetAccumulatedTricks()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetAccumulatedTricks");

	ATekHoverSail_Character_BP_C_ResetAccumulatedTricks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add To Accumulated Trick
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TrickIndexToAdd                (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::STATIC_Add_To_Accumulated_Trick(int TrickIndexToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Add To Accumulated Trick");

	ATekHoverSail_Character_BP_C_Add_To_Accumulated_Trick_Params params;
	params.TrickIndexToAdd = TrickIndexToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleThrusterSFX
// ()

void ATekHoverSail_Character_BP_C::HandleThrusterSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleThrusterSFX");

	ATekHoverSail_Character_BP_C_HandleThrusterSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DeactivateGroundFX
// ()

void ATekHoverSail_Character_BP_C::DeactivateGroundFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DeactivateGroundFX");

	ATekHoverSail_Character_BP_C_DeactivateGroundFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleCrouch
// ()
// Parameters:
// bool                           bWasReleased                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::HandleCrouch(bool bWasReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HandleCrouch");

	ATekHoverSail_Character_BP_C_HandleCrouch_Params params;
	params.bWasReleased = bWasReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetTotalFuelUnits
// ()
// Parameters:
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetTotalFuelUnits(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetTotalFuelUnits");

	ATekHoverSail_Character_BP_C_GetTotalFuelUnits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.try refill from inventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::try_refill_from_inventory(class UPrimalInventoryComponent* InputPin, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.try refill from inventory");

	ATekHoverSail_Character_BP_C_try_refill_from_inventory_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearPassenger");

	ATekHoverSail_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delaymount
// ()

void ATekHoverSail_Character_BP_C::Delaymount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delaymount");

	ATekHoverSail_Character_BP_C_Delaymount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPHandleUseButtonPress");

	ATekHoverSail_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is FPV
// ()
// Parameters:
// class AShooterCharacter*       InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::is_FPV(class AShooterCharacter* InputPin, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is FPV");

	ATekHoverSail_Character_BP_C_is_FPV_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.spawn collision sparks vfx
// ()
// Parameters:
// struct FVector                 hit_norm                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hit_location                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          impact_strength                (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::spawn_collision_sparks_vfx(const struct FVector& hit_norm, const struct FVector& hit_location, float impact_strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.spawn collision sparks vfx");

	ATekHoverSail_Character_BP_C_spawn_collision_sparks_vfx_Params params;
	params.hit_norm = hit_norm;
	params.hit_location = hit_location;
	params.impact_strength = impact_strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Restricted Sparks Spawn Rate
// ()

void ATekHoverSail_Character_BP_C::Restricted_Sparks_Spawn_Rate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Restricted Sparks Spawn Rate");

	ATekHoverSail_Character_BP_C_Restricted_Sparks_Spawn_Rate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Sail Open Socket Location
// ()

void ATekHoverSail_Character_BP_C::Attach_Player_To_Sail_Open_Socket_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Sail Open Socket Location");

	ATekHoverSail_Character_BP_C_Attach_Player_To_Sail_Open_Socket_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Sail Open Socket Location
// ()

void ATekHoverSail_Character_BP_C::Lerp_To_Sail_Open_Socket_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Sail Open Socket Location");

	ATekHoverSail_Character_BP_C_Lerp_To_Sail_Open_Socket_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Weapon Out Location
// ()

void ATekHoverSail_Character_BP_C::Lerp_To_Weapon_Out_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Lerp To Weapon Out Location");

	ATekHoverSail_Character_BP_C_Lerp_To_Weapon_Out_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Weapon Out Location
// ()

void ATekHoverSail_Character_BP_C::Attach_Player_To_Weapon_Out_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Attach Player To Weapon Out Location");

	ATekHoverSail_Character_BP_C_Attach_Player_To_Weapon_Out_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyAddPassenger");

	ATekHoverSail_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Halt Hoversail
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::Client_Halt_Hoversail()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Halt Hoversail");

	ATekHoverSail_Character_BP_C_Client_Halt_Hoversail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy if item reference is gone
// ()

void ATekHoverSail_Character_BP_C::destroy_if_item_reference_is_gone()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy if item reference is gone");

	ATekHoverSail_Character_BP_C_destroy_if_item_reference_is_gone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Duration After Drifting To Have Increased Speed
// ()

void ATekHoverSail_Character_BP_C::Duration_After_Drifting_To_Have_Increased_Speed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Duration After Drifting To Have Increased Speed");

	ATekHoverSail_Character_BP_C_Duration_After_Drifting_To_Have_Increased_Speed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy itself
// ()

void ATekHoverSail_Character_BP_C::destroy_itself()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.destroy itself");

	ATekHoverSail_Character_BP_C_destroy_itself_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTriggerStasisEvent
// ()

void ATekHoverSail_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTriggerStasisEvent");

	ATekHoverSail_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Trick Score Display Timer
// ()

void ATekHoverSail_Character_BP_C::Trick_Score_Display_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Trick Score Display Timer");

	ATekHoverSail_Character_BP_C_Trick_Score_Display_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BoostBonusDisplayTimer
// ()

void ATekHoverSail_Character_BP_C::BoostBonusDisplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BoostBonusDisplayTimer");

	ATekHoverSail_Character_BP_C_BoostBonusDisplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Shortly After Clearing
// ()

void ATekHoverSail_Character_BP_C::Shortly_After_Clearing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Shortly After Clearing");

	ATekHoverSail_Character_BP_C_Shortly_After_Clearing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Time After Drift To Retain Velocity
// ()

void ATekHoverSail_Character_BP_C::Time_After_Drift_To_Retain_Velocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Time After Drift To Retain Velocity");

	ATekHoverSail_Character_BP_C_Time_After_Drift_To_Retain_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is player holding drift
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::is_player_holding_drift()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is player holding drift");

	ATekHoverSail_Character_BP_C_is_player_holding_drift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses Held Drift Button
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::Client_Presses_Held_Drift_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses Held Drift Button");

	ATekHoverSail_Character_BP_C_Client_Presses_Held_Drift_Button_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases Held Drift Button
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::Client_Releases_Held_Drift_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases Held Drift Button");

	ATekHoverSail_Character_BP_C_Client_Releases_Held_Drift_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.set up everything for detecting tricks in the air
// ()

void ATekHoverSail_Character_BP_C::set_up_everything_for_detecting_tricks_in_the_air()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.set up everything for detecting tricks in the air");

	ATekHoverSail_Character_BP_C_set_up_everything_for_detecting_tricks_in_the_air_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed 360 in air
// ()

void ATekHoverSail_Character_BP_C::Completed_360_in_air()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed 360 in air");

	ATekHoverSail_Character_BP_C_Completed_360_in_air_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed Held Trick for Bonus
// ()

void ATekHoverSail_Character_BP_C::Completed_Held_Trick_for_Bonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed Held Trick for Bonus");

	ATekHoverSail_Character_BP_C_Completed_Held_Trick_for_Bonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed One Shot Trick For Bonus
// ()

void ATekHoverSail_Character_BP_C::Completed_One_Shot_Trick_For_Bonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Completed One Shot Trick For Bonus");

	ATekHoverSail_Character_BP_C_Completed_One_Shot_Trick_For_Bonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Shortly After Drift Boost
// ()

void ATekHoverSail_Character_BP_C::Is_Shortly_After_Drift_Boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Shortly After Drift Boost");

	ATekHoverSail_Character_BP_C_Is_Shortly_After_Drift_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Can Request Drift Boost
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Can_Request_Drift_Boost(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Can Request Drift Boost");

	ATekHoverSail_Character_BP_C_Can_Request_Drift_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request drift boost
// ()

void ATekHoverSail_Character_BP_C::Request_drift_boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request drift boost");

	ATekHoverSail_Character_BP_C_Request_drift_boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request Boost After Drift
// ()

void ATekHoverSail_Character_BP_C::Request_Boost_After_Drift()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Request Boost After Drift");

	ATekHoverSail_Character_BP_C_Request_Boost_After_Drift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Allowed Time After Stopping Drift To Be Able To Boost
// ()

void ATekHoverSail_Character_BP_C::Allowed_Time_After_Stopping_Drift_To_Be_Able_To_Boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Allowed Time After Stopping Drift To Be Able To Boost");

	ATekHoverSail_Character_BP_C_Allowed_Time_After_Stopping_Drift_To_Be_Able_To_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases trick button
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_client_releases_trick_button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases trick button");

	ATekHoverSail_Character_BP_C_client_releases_trick_button_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client holds trick button
// (NetReliable, Exec, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_client_holds_trick_button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client holds trick button");

	ATekHoverSail_Character_BP_C_client_holds_trick_button_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases camera button
// ()

void ATekHoverSail_Character_BP_C::Client_Releases_camera_button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases camera button");

	ATekHoverSail_Character_BP_C_Client_Releases_camera_button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds camera button
// ()

void ATekHoverSail_Character_BP_C::Client_Holds_camera_button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds camera button");

	ATekHoverSail_Character_BP_C_Client_Holds_camera_button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses FreeSpin Button
// (Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_Client_Presses_FreeSpin_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Presses FreeSpin Button");

	ATekHoverSail_Character_BP_C_Client_Presses_FreeSpin_Button_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases FreeSpin Button
// (Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_Client_Releases_FreeSpin_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Releases FreeSpin Button");

	ATekHoverSail_Character_BP_C_Client_Releases_FreeSpin_Button_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases spin button
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_client_releases_spin_button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.client releases spin button");

	ATekHoverSail_Character_BP_C_client_releases_spin_button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Spin Button
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::STATIC_Client_Holds_Spin_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Client Holds Spin Button");

	ATekHoverSail_Character_BP_C_Client_Holds_Spin_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveTick");

	ATekHoverSail_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Player Currently Holding And Able To Aerial Boost
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::Is_Player_Currently_Holding_And_Able_To_Aerial_Boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Player Currently Holding And Able To Aerial Boost");

	ATekHoverSail_Character_BP_C_Is_Player_Currently_Holding_And_Able_To_Aerial_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delay Before Starting To Recharge Boost In Air
// ()

void ATekHoverSail_Character_BP_C::Delay_Before_Starting_To_Recharge_Boost_In_Air()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Delay Before Starting To Recharge Boost In Air");

	ATekHoverSail_Character_BP_C_Delay_Before_Starting_To_Recharge_Boost_In_Air_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Aerial Boost Drain
// ()

void ATekHoverSail_Character_BP_C::Aerial_Boost_Drain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Aerial Boost Drain");

	ATekHoverSail_Character_BP_C_Aerial_Boost_Drain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Recharge Aerial Boost
// ()

void ATekHoverSail_Character_BP_C::Recharge_Aerial_Boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Recharge Aerial Boost");

	ATekHoverSail_Character_BP_C_Recharge_Aerial_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ATekHoverSail_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active_Not pure
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::Is_Aerial_Boosting_Active_Not_pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active_Not pure");

	ATekHoverSail_Character_BP_C_Is_Aerial_Boosting_Active_Not_pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is cliff diving
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::is_cliff_diving()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is cliff diving");

	ATekHoverSail_Character_BP_C_is_cliff_diving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Near Ground not pure
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::Is_Near_Ground_not_pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Near Ground not pure");

	ATekHoverSail_Character_BP_C_Is_Near_Ground_not_pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideCameraViewTarget
// ()
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideCameraViewTarget");

	ATekHoverSail_Character_BP_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can boost forward on landing trick
// ()
// Parameters:
// bool                           Has_Landed_Trick               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::can_boost_forward_on_landing_trick(bool* Has_Landed_Trick)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can boost forward on landing trick");

	ATekHoverSail_Character_BP_C_can_boost_forward_on_landing_trick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Landed_Trick != nullptr)
		*Has_Landed_Trick = params.Has_Landed_Trick;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can request full boost
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::can_request_full_boost(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can request full boost");

	ATekHoverSail_Character_BP_C_can_request_full_boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSail_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetGravityZScale");

	ATekHoverSail_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finished Putting Sail Down
// ()

void ATekHoverSail_Character_BP_C::Finished_Putting_Sail_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finished Putting Sail Down");

	ATekHoverSail_Character_BP_C_Finished_Putting_Sail_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::Is_Aerial_Boosting_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Is Aerial Boosting Active");

	ATekHoverSail_Character_BP_C_Is_Aerial_Boosting_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can aerial boost
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::can_aerial_boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.can aerial boost");

	ATekHoverSail_Character_BP_C_can_aerial_boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Aerial Charge Meter Amount
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSail_Character_BP_C::Get_Aerial_Charge_Meter_Amount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Aerial Charge Meter Amount");

	ATekHoverSail_Character_BP_C_Get_Aerial_Charge_Meter_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.finished aerial boost timer completely
// ()

void ATekHoverSail_Character_BP_C::finished_aerial_boost_timer_completely()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.finished aerial boost timer completely");

	ATekHoverSail_Character_BP_C_finished_aerial_boost_timer_completely_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.reset aerial boost
// ()
// Parameters:
// bool                           ignore_time_constraint         (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::reset_aerial_boost(bool ignore_time_constraint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.reset aerial boost");

	ATekHoverSail_Character_BP_C_reset_aerial_boost_Params params;
	params.ignore_time_constraint = ignore_time_constraint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finish Aerial Boost
// ()

void ATekHoverSail_Character_BP_C::Finish_Aerial_Boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Finish Aerial Boost");

	ATekHoverSail_Character_BP_C_Finish_Aerial_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.begin aerial boosting
// ()

void ATekHoverSail_Character_BP_C::begin_aerial_boosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.begin aerial boosting");

	ATekHoverSail_Character_BP_C_begin_aerial_boosting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Release Holding Tricks
// ()

void ATekHoverSail_Character_BP_C::Release_Holding_Tricks()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Release Holding Tricks");

	ATekHoverSail_Character_BP_C_Release_Holding_Tricks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.request full boost
// ()

void ATekHoverSail_Character_BP_C::request_full_boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.request full boost");

	ATekHoverSail_Character_BP_C_request_full_boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.does skiff want to run
// ()
// Parameters:
// bool                           wants_to_run                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::does_skiff_want_to_run(bool* wants_to_run)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.does skiff want to run");

	ATekHoverSail_Character_BP_C_does_skiff_want_to_run_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (wants_to_run != nullptr)
		*wants_to_run = params.wants_to_run;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ThrottledTick
// ()

void ATekHoverSail_Character_BP_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ThrottledTick");

	ATekHoverSail_Character_BP_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is near ground
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::is_near_ground()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.is near ground");

	ATekHoverSail_Character_BP_C_is_near_ground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Forward
// ()

void ATekHoverSail_Character_BP_C::Reset_Hold_Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Forward");

	ATekHoverSail_Character_BP_C_Reset_Hold_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Right
// ()

void ATekHoverSail_Character_BP_C::Reset_Hold_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Reset Hold Right");

	ATekHoverSail_Character_BP_C_Reset_Hold_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.RidingTick
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.RidingTick");

	ATekHoverSail_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderSocket
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ATekHoverSail_Character_BP_C::BPGetRiderSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderSocket");

	ATekHoverSail_Character_BP_C_BPGetRiderSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyClearRider");

	ATekHoverSail_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.EnableTurnToFaceRotation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::EnableTurnToFaceRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.EnableTurnToFaceRotation");

	ATekHoverSail_Character_BP_C_EnableTurnToFaceRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ModifySkiffHorizontalInputs
// ()
// Parameters:
// struct FVector                 Input                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewInput                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::ModifySkiffHorizontalInputs(const struct FVector& Input, struct FVector* NewInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ModifySkiffHorizontalInputs");

	ATekHoverSail_Character_BP_C_ModifySkiffHorizontalInputs_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewInput != nullptr)
		*NewInput = params.NewInput;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetCurrentHoverFloorZ
// ()
// Parameters:
// bool                           bUseAverage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValidFloor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FloorZ                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetCurrentHoverFloorZ(bool bUseAverage, bool* bValidFloor, float* FloorZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetCurrentHoverFloorZ");

	ATekHoverSail_Character_BP_C_GetCurrentHoverFloorZ_Params params;
	params.bUseAverage = bUseAverage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidFloor != nullptr)
		*bValidFloor = params.bValidFloor;
	if (FloorZ != nullptr)
		*FloorZ = params.FloorZ;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
// ()
// Parameters:
// bool                           bAdjustWithMax                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetHoverSlopeDeltaRatio_PURE(bool bAdjustWithMax, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio_PURE");

	ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params params;
	params.bAdjustWithMax = bAdjustWithMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio
// ()
// Parameters:
// bool                           bAdjustWithMax                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetHoverSlopeDeltaRatio(bool bAdjustWithMax, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetHoverSlopeDeltaRatio");

	ATekHoverSail_Character_BP_C_GetHoverSlopeDeltaRatio_Params params;
	params.bAdjustWithMax = bAdjustWithMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoHoverSlopeCheck
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::DoHoverSlopeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoHoverSlopeCheck");

	ATekHoverSail_Character_BP_C_DoHoverSlopeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanCryo");

	ATekHoverSail_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairModeCooldownActive
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPost                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::IsSkiffRepairModeCooldownActive(bool* bResult, bool* bIsPost, float* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairModeCooldownActive");

	ATekHoverSail_Character_BP_C_IsSkiffRepairModeCooldownActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (bIsPost != nullptr)
		*bIsPost = params.bIsPost;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairDisabledFromDamage
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::IsSkiffRepairDisabledFromDamage(bool* bResult, float* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRepairDisabledFromDamage");

	ATekHoverSail_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAcknowledgeServerCorrection
// ()
// Parameters:
// float*                         TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    NewBase                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAcknowledgeServerCorrection");

	ATekHoverSail_Character_BP_C_BPAcknowledgeServerCorrection_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStopJump
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::STATIC_BPOnStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStopJump");

	ATekHoverSail_Character_BP_C_BPOnStopJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStartJump
// (NetRequest, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnStartJump");

	ATekHoverSail_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHudHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPNotifyToggleHUD(bool* bHudHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyToggleHUD");

	ATekHoverSail_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHudHidden = bHudHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CalculateTotalAlternateFuel
// ()
// Parameters:
// float                          TotalAltFuel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::CalculateTotalAlternateFuel(float* TotalAltFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CalculateTotalAlternateFuel");

	ATekHoverSail_Character_BP_C_CalculateTotalAlternateFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalAltFuel != nullptr)
		*TotalAltFuel = params.TotalAltFuel;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetRepairModeHudMessage
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Message                        (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::STATIC_GetRepairModeHudMessage(class FString* Message, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetRepairModeHudMessage");

	ATekHoverSail_Character_BP_C_GetRepairModeHudMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageDamageFX
// ()

void ATekHoverSail_Character_BP_C::Tick_ManageDamageFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageDamageFX");

	ATekHoverSail_Character_BP_C_Tick_ManageDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetCachedLandedRootRotationOffset
// ()
// Parameters:
// struct FRotator                NewOffset                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::NetSetCachedLandedRootRotationOffset(const struct FRotator& NewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetCachedLandedRootRotationOffset");

	ATekHoverSail_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params params;
	params.NewOffset = NewOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnRemovedNotify
// ()
// Parameters:
// class AActor**                 RemovedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnRemovedNotify");

	ATekHoverSail_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params params;
	params.RemovedActor = RemovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnAddedNotify
// ()
// Parameters:
// class AActor**                 AddedActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BP_OnBasedPawnAddedNotify(class AActor** AddedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnBasedPawnAddedNotify");

	ATekHoverSail_Character_BP_C_BP_OnBasedPawnAddedNotify_Params params;
	params.AddedActor = AddedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetFuelConversionRateForClass
// ()
// Parameters:
// class UClass*                  ForClass                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetFuelConversionRateForClass(class UClass* ForClass, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetFuelConversionRateForClass");

	ATekHoverSail_Character_BP_C_GetFuelConversionRateForClass_Params params;
	params.ForClass = ForClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffRepairModeStateChanged
// ()
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::OnSkiffRepairModeStateChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffRepairModeStateChanged");

	ATekHoverSail_Character_BP_C_OnSkiffRepairModeStateChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffRepairModeActive
// ()
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::NetSetSkiffRepairModeActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffRepairModeActive");

	ATekHoverSail_Character_BP_C_NetSetSkiffRepairModeActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffUseRepairMode
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::CanSkiffUseRepairMode(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffUseRepairMode");

	ATekHoverSail_Character_BP_C_CanSkiffUseRepairMode_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTryMultiUse
// (NetReliable, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::STATIC_BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTryMultiUse");

	ATekHoverSail_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Repair Mode Hud Message_PURE
// ()
// Parameters:
// class FString                  Message                        (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Get_Repair_Mode_Hud_Message_PURE(class FString* Message, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Get Repair Mode Hud Message_PURE");

	ATekHoverSail_Character_BP_C_Get_Repair_Mode_Hud_Message_PURE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintDrawFloatingHUD
// (NetReliable, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintDrawFloatingHUD");

	ATekHoverSail_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekHoverSail_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetMultiUseEntries");

	ATekHoverSail_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageAutoRepair
// ()

void ATekHoverSail_Character_BP_C::Tick_ManageAutoRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageAutoRepair");

	ATekHoverSail_Character_BP_C_Tick_ManageAutoRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_ForceAllowAddBuff");

	ATekHoverSail_Character_BP_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BlueprintPlayDying");

	ATekHoverSail_Character_BP_C_BlueprintPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPServerHandleNetExecCommand
// (NetReliable, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPServerHandleNetExecCommand");

	ATekHoverSail_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ConsumeFuel
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MulticastFuel                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::ConsumeFuel(float amount, bool MulticastFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ConsumeFuel");

	ATekHoverSail_Character_BP_C_ConsumeFuel_Params params;
	params.amount = amount;
	params.MulticastFuel = MulticastFuel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasEnoughFuel
// ()
// Parameters:
// float                          RequiredFuel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::HasEnoughFuel(float RequiredFuel, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasEnoughFuel");

	ATekHoverSail_Character_BP_C_HasEnoughFuel_Params params;
	params.RequiredFuel = RequiredFuel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.TryRefillCurrentFuelUnit
// ()
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::TryRefillCurrentFuelUnit(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.TryRefillCurrentFuelUnit");

	ATekHoverSail_Character_BP_C_TryRefillCurrentFuelUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasAnyFuel
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentFuel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::HasAnyFuel(bool* bResult, float* CurrentFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.HasAnyFuel");

	ATekHoverSail_Character_BP_C_HasAnyFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (CurrentFuel != nullptr)
		*CurrentFuel = params.CurrentFuel;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPInventoryItemDropped
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPInventoryItemDropped(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPInventoryItemDropped");

	ATekHoverSail_Character_BP_C_BPInventoryItemDropped_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifyInventoryItemChange");

	ATekHoverSail_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffInventoryUpdated
// ()
// Parameters:
// class UPrimalItem*             UpdatedItem                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::OnSkiffInventoryUpdated(class UPrimalItem* UpdatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffInventoryUpdated");

	ATekHoverSail_Character_BP_C_OnSkiffInventoryUpdated_Params params;
	params.UpdatedItem = UpdatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPSetupTamed");

	ATekHoverSail_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DisableLevelUps
// ()

void ATekHoverSail_Character_BP_C::DisableLevelUps()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DisableLevelUps");

	ATekHoverSail_Character_BP_C_DisableLevelUps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BSetupDinoTameable
// ()

void ATekHoverSail_Character_BP_C::BSetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BSetupDinoTameable");

	ATekHoverSail_Character_BP_C_BSetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ShowDropDinoIndicator
// ()

void ATekHoverSail_Character_BP_C::Tick_ShowDropDinoIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ShowDropDinoIndicator");

	ATekHoverSail_Character_BP_C_Tick_ShowDropDinoIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffAcceleration
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetSkiffAcceleration(struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffAcceleration");

	ATekHoverSail_Character_BP_C_GetSkiffAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsValidHoverTraceHit
// ()
// Parameters:
// struct FHitResult              ForHit                         (Parm, OutParm, ReferenceParm)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::IsValidHoverTraceHit(struct FHitResult* ForHit, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsValidHoverTraceHit");

	ATekHoverSail_Character_BP_C_IsValidHoverTraceHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForHit != nullptr)
		*ForHit = params.ForHit;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRunning
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::IsSkiffRunning(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffRunning");

	ATekHoverSail_Character_BP_C_IsSkiffRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnSetRunning
// ()
// Parameters:
// bool*                          bNewIsRunning                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BP_OnSetRunning(bool* bNewIsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnSetRunning");

	ATekHoverSail_Character_BP_C_BP_OnSetRunning_Params params;
	params.bNewIsRunning = bNewIsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnReceiveSkiff2dMovementInput
// ()
// Parameters:
// float                          InputAxisVal                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRight                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldIntercept               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::OnReceiveSkiff2dMovementInput(float InputAxisVal, bool bRight, bool* bShouldIntercept)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnReceiveSkiff2dMovementInput");

	ATekHoverSail_Character_BP_C_OnReceiveSkiff2dMovementInput_Params params;
	params.InputAxisVal = InputAxisVal;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldIntercept != nullptr)
		*bShouldIntercept = params.bShouldIntercept;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPCanBeBaseForCharacter");

	ATekHoverSail_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardDirection
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSail_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardDirection");

	ATekHoverSail_Character_BP_C_BPGetRiderUnboardDirection_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSail_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetRiderUnboardLocation");

	ATekHoverSail_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanHover
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::CanHover(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanHover");

	ATekHoverSail_Character_BP_C_CanHover_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnTamedOrderReceived
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnTamedOrderReceived");

	ATekHoverSail_Character_BP_C_BP_OnTamedOrderReceived_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.WantsToFlyUp
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::WantsToFlyUp(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.WantsToFlyUp");

	ATekHoverSail_Character_BP_C_WantsToFlyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_CheckSkiffInputs
// ()

void ATekHoverSail_Character_BP_C::Tick_CheckSkiffInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_CheckSkiffInputs");

	ATekHoverSail_Character_BP_C_Tick_CheckSkiffInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSyncedFuelAmount
// ()
// Parameters:
// bool                           bWasChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::UpdateSyncedFuelAmount(bool* bWasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSyncedFuelAmount");

	ATekHoverSail_Character_BP_C_UpdateSyncedFuelAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasChanged != nullptr)
		*bWasChanged = params.bWasChanged;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
// ()
// Parameters:
// TArray<class AActor*>          IgnoreActors                   (Parm, OutParm, ZeroConstructor)

void ATekHoverSail_Character_BP_C::GetSkiffBlockersTraceIgnoreActors(TArray<class AActor*>* IgnoreActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetSkiffBlockersTraceIgnoreActors");

	ATekHoverSail_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IgnoreActors != nullptr)
		*IgnoreActors = params.IgnoreActors;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageSkiffCamera
// ()

void ATekHoverSail_Character_BP_C::Tick_ManageSkiffCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageSkiffCamera");

	ATekHoverSail_Character_BP_C_Tick_ManageSkiffCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsPhysicsVolumeLava
// ()
// Parameters:
// class APhysicsVolume*          CheckVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLava                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::IsPhysicsVolumeLava(class APhysicsVolume* CheckVolume, bool* bIsLava)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsPhysicsVolumeLava");

	ATekHoverSail_Character_BP_C_IsPhysicsVolumeLava_Params params;
	params.CheckVolume = CheckVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLava != nullptr)
		*bIsLava = params.bIsLava;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffTryToTrulyLand
// ()
// Parameters:
// struct FVector                 WithFlyingVelocity             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::CanSkiffTryToTrulyLand(const struct FVector& WithFlyingVelocity, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSkiffTryToTrulyLand");

	ATekHoverSail_Character_BP_C_CanSkiffTryToTrulyLand_Params params;
	params.WithFlyingVelocity = WithFlyingVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandFailed
// ()
// Parameters:
// int*                           ReasonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BP_OnStartLandFailed(int* ReasonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandFailed");

	ATekHoverSail_Character_BP_C_BP_OnStartLandFailed_Params params;
	params.ReasonIndex = ReasonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetSkiffInputs
// ()

void ATekHoverSail_Character_BP_C::ResetSkiffInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ResetSkiffInputs");

	ATekHoverSail_Character_BP_C_ResetSkiffInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetEnvironmentalParticleTraceDistance
// ()
// Parameters:
// struct FName                   ForSocketName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          traceDist                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetEnvironmentalParticleTraceDistance(const struct FName& ForSocketName, float* traceDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetEnvironmentalParticleTraceDistance");

	ATekHoverSail_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params params;
	params.ForSocketName = ForSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceDist != nullptr)
		*traceDist = params.traceDist;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveDestroyed
// ()

void ATekHoverSail_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveDestroyed");

	ATekHoverSail_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageHoverGroundFX
// (NetRequest, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ATekHoverSail_Character_BP_C::Tick_ManageHoverGroundFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageHoverGroundFX");

	ATekHoverSail_Character_BP_C_Tick_ManageHoverGroundFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffFailedTakeoff
// ()

void ATekHoverSail_Character_BP_C::OnSkiffFailedTakeoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffFailedTakeoff");

	ATekHoverSail_Character_BP_C_OnSkiffFailedTakeoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTargetHoverHeight
// ()
// Parameters:
// float                          NewHeight                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::SetTargetHoverHeight(float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTargetHoverHeight");

	ATekHoverSail_Character_BP_C_SetTargetHoverHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSkiffHoverState
// ()

void ATekHoverSail_Character_BP_C::UpdateSkiffHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateSkiffHoverState");

	ATekHoverSail_Character_BP_C_UpdateSkiffHoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffHoverStateChanged
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HoverSkiffHoverState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffHoverStateChanged");

	ATekHoverSail_Character_BP_C_OnSkiffHoverStateChanged_Params params;
	params.NewState = NewState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffHoverState
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::NetSetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.NetSetSkiffHoverState");

	ATekHoverSail_Character_BP_C_NetSetSkiffHoverState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSail_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ATekHoverSail_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetMinHoverHeight
// ()
// Parameters:
// float                          MinHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::GetMinHoverHeight(float* MinHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.GetMinHoverHeight");

	ATekHoverSail_Character_BP_C_GetMinHoverHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinHeight != nullptr)
		*MinHeight = params.MinHeight;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffChangingHoverHeight
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::IsSkiffChangingHoverHeight(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.IsSkiffChangingHoverHeight");

	ATekHoverSail_Character_BP_C_IsSkiffChangingHoverHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_CanFly
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BP_CanFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_CanFly");

	ATekHoverSail_Character_BP_C_BP_CanFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageFuel
// ()

void ATekHoverSail_Character_BP_C::Tick_ManageFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_ManageFuel");

	ATekHoverSail_Character_BP_C_Tick_ManageFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetHUDElements
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ATekHoverSail_Character_BP_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetHUDElements");

	ATekHoverSail_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveAnyDamage");

	ATekHoverSail_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OverrideTerminalVelocity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSail_Character_BP_C::BP_OverrideTerminalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OverrideTerminalVelocity");

	ATekHoverSail_Character_BP_C_BP_OverrideTerminalVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.KillSkiff
// ()

void ATekHoverSail_Character_BP_C::KillSkiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.KillSkiff");

	ATekHoverSail_Character_BP_C_KillSkiff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffCrash
// ()
// Parameters:
// bool                           bFromImpact                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::OnSkiffCrash(bool bFromImpact)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffCrash");

	ATekHoverSail_Character_BP_C_OnSkiffCrash_Params params;
	params.bFromImpact = bFromImpact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_PreventMovementMode");

	ATekHoverSail_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_Crashing
// ()

void ATekHoverSail_Character_BP_C::Tick_Crashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Tick_Crashing");

	ATekHoverSail_Character_BP_C_Tick_Crashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffStartedCrashing
// ()

void ATekHoverSail_Character_BP_C::OnSkiffStartedCrashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffStartedCrashing");

	ATekHoverSail_Character_BP_C_OnSkiffStartedCrashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSail_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPAdjustDamage");

	ATekHoverSail_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPNotifySetRider");

	ATekHoverSail_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateOwningClientReplicatedInputs
// ()

void ATekHoverSail_Character_BP_C::UpdateOwningClientReplicatedInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UpdateOwningClientReplicatedInputs");

	ATekHoverSail_Character_BP_C_UpdateOwningClientReplicatedInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetSkiffMovementInputAxisValue
// ()
// Parameters:
// int                            Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Newval                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::SetSkiffMovementInputAxisValue(int Axis, float Newval)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetSkiffMovementInputAxisValue");

	ATekHoverSail_Character_BP_C_SetSkiffMovementInputAxisValue_Params params;
	params.Axis = Axis;
	params.Newval = Newval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveRight");

	ATekHoverSail_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_InterceptMoveForward");

	ATekHoverSail_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyRightDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSail_Character_BP_C::BPModifyRightDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyRightDirectionInput");

	ATekHoverSail_Character_BP_C_BPModifyRightDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitRightDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPShouldLimitRightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitRightDirection");

	ATekHoverSail_Character_BP_C_BPShouldLimitRightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_AllowWalkableSlopeOverride
// ()
// Parameters:
// class UPrimitiveComponent**    ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BP_AllowWalkableSlopeOverride(class UPrimitiveComponent** ForComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_AllowWalkableSlopeOverride");

	ATekHoverSail_Character_BP_C_BP_AllowWalkableSlopeOverride_Params params;
	params.ForComponent = ForComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnMovementModeChangedNotify");

	ATekHoverSail_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffSetFlight
// ()
// Parameters:
// bool                           bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::OnSkiffSetFlight(bool bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffSetFlight");

	ATekHoverSail_Character_BP_C_OnSkiffSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnSetFlight
// ()
// Parameters:
// bool*                          bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPOnSetFlight(bool* bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOnSetFlight");

	ATekHoverSail_Character_BP_C_BPOnSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveHit
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ATekHoverSail_Character_BP_C::STATIC_ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveHit");

	ATekHoverSail_Character_BP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoSkiffHoverTraces
// (NetReliable, NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bForceTraces                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::DoSkiffHoverTraces(bool bForceTraces)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DoSkiffHoverTraces");

	ATekHoverSail_Character_BP_C_DoSkiffHoverTraces_Params params;
	params.bForceTraces = bForceTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ATekHoverSail_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnLanded");

	ATekHoverSail_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffLandingStageChanged
// ()
// Parameters:
// bool                           bLanding                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::OnSkiffLandingStageChanged(bool bLanding)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.OnSkiffLandingStageChanged");

	ATekHoverSail_Character_BP_C_OnSkiffLandingStageChanged_Params params;
	params.bLanding = bLanding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandingNotify
// ()

void ATekHoverSail_Character_BP_C::BP_OnStartLandingNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_OnStartLandingNotify");

	ATekHoverSail_Character_BP_C_BP_OnStartLandingNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSendInputRPC
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::CanSendInputRPC(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CanSendInputRPC");

	ATekHoverSail_Character_BP_C_CanSendInputRPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	ATekHoverSail_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSail_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ATekHoverSail_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFlyingVelocity
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSail_Character_BP_C::BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPOverrideFlyingVelocity");

	ATekHoverSail_Character_BP_C_BPOverrideFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyDesiredRotation");

	ATekHoverSail_Character_BP_C_BPModifyDesiredRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetForceSkiffDescend
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::SetForceSkiffDescend(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetForceSkiffDescend");

	ATekHoverSail_Character_BP_C_SetForceSkiffDescend_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.StopHovering
// ()

void ATekHoverSail_Character_BP_C::StopHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.StopHovering");

	ATekHoverSail_Character_BP_C_StopHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTimerIntervals
// ()
// Parameters:
// bool                           Fast                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::SetTimerIntervals(bool Fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.SetTimerIntervals");

	ATekHoverSail_Character_BP_C_SetTimerIntervals_Params params;
	params.Fast = Fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitForwardDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSail_Character_BP_C::BPShouldLimitForwardDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPShouldLimitForwardDirection");

	ATekHoverSail_Character_BP_C_BPShouldLimitForwardDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyForwardDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSail_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPModifyForwardDirectionInput");

	ATekHoverSail_Character_BP_C_BPModifyForwardDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerServer
// ()

void ATekHoverSail_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerServer");

	ATekHoverSail_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerNonDedicated
// ()

void ATekHoverSail_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPTimerNonDedicated");

	ATekHoverSail_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UserConstructionScript
// ()

void ATekHoverSail_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.UserConstructionScript");

	ATekHoverSail_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__FinishedFunc
// ()

void ATekHoverSail_Character_BP_C::wobble_timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__FinishedFunc");

	ATekHoverSail_Character_BP_C_wobble_timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__UpdateFunc
// ()

void ATekHoverSail_Character_BP_C::wobble_timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble timeline__UpdateFunc");

	ATekHoverSail_Character_BP_C_wobble_timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__FinishedFunc
// ()

void ATekHoverSail_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__FinishedFunc");

	ATekHoverSail_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__UpdateFunc
// ()

void ATekHoverSail_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_0__UpdateFunc");

	ATekHoverSail_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__FinishedFunc
// ()

void ATekHoverSail_Character_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__FinishedFunc");

	ATekHoverSail_Character_BP_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__UpdateFunc
// ()

void ATekHoverSail_Character_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_1__UpdateFunc");

	ATekHoverSail_Character_BP_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__FinishedFunc
// ()

void ATekHoverSail_Character_BP_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__FinishedFunc");

	ATekHoverSail_Character_BP_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__UpdateFunc
// ()

void ATekHoverSail_Character_BP_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Timeline_2__UpdateFunc");

	ATekHoverSail_Character_BP_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ATekHoverSail_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.InterceptInputEvent");

	ATekHoverSail_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_RequestBraking
// ()

void ATekHoverSail_Character_BP_C::Server_RequestBraking()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_RequestBraking");

	ATekHoverSail_Character_BP_C_Server_RequestBraking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveBeginPlay
// ()

void ATekHoverSail_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ReceiveBeginPlay");

	ATekHoverSail_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPUnstasis
// ()

void ATekHoverSail_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.BPUnstasis");

	ATekHoverSail_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnStartSkiffLanding
// ()
// Parameters:
// bool                           bLanding                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Multi_OnStartSkiffLanding(bool bLanding)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnStartSkiffLanding");

	ATekHoverSail_Character_BP_C_Multi_OnStartSkiffLanding_Params params;
	params.bLanding = bLanding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffSetFlight
// ()
// Parameters:
// bool                           bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Multi_OnSkiffSetFlight(bool bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffSetFlight");

	ATekHoverSail_Character_BP_C_Multi_OnSkiffSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncMovementInputs
// ()
// Parameters:
// struct FVector                 MoveInputs                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Server_SyncMovementInputs(const struct FVector& MoveInputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncMovementInputs");

	ATekHoverSail_Character_BP_C_Server_SyncMovementInputs_Params params;
	params.MoveInputs = MoveInputs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnFireInputPressed
// ()
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Server_OnFireInputPressed(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnFireInputPressed");

	ATekHoverSail_Character_BP_C_Server_OnFireInputPressed_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnTargetingInputPressed
// ()
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Server_OnTargetingInputPressed(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_OnTargetingInputPressed");

	ATekHoverSail_Character_BP_C_Server_OnTargetingInputPressed_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffStartedCrashing
// ()

void ATekHoverSail_Character_BP_C::Multi_OnSkiffStartedCrashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffStartedCrashing");

	ATekHoverSail_Character_BP_C_Multi_OnSkiffStartedCrashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffCrash
// ()
// Parameters:
// bool                           bFromImpact                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Multi_OnSkiffCrash(bool bFromImpact)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffCrash");

	ATekHoverSail_Character_BP_C_Multi_OnSkiffCrash_Params params;
	params.bFromImpact = bFromImpact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DestroySkiff
// ()

void ATekHoverSail_Character_BP_C::DestroySkiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.DestroySkiff");

	ATekHoverSail_Character_BP_C_DestroySkiff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CrashTimeout
// ()

void ATekHoverSail_Character_BP_C::CrashTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.CrashTimeout");

	ATekHoverSail_Character_BP_C_CrashTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffHoverStateChanged
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HoverSkiffHoverState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Multi_OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffHoverStateChanged");

	ATekHoverSail_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params params;
	params.NewState = NewState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffHoverState
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Server_SetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffHoverState");

	ATekHoverSail_Character_BP_C_Server_SetSkiffHoverState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffFailedTakeoff
// ()

void ATekHoverSail_Character_BP_C::Multi_OnSkiffFailedTakeoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffFailedTakeoff");

	ATekHoverSail_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
// ()
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Multi_OnSkiffRepairModeStateChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_OnSkiffRepairModeStateChanged");

	ATekHoverSail_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_SyncFuelPercent
// ()
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Multi_SyncFuelPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multi_SyncFuelPercent");

	ATekHoverSail_Character_BP_C_Multi_SyncFuelPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffFlight
// ()
// Parameters:
// bool                           NewFlight                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Server_SetSkiffFlight(bool NewFlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SetSkiffFlight");

	ATekHoverSail_Character_BP_C_Server_SetSkiffFlight_Params params;
	params.NewFlight = NewFlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_StartSkiffLanding
// ()

void ATekHoverSail_Character_BP_C::Server_StartSkiffLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_StartSkiffLanding");

	ATekHoverSail_Character_BP_C_Server_StartSkiffLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi close sail
// ()

void ATekHoverSail_Character_BP_C::multi_close_sail()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi close sail");

	ATekHoverSail_Character_BP_C_multi_close_sail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi open sail
// ()

void ATekHoverSail_Character_BP_C::multi_open_sail()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multi open sail");

	ATekHoverSail_Character_BP_C_multi_open_sail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.full boosted multicast
// ()

void ATekHoverSail_Character_BP_C::full_boosted_multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.full boosted multicast");

	ATekHoverSail_Character_BP_C_full_boosted_multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.open sail
// ()
// Parameters:
// bool                           is_open                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::open_sail(bool is_open)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.open sail");

	ATekHoverSail_Character_BP_C_open_sail_Params params;
	params.is_open = is_open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble
// ()

void ATekHoverSail_Character_BP_C::wobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.wobble");

	ATekHoverSail_Character_BP_C_wobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.resync anim
// ()

void ATekHoverSail_Character_BP_C::resync_anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.resync anim");

	ATekHoverSail_Character_BP_C_resync_anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncAim
// ()
// Parameters:
// struct FVector                 Aiming_Direction               (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Server_SyncAim(const struct FVector& Aiming_Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Server_SyncAim");

	ATekHoverSail_Character_BP_C_Server_SyncAim_Params params;
	params.Aiming_Direction = Aiming_Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Successfully Lands A Trick
// ()

void ATekHoverSail_Character_BP_C::Successfully_Lands_A_Trick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Successfully Lands A Trick");

	ATekHoverSail_Character_BP_C_Successfully_Lands_A_Trick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.play camera impact on ground
// ()

void ATekHoverSail_Character_BP_C::play_camera_impact_on_ground()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.play camera impact on ground");

	ATekHoverSail_Character_BP_C_play_camera_impact_on_ground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on start aerial boost
// ()

void ATekHoverSail_Character_BP_C::on_start_aerial_boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on start aerial boost");

	ATekHoverSail_Character_BP_C_on_start_aerial_boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ServerSyncMovementValues
// ()
// Parameters:
// float                          synced_right                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Synced_Fwd                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::ServerSyncMovementValues(float synced_right, float Synced_Fwd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ServerSyncMovementValues");

	ATekHoverSail_Character_BP_C_ServerSyncMovementValues_Params params;
	params.synced_right = synced_right;
	params.Synced_Fwd = Synced_Fwd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on recharge aerial boost
// ()

void ATekHoverSail_Character_BP_C::on_recharge_aerial_boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on recharge aerial boost");

	ATekHoverSail_Character_BP_C_on_recharge_aerial_boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on delay before recharge aerial boost
// ()

void ATekHoverSail_Character_BP_C::on_delay_before_recharge_aerial_boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.on delay before recharge aerial boost");

	ATekHoverSail_Character_BP_C_on_delay_before_recharge_aerial_boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Drift Boosted Multicast
// ()
// Parameters:
// struct FVector                 boost_direction                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forward_boost                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::Drift_Boosted_Multicast(const struct FVector& boost_direction, bool forward_boost)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Drift Boosted Multicast");

	ATekHoverSail_Character_BP_C_Drift_Boosted_Multicast_Params params;
	params.boost_direction = boost_direction;
	params.forward_boost = forward_boost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast completed trick in air
// ()

void ATekHoverSail_Character_BP_C::Multicast_completed_trick_in_air()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast completed trick in air");

	ATekHoverSail_Character_BP_C_Multicast_completed_trick_in_air_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.PUBLIC: Add Aerial Boost Charge Percentage Amount
// ()
// Parameters:
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::PUBLIC__Add_Aerial_Boost_Charge_Percentage_Amount(float Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.PUBLIC: Add Aerial Boost Charge Percentage Amount");

	ATekHoverSail_Character_BP_C_PUBLIC__Add_Aerial_Boost_Charge_Percentage_Amount_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multicast add aerial boost charge
// ()
// Parameters:
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::multicast_add_aerial_boost_charge(float Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.multicast add aerial boost charge");

	ATekHoverSail_Character_BP_C_multicast_add_aerial_boost_charge_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to riding socket
// ()

void ATekHoverSail_Character_BP_C::lerp_to_riding_socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to riding socket");

	ATekHoverSail_Character_BP_C_lerp_to_riding_socket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to riding socket
// ()

void ATekHoverSail_Character_BP_C::stop_lerp_to_riding_socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to riding socket");

	ATekHoverSail_Character_BP_C_stop_lerp_to_riding_socket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to open sail socket
// ()

void ATekHoverSail_Character_BP_C::lerp_to_open_sail_socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.lerp to open sail socket");

	ATekHoverSail_Character_BP_C_lerp_to_open_sail_socket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to open sail socket
// ()

void ATekHoverSail_Character_BP_C::stop_lerp_to_open_sail_socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.stop lerp to open sail socket");

	ATekHoverSail_Character_BP_C_stop_lerp_to_open_sail_socket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.dismount
// ()

void ATekHoverSail_Character_BP_C::dismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.dismount");

	ATekHoverSail_Character_BP_C_dismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast_RefreshColors
// ()

void ATekHoverSail_Character_BP_C::Multicast_RefreshColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.Multicast_RefreshColors");

	ATekHoverSail_Character_BP_C_Multicast_RefreshColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.MultiTrickActivationText
// ()

void ATekHoverSail_Character_BP_C::MultiTrickActivationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.MultiTrickActivationText");

	ATekHoverSail_Character_BP_C_MultiTrickActivationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ExecuteUbergraph_TekHoverSail_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSail_Character_BP_C::ExecuteUbergraph_TekHoverSail_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_BP.TekHoverSail_Character_BP_C.ExecuteUbergraph_TekHoverSail_Character_BP");

	ATekHoverSail_Character_BP_C_ExecuteUbergraph_TekHoverSail_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
