// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
// ()
// Parameters:
// bool                           HasEngrams                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::HasRequiredEngrams(bool* HasEngrams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams");

	ABuff_TekArmor_C_HasRequiredEngrams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasEngrams != nullptr)
		*HasEngrams = params.HasEngrams;
}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
// ()
// Parameters:
// bool                           bIsDisabled                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::IsTekBuffDisabled(bool* bIsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled");

	ABuff_TekArmor_C_IsTekBuffDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsDisabled != nullptr)
		*bIsDisabled = params.bIsDisabled;
}


// Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
// ()
// Parameters:
// class APrimalCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_restricted                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::check_genesis_restrictions_for_player(class APrimalCharacter* Player, bool* is_restricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player");

	ABuff_TekArmor_C_check_genesis_restrictions_for_player_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_restricted != nullptr)
		*is_restricted = params.is_restricted;
}


// Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.BPActivated");

	ABuff_TekArmor_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
// ()
// Parameters:
// bool                           restricted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Is_Restricted_Because_Of_Genesis_Map(bool* restricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map");

	ABuff_TekArmor_C_Is_Restricted_Because_Of_Genesis_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (restricted != nullptr)
		*restricted = params.restricted;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Get_Is_Player_in_SealedSpace(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace");

	ABuff_TekArmor_C_Get_Is_Player_in_SealedSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
// ()
// Parameters:
// bool                           OutValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::IsAbilityValid(bool* OutValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid");

	ABuff_TekArmor_C_IsAbilityValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValid != nullptr)
		*OutValid = params.OutValid;
}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          waterVolumeTopZ                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::IsPlayerInWaterVolume(bool* Result, float* waterVolumeTopZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume");

	ABuff_TekArmor_C_IsPlayerInWaterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (waterVolumeTopZ != nullptr)
		*waterVolumeTopZ = params.waterVolumeTopZ;
}


// Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
// ()
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      InTransform                    (Parm, OutParm, ReferenceParm, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::SpawnFX(class UParticleSystem* EmitterTemplate, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, struct UObject_FTransform* InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX");

	ABuff_TekArmor_C_SpawnFX_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTransform != nullptr)
		*InTransform = params.InTransform;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
// ()
// Parameters:
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Should_Damage_Actor(class AActor* Victim, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor");

	ABuff_TekArmor_C_Should_Damage_Actor_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
// ()

void ABuff_TekArmor_C::ResetPlayerFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV");

	ABuff_TekArmor_C_ResetPlayerFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
// ()
// Parameters:
// bool                           newIgnore                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::SetTekIgnoreLookInput(bool newIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput");

	ABuff_TekArmor_C_SetTekIgnoreLookInput_Params params;
	params.newIgnore = newIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
// ()
// Parameters:
// bool                           newIgnore                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::SetTekIgnoreMoveInput(bool newIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput");

	ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params params;
	params.newIgnore = newIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect");

	ABuff_TekArmor_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated");

	ABuff_TekArmor_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.ResetTargetFOV
// ()

void ABuff_TekArmor_C::ResetTargetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ResetTargetFOV");

	ABuff_TekArmor_C_ResetTargetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::IsWarping_FOV(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV");

	ABuff_TekArmor_C_IsWarping_FOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
// ()
// Parameters:
// class ABuff_TekArmor_C*        Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Get_DefaultTekBuff(class ABuff_TekArmor_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff");

	ABuff_TekArmor_C_Get_DefaultTekBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
// ()
// Parameters:
// class APrimalCharacter*        Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::GetDefaultPlayer(class APrimalCharacter** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer");

	ABuff_TekArmor_C_GetDefaultPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ElementCost                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Client_Consume_Element_After_Time(float DeltaTime, int ElementCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time");

	ABuff_TekArmor_C_Client_Consume_Element_After_Time_Params params;
	params.DeltaTime = DeltaTime;
	params.ElementCost = ElementCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator");

	ABuff_TekArmor_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::IsPlayerGrounded(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded");

	ABuff_TekArmor_C_IsPlayerGrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
// ()
// Parameters:
// class AShooterPlayerCameraManager* Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager");

	ABuff_TekArmor_C_Get_RefOwningPlayer_Camera_Manager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
// ()
// Parameters:
// float                          intensityRatio                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           warpIn                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::UpdatePlayerFOV(float intensityRatio, bool warpIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV");

	ABuff_TekArmor_C_UpdatePlayerFOV_Params params;
	params.intensityRatio = intensityRatio;
	params.warpIn = warpIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
// ()
// Parameters:
// class UCharacterMovementComponent* Movement                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** Movement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement");

	ABuff_TekArmor_C_Get_Ref_Owning_PlayerMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Movement != nullptr)
		*Movement = params.Movement;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
// ()
// Parameters:
// class AShooterPlayerController* Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController");

	ABuff_TekArmor_C_Get_Ref_Owning_PlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::GetRef_OwningPlayer(class AShooterCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer");

	ABuff_TekArmor_C_GetRef_OwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::AreAnyTekAbilitiesActive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive");

	ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
// ()
// Parameters:
// unsigned char                  armorType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::IsTekArmorUsingAbility_(unsigned char armorType, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?");

	ABuff_TekArmor_C_IsTekArmorUsingAbility__Params params;
	params.armorType = armorType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::DisplayTekArmorMessage(const class FString& Message, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage");

	ABuff_TekArmor_C_DisplayTekArmorMessage_Params params;
	params.Message = Message;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.SetCastedArmorPieceRef
// ()

void ABuff_TekArmor_C::SetCastedArmorPieceRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SetCastedArmorPieceRef");

	ABuff_TekArmor_C_SetCastedArmorPieceRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef
// ()
// Parameters:
// class UPrimalItemArmor_Base_Tek_C* tekArmorRef                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef");

	ABuff_TekArmor_C_GetRelatedTekArmorRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tekArmorRef != nullptr)
		*tekArmorRef = params.tekArmorRef;
}


// Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
// ()
// Parameters:
// bool                           bNotifyIfOutOfElement          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility");

	ABuff_TekArmor_C_CanUseTekAbility_Params params;
	params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_TekArmor.Buff_TekArmor_C.UserConstructionScript
// ()

void ABuff_TekArmor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.UserConstructionScript");

	ABuff_TekArmor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34
// ()

void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34");

	ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33
// ()

void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33");

	ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
// ()
// Parameters:
// int                            AmountToDecreaseBy             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalEquipmentType> ItemSlot                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Equipped_TryToDecreaseElement(int AmountToDecreaseBy, TEnumAsByte<EPrimalEquipmentType> ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement");

	ABuff_TekArmor_C_Equipped_TryToDecreaseElement_Params params;
	params.AmountToDecreaseBy = AmountToDecreaseBy;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
// ()
// Parameters:
// TEnumAsByte<EPrimalEquipmentType> ItemSlot                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Equipped_SetToMaxElement(TEnumAsByte<EPrimalEquipmentType> ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement");

	ABuff_TekArmor_C_Equipped_SetToMaxElement_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX
// ()
// Parameters:
// class UParticleSystem*         ParticleTemplate               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)
// float                          soundVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          soundPitch                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase* Sound, const struct UObject_FTransform& Transform, float soundVolume, float soundPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX");

	ABuff_TekArmor_C_Multi_SpawnFX_Params params;
	params.ParticleTemplate = ParticleTemplate;
	params.Sound = Sound;
	params.Transform = Transform;
	params.soundVolume = soundVolume;
	params.soundPitch = soundPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.CheckForArmorRef
// ()

void ABuff_TekArmor_C::CheckForArmorRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.CheckForArmorRef");

	ABuff_TekArmor_C_CheckForArmorRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive
// ()
// Parameters:
// bool                           newActive                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::Server_SetTekAbilityActive(bool newActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive");

	ABuff_TekArmor_C_Server_SetTekAbilityActive_Params params;
	params.newActive = newActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.RateLimitedGenesisAbilityWarning
// ()

void ABuff_TekArmor_C::RateLimitedGenesisAbilityWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.RateLimitedGenesisAbilityWarning");

	ABuff_TekArmor_C_RateLimitedGenesisAbilityWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.ReceiveBeginPlay
// ()

void ABuff_TekArmor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ReceiveBeginPlay");

	ABuff_TekArmor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.ReceiveDestroyed
// ()

void ABuff_TekArmor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ReceiveDestroyed");

	ABuff_TekArmor_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_C::ExecuteUbergraph_Buff_TekArmor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor");

	ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
