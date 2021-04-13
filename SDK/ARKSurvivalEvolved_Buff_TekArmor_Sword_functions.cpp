// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Sword_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventBlockingWithShield
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Sword_C::PreventBlockingWithShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventBlockingWithShield");

	ABuff_TekArmor_Sword_C_PreventBlockingWithShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ShieldActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Sword_C::ShieldActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ShieldActive");

	ABuff_TekArmor_Sword_C_ShieldActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.HasShield
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Sword_C::HasShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.HasShield");

	ABuff_TekArmor_Sword_C_HasShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelatedTekArmorRef
// ()
// Parameters:
// class UPrimalItemArmor_Base_Tek_C* tekArmorRef                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelatedTekArmorRef");

	ABuff_TekArmor_Sword_C_GetRelatedTekArmorRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tekArmorRef != nullptr)
		*tekArmorRef = params.tekArmorRef;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Can Decrease Element Ammo
// ()
// Parameters:
// int                            AmountToDecrease               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForChargedState              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDecrease                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Can_Decrease_Element_Ammo(int AmountToDecrease, bool IsForChargedState, bool* CanDecrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Can Decrease Element Ammo");

	ABuff_TekArmor_Sword_C_Can_Decrease_Element_Ammo_Params params;
	params.AmountToDecrease = AmountToDecrease;
	params.IsForChargedState = IsForChargedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDecrease != nullptr)
		*CanDecrease = params.CanDecrease;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.TryDecreaseElementAmmo
// ()
// Parameters:
// int                            AmountToDecrease               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForChargedState              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::TryDecreaseElementAmmo(int AmountToDecrease, bool IsForChargedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.TryDecreaseElementAmmo");

	ABuff_TekArmor_Sword_C_TryDecreaseElementAmmo_Params params;
	params.AmountToDecrease = AmountToDecrease;
	params.IsForChargedState = IsForChargedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Sword_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPCheckPreventInput");

	ABuff_TekArmor_Sword_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanPhysicallyTekPunch
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::CanPhysicallyTekPunch(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanPhysicallyTekPunch");

	ABuff_TekArmor_Sword_C_CanPhysicallyTekPunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Should Damage Actor
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Should_Damage_Actor(class AActor** Victim, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Should Damage Actor");

	ABuff_TekArmor_Sword_C_Should_Damage_Actor_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Has Line Of SightToActor
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Has_Line_Of_SightToActor(class AActor* Actor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Has Line Of SightToActor");

	ABuff_TekArmor_Sword_C_Has_Line_Of_SightToActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ArePunchChargeAnimsPlaying
// ()
// Parameters:
// bool                           cleanUpAnims                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::ArePunchChargeAnimsPlaying(bool cleanUpAnims, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ArePunchChargeAnimsPlaying");

	ABuff_TekArmor_Sword_C_ArePunchChargeAnimsPlaying_Params params;
	params.cleanUpAnims = cleanUpAnims;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PlayPunchAnimsByState
// ()
// Parameters:
// TEnumAsByte<E_TekGlovePunchState> State                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::PlayPunchAnimsByState(TEnumAsByte<E_TekGlovePunchState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PlayPunchAnimsByState");

	ABuff_TekArmor_Sword_C_PlayPunchAnimsByState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsPlayerAboveGround
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::IsPlayerAboveGround(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsPlayerAboveGround");

	ABuff_TekArmor_Sword_C_IsPlayerAboveGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AreTekPantsEquipped
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABuff_TekArmor_Pants_C*  tekPantsRef                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::AreTekPantsEquipped(bool* Result, class ABuff_TekArmor_Pants_C** tekPantsRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AreTekPantsEquipped");

	ABuff_TekArmor_Sword_C_AreTekPantsEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (tekPantsRef != nullptr)
		*tekPantsRef = params.tekPantsRef;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekArmor_Sword_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetBuffPostprocessIntensity");

	ABuff_TekArmor_Sword_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPDeactivated");

	ABuff_TekArmor_Sword_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Update Local Vars by State
// (NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// TEnumAsByte<E_TekGlovePunchState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::STATIC_Update_Local_Vars_by_State(TEnumAsByte<E_TekGlovePunchState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Update Local Vars by State");

	ABuff_TekArmor_Sword_C_Update_Local_Vars_by_State_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetPlayerCameraLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::GetPlayerCameraLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetPlayerCameraLocation");

	ABuff_TekArmor_Sword_C_GetPlayerCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPSetupForInstigator");

	ABuff_TekArmor_Sword_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchEnd
// ()

void ABuff_TekArmor_Sword_C::RocketPunchEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchEnd");

	ABuff_TekArmor_Sword_C_RocketPunchEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetOwningPlayerVariables
// ()

void ABuff_TekArmor_Sword_C::ResetOwningPlayerVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetOwningPlayerVariables");

	ABuff_TekArmor_Sword_C_ResetOwningPlayerVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Sword_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventJump");

	ABuff_TekArmor_Sword_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.NetSetTekPunchState
// ()
// Parameters:
// TEnumAsByte<E_TekGlovePunchState> newPunchState                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::NetSetTekPunchState(TEnumAsByte<E_TekGlovePunchState> newPunchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.NetSetTekPunchState");

	ABuff_TekArmor_Sword_C_NetSetTekPunchState_Params params;
	params.newPunchState = newPunchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickServer");

	ABuff_TekArmor_Sword_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Client_SetTekPunchState
// ()
// Parameters:
// TEnumAsByte<E_TekGlovePunchState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Client_SetTekPunchState(TEnumAsByte<E_TekGlovePunchState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Client_SetTekPunchState");

	ABuff_TekArmor_Sword_C_Client_SetTekPunchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetTimeToRocketPunchTarget
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekArmor_Sword_C::GetTimeToRocketPunchTarget(const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetTimeToRocketPunchTarget");

	ABuff_TekArmor_Sword_C_GetTimeToRocketPunchTarget_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CheckForTargetsWhileRocketPunching
// ()
// Parameters:
// bool                           punchNow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::CheckForTargetsWhileRocketPunching(bool* punchNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CheckForTargetsWhileRocketPunching");

	ABuff_TekArmor_Sword_C_CheckForTargetsWhileRocketPunching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (punchNow != nullptr)
		*punchNow = params.punchNow;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Set AudioParams and Play
// ()
// Parameters:
// class UAudioComponent*         Audio                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlaySound                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Set_AudioParams_and_Play(float Volume, float Pitch, bool PlaySound, class UAudioComponent** Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Set AudioParams and Play");

	ABuff_TekArmor_Sword_C_Set_AudioParams_and_Play_Params params;
	params.Volume = Volume;
	params.Pitch = Pitch;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Audio != nullptr)
		*Audio = params.Audio;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnRep_CurrentPunchState
// ()

void ABuff_TekArmor_Sword_C::OnRep_CurrentPunchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnRep_CurrentPunchState");

	ABuff_TekArmor_Sword_C_OnRep_CurrentPunchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelativeCenterOfMass
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekArmor_Sword_C::GetRelativeCenterOfMass(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelativeCenterOfMass");

	ABuff_TekArmor_Sword_C_GetRelativeCenterOfMass_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.DrawBuffFloatingHUD");

	ABuff_TekArmor_Sword_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ScanForRocketFistTargets
// (NetReliable, Exec, Native, NetResponse, Static, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           anyHit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::STATIC_ScanForRocketFistTargets(float Range, bool* anyHit, struct FVector* HitLocation, class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ScanForRocketFistTargets");

	ABuff_TekArmor_Sword_C_ScanForRocketFistTargets_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (anyHit != nullptr)
		*anyHit = params.anyHit;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitActor != nullptr)
		*HitActor = params.HitActor;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AccurateSphereCheck
// (NetRequest, Event, NetMulticast, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreFriendlies               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitPawnOrStructure             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::AccurateSphereCheck(const struct FVector& EndLocation, float SphereRadius, bool IgnoreFriendlies, bool* HitPawnOrStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AccurateSphereCheck");

	ABuff_TekArmor_Sword_C_AccurateSphereCheck_Params params;
	params.EndLocation = EndLocation;
	params.SphereRadius = SphereRadius;
	params.IgnoreFriendlies = IgnoreFriendlies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitPawnOrStructure != nullptr)
		*HitPawnOrStructure = params.HitPawnOrStructure;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Spawn Sound at Fist Location
// (NetRequest, Native, NetResponse, NetMulticast, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class USoundBase*              SoundToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Spawn_Sound_at_Fist_Location(class USoundBase* SoundToSpawn, float VolumeMultiplier, float PitchMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Spawn Sound at Fist Location");

	ABuff_TekArmor_Sword_C_Spawn_Sound_at_Fist_Location_Params params;
	params.SoundToSpawn = SoundToSpawn;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickClient");

	ABuff_TekArmor_Sword_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Get Punch Location
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Get_Punch_Location(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Get Punch Location");

	ABuff_TekArmor_Sword_C_Get_Punch_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchStart
// ()

void ABuff_TekArmor_Sword_C::RocketPunchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchStart");

	ABuff_TekArmor_Sword_C_RocketPunchStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Punch
// (NetReliable, Exec, Event, MulticastDelegate, Public, Private, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ABuff_TekArmor_Sword_C::Punch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Punch");

	ABuff_TekArmor_Sword_C_Punch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanUseTekAbility
// ()
// Parameters:
// bool*                          bNotifyIfOutOfElement          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanUseTekAbility");

	ABuff_TekArmor_Sword_C_CanUseTekAbility_Params params;
	params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.SetCastedArmorPieceRef
// ()

void ABuff_TekArmor_Sword_C::SetCastedArmorPieceRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.SetCastedArmorPieceRef");

	ABuff_TekArmor_Sword_C_SetCastedArmorPieceRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UserConstructionScript
// ()

void ABuff_TekArmor_Sword_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UserConstructionScript");

	ABuff_TekArmor_Sword_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_88
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Targeting_K2Node_InputActionEvent_88()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_88");

	ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_88_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_87
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Targeting_K2Node_InputActionEvent_87()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_87");

	ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_87_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_86
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_AltFire_K2Node_InputActionEvent_86()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_86");

	ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_86_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_85
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_AltFire_K2Node_InputActionEvent_85()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_85");

	ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_85_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_84
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Fire_K2Node_InputActionEvent_84()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_84");

	ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_84_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_83
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Fire_K2Node_InputActionEvent_83()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_83");

	ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_83_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_43
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_43()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_43");

	ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_43_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_42
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_42()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_42");

	ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_42_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_41
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_41()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_41");

	ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_41_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_40
// ()

void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_40()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_40");

	ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_40_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Pressed
// ()

void ABuff_TekArmor_Sword_C::OnSuperPunch_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Pressed");

	ABuff_TekArmor_Sword_C_OnSuperPunch_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Released
// ()

void ABuff_TekArmor_Sword_C::OnSuperPunch_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Released");

	ABuff_TekArmor_Sword_C_OnSuperPunch_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Server_SetPunchChargeState
// ()
// Parameters:
// TEnumAsByte<E_TekGlovePunchState> newPunchState                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::Server_SetPunchChargeState(TEnumAsByte<E_TekGlovePunchState> newPunchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Server_SetPunchChargeState");

	ABuff_TekArmor_Sword_C_Server_SetPunchChargeState_Params params;
	params.newPunchState = newPunchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetCanLandAfterDelay
// ()

void ABuff_TekArmor_Sword_C::ResetCanLandAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetCanLandAfterDelay");

	ABuff_TekArmor_Sword_C_ResetCanLandAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UpdateClientHasValidRocketPunchTarget
// ()
// Parameters:
// bool                           newHasTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        newTargetPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::UpdateClientHasValidRocketPunchTarget(bool newHasTarget, class APrimalCharacter* newTargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UpdateClientHasValidRocketPunchTarget");

	ABuff_TekArmor_Sword_C_UpdateClientHasValidRocketPunchTarget_Params params;
	params.newHasTarget = newHasTarget;
	params.newTargetPawn = newTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetPunchStateAfterDelay
// ()

void ABuff_TekArmor_Sword_C::ResetPunchStateAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetPunchStateAfterDelay");

	ABuff_TekArmor_Sword_C_ResetPunchStateAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFirePressed
// ()

void ABuff_TekArmor_Sword_C::Sword_AltFirePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFirePressed");

	ABuff_TekArmor_Sword_C_Sword_AltFirePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFireReleased
// ()

void ABuff_TekArmor_Sword_C::Sword_AltFireReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFireReleased");

	ABuff_TekArmor_Sword_C_Sword_AltFireReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ExecuteUbergraph_Buff_TekArmor_Sword
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_C::ExecuteUbergraph_Buff_TekArmor_Sword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ExecuteUbergraph_Buff_TekArmor_Sword");

	ABuff_TekArmor_Sword_C_ExecuteUbergraph_Buff_TekArmor_Sword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
