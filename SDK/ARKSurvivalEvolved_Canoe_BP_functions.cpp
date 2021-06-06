// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Canoe_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Canoe_BP.Canoe_BP_C.OnCanoeAtRestStateChanged
// ()

void ACanoe_BP_C::OnCanoeAtRestStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnCanoeAtRestStateChanged");

	ACanoe_BP_C_OnCanoeAtRestStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.UpdateCanoeAtRest
// ()

void ACanoe_BP_C::UpdateCanoeAtRest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCanoeAtRest");

	ACanoe_BP_C_UpdateCanoeAtRest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity_External
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::GetCanoeVelocity_External(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity_External");

	ACanoe_BP_C_GetCanoeVelocity_External_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::GetCanoeVelocity(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity");

	ACanoe_BP_C_GetCanoeVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Canoe_BP.Canoe_BP_C.BPAllowMovementSound
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BPAllowMovementSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPAllowMovementSound");

	ACanoe_BP_C_BPAllowMovementSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.CanModifyCanoeDesiredRotation
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::CanModifyCanoeDesiredRotation(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CanModifyCanoeDesiredRotation");

	ACanoe_BP_C_CanModifyCanoeDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Canoe_BP.Canoe_BP_C.GetCanoeNumPassengers
// ()
// Parameters:
// int                            NumPassengers                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::GetCanoeNumPassengers(int* NumPassengers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCanoeNumPassengers");

	ACanoe_BP_C_GetCanoeNumPassengers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumPassengers != nullptr)
		*NumPassengers = params.NumPassengers;
}


// Function Canoe_BP.Canoe_BP_C.DoesCanoeHaveAnyPassengers
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::DoesCanoeHaveAnyPassengers(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DoesCanoeHaveAnyPassengers");

	ACanoe_BP_C_DoesCanoeHaveAnyPassengers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Canoe_BP.Canoe_BP_C.IsPlayerCanoePassenger
// ()
// Parameters:
// class AShooterCharacter*       CheckPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::IsPlayerCanoePassenger(class AShooterCharacter* CheckPlayer, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.IsPlayerCanoePassenger");

	ACanoe_BP_C_IsPlayerCanoePassenger_Params params;
	params.CheckPlayer = CheckPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Canoe_BP.Canoe_BP_C.UpdateCanoeHudTextOverlay
// (Event, Static, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::STATIC_UpdateCanoeHudTextOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCanoeHudTextOverlay");

	ACanoe_BP_C_UpdateCanoeHudTextOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.RemoveCanoeHudTextOverlayFromPassenger
// ()
// Parameters:
// class AShooterCharacter*       FromPassenger                  (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::RemoveCanoeHudTextOverlayFromPassenger(class AShooterCharacter* FromPassenger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.RemoveCanoeHudTextOverlayFromPassenger");

	ACanoe_BP_C_RemoveCanoeHudTextOverlayFromPassenger_Params params;
	params.FromPassenger = FromPassenger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.AddCanoeHudTextOverlayToPassenger
// ()
// Parameters:
// class AShooterCharacter*       ToPassenger                    (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::AddCanoeHudTextOverlayToPassenger(class AShooterCharacter* ToPassenger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.AddCanoeHudTextOverlayToPassenger");

	ACanoe_BP_C_AddCanoeHudTextOverlayToPassenger_Params params;
	params.ToPassenger = ToPassenger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPRemovedAttachmentsForItem
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BPRemovedAttachmentsForItem(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPRemovedAttachmentsForItem");

	ACanoe_BP_C_BPRemovedAttachmentsForItem_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BP_OnPaintingComponentInitialized
// ()
// Parameters:
// class UStructurePaintingComponent** PaintingComp                   (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BP_OnPaintingComponentInitialized(class UStructurePaintingComponent** PaintingComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnPaintingComponentInitialized");

	ACanoe_BP_C_BP_OnPaintingComponentInitialized_Params params;
	params.PaintingComp = PaintingComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.CanUsePassengerReplicatedInputQueue
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::CanUsePassengerReplicatedInputQueue(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CanUsePassengerReplicatedInputQueue");

	ACanoe_BP_C_CanUsePassengerReplicatedInputQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Canoe_BP.Canoe_BP_C.OnRep_bPreventCanoeExitingWater
// ()

void ACanoe_BP_C::OnRep_bPreventCanoeExitingWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnRep_bPreventCanoeExitingWater");

	ACanoe_BP_C_OnRep_bPreventCanoeExitingWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.CanDynamicalyPreventExitingWater
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::CanDynamicalyPreventExitingWater(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CanDynamicalyPreventExitingWater");

	ACanoe_BP_C_CanDynamicalyPreventExitingWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Canoe_BP.Canoe_BP_C.UpdateBeachInputHUD
// ()

void ACanoe_BP_C::UpdateBeachInputHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateBeachInputHUD");

	ACanoe_BP_C_UpdateBeachInputHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.OnUpdateCanoePreventExitingWater
// ()
// Parameters:
// bool                           bNewVal                        (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::OnUpdateCanoePreventExitingWater(bool bNewVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnUpdateCanoePreventExitingWater");

	ACanoe_BP_C_OnUpdateCanoePreventExitingWater_Params params;
	params.bNewVal = bNewVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.UpdateCanoeWantsToBeach
// ()

void ACanoe_BP_C::UpdateCanoeWantsToBeach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCanoeWantsToBeach");

	ACanoe_BP_C_UpdateCanoeWantsToBeach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_PreventMovementMode");

	ACanoe_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.UpdatePreventCanoeFromExitingWater
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::STATIC_UpdatePreventCanoeFromExitingWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdatePreventCanoeFromExitingWater");

	ACanoe_BP_C_UpdatePreventCanoeFromExitingWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.PackInputAxesIntoVector2D
// ()
// Parameters:
// float                          Forward                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::PackInputAxesIntoVector2D(float Forward, float Right, struct FVector2D* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PackInputAxesIntoVector2D");

	ACanoe_BP_C_PackInputAxesIntoVector2D_Params params;
	params.Forward = Forward;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Right
// (Event, NetResponse, Static, NetMulticast, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::STATIC_ProcessReceivedPassengerInputsQueue_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Right");

	ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Forward
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::ProcessReceivedPassengerInputsQueue_Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Forward");

	ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.ConvertServerReceivedPassengerInputsIntoVector2Ds
// (Net, NetReliable, Native, Event, Static, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector2D>       Inputs                         (Parm, OutParm, ZeroConstructor)

void ACanoe_BP_C::STATIC_ConvertServerReceivedPassengerInputsIntoVector2Ds(TArray<struct FVector2D>* Inputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ConvertServerReceivedPassengerInputsIntoVector2Ds");

	ACanoe_BP_C_ConvertServerReceivedPassengerInputsIntoVector2Ds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inputs != nullptr)
		*Inputs = params.Inputs;
}


// Function Canoe_BP.Canoe_BP_C.BP_OverrideSwimmingAcceleration
// ()
// Parameters:
// struct FVector                 ModifyAcceleration             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BP_OverrideSwimmingAcceleration(float* DeltaTime, struct FVector* ModifyAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OverrideSwimmingAcceleration");

	ACanoe_BP_C_BP_OverrideSwimmingAcceleration_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifyAcceleration != nullptr)
		*ModifyAcceleration = params.ModifyAcceleration;
}


// Function Canoe_BP.Canoe_BP_C.ReceivedSavedPassengerInputStruct
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCanoePassengerClientInputAxes ClientSavedInputs              (Parm)
// class AShooterCharacter*       ForPassengerPlayer             (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::STATIC_ReceivedSavedPassengerInputStruct(const struct FCanoePassengerClientInputAxes& ClientSavedInputs, class AShooterCharacter* ForPassengerPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ReceivedSavedPassengerInputStruct");

	ACanoe_BP_C_ReceivedSavedPassengerInputStruct_Params params;
	params.ClientSavedInputs = ClientSavedInputs;
	params.ForPassengerPlayer = ForPassengerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPOverridePassengerAdditiveAnim
// ()
// Parameters:
// class APrimalCharacter**       ForPassenger                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* ACanoe_BP_C::BPOverridePassengerAdditiveAnim(class APrimalCharacter** ForPassenger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOverridePassengerAdditiveAnim");

	ACanoe_BP_C_BPOverridePassengerAdditiveAnim_Params params;
	params.ForPassenger = ForPassenger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.IsCanoeAdvancedSimProxy
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::IsCanoeAdvancedSimProxy(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.IsCanoeAdvancedSimProxy");

	ACanoe_BP_C_IsCanoeAdvancedSimProxy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Canoe_BP.Canoe_BP_C.CleanUpAllOarWeapons
// ()

void ACanoe_BP_C::CleanUpAllOarWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.CleanUpAllOarWeapons");

	ACanoe_BP_C_CleanUpAllOarWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BP_OnSetDeath
// ()

void ACanoe_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnSetDeath");

	ACanoe_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.SetPlayerUseOarWeapon
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewUse                        (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::SetPlayerUseOarWeapon(class AShooterCharacter* ForPlayer, bool bNewUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.SetPlayerUseOarWeapon");

	ACanoe_BP_C_SetPlayerUseOarWeapon_Params params;
	params.ForPlayer = ForPlayer;
	params.bNewUse = bNewUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPAddedAttachmentsForItem
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BPAddedAttachmentsForItem(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPAddedAttachmentsForItem");

	ACanoe_BP_C_BPAddedAttachmentsForItem_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ACanoe_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOnRefreshColorization");

	ACanoe_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function Canoe_BP.Canoe_BP_C.DebugPrintReplicatedInputs
// (Net, NetRequest, Exec, Event, NetMulticast, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::DebugPrintReplicatedInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DebugPrintReplicatedInputs");

	ACanoe_BP_C_DebugPrintReplicatedInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.DebugCanoeMovementVars
// ()

void ACanoe_BP_C::DebugCanoeMovementVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DebugCanoeMovementVars");

	ACanoe_BP_C_DebugCanoeMovementVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPOverrideSwimmingVelocity
// ()
// Parameters:
// struct FVector*                InitialVelocity                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Gravity                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         FluidFriction                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NetBuoyancy                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ACanoe_BP_C::BPOverrideSwimmingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy, float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOverrideSwimmingVelocity");

	ACanoe_BP_C_BPOverrideSwimmingVelocity_Params params;
	params.InitialVelocity = InitialVelocity;
	params.Gravity = Gravity;
	params.FluidFriction = FluidFriction;
	params.NetBuoyancy = NetBuoyancy;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.TryRow
// ()
// Parameters:
// double                         WithGameTime                   (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::TryRow(double WithGameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.TryRow");

	ACanoe_BP_C_TryRow_Params params;
	params.WithGameTime = WithGameTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.FetchLocallyControlledPassengerInputs
// ()

void ACanoe_BP_C::FetchLocallyControlledPassengerInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.FetchLocallyControlledPassengerInputs");

	ACanoe_BP_C_FetchLocallyControlledPassengerInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.ForceClearPassengerInputs
// ()

void ACanoe_BP_C::ForceClearPassengerInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ForceClearPassengerInputs");

	ACanoe_BP_C_ForceClearPassengerInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.SetUseAdvancedCanoeSimMovement
// ()
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::SetUseAdvancedCanoeSimMovement(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.SetUseAdvancedCanoeSimMovement");

	ACanoe_BP_C_SetUseAdvancedCanoeSimMovement_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.ResetSimCanoeVars
// ()

void ACanoe_BP_C::ResetSimCanoeVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ResetSimCanoeVars");

	ACanoe_BP_C_ResetSimCanoeVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPOnMovementModeChangedNotify");

	ACanoe_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.ShouldUseAdvancedSimMovement
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::ShouldUseAdvancedSimMovement(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ShouldUseAdvancedSimMovement");

	ACanoe_BP_C_ShouldUseAdvancedSimMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnRemovedNotify
// ()
// Parameters:
// class AActor**                 RemovedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnRemovedNotify");

	ACanoe_BP_C_BP_OnBasedPawnRemovedNotify_Params params;
	params.RemovedActor = RemovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnAddedNotify
// ()
// Parameters:
// class AActor**                 AddedActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BP_OnBasedPawnAddedNotify(class AActor** AddedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnAddedNotify");

	ACanoe_BP_C_BP_OnBasedPawnAddedNotify_Params params;
	params.AddedActor = AddedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.DebugPerPassengerMovementVars
// ()

void ACanoe_BP_C::DebugPerPassengerMovementVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DebugPerPassengerMovementVars");

	ACanoe_BP_C_DebugPerPassengerMovementVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.UpdateCurrentPassengerInputs
// ()
// Parameters:
// bool                           bAnyActive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::UpdateCurrentPassengerInputs(bool* bAnyActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UpdateCurrentPassengerInputs");

	ACanoe_BP_C_UpdateCurrentPassengerInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAnyActive != nullptr)
		*bAnyActive = params.bAnyActive;
}


// Function Canoe_BP.Canoe_BP_C.OnRep_ReplicatedPassengerInputs
// ()

void ACanoe_BP_C::OnRep_ReplicatedPassengerInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnRep_ReplicatedPassengerInputs");

	ACanoe_BP_C_OnRep_ReplicatedPassengerInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.UnpackReplicatedPassengerInputs
// (NetRequest, Event, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::UnpackReplicatedPassengerInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UnpackReplicatedPassengerInputs");

	ACanoe_BP_C_UnpackReplicatedPassengerInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.PackReplicatedPassengerInputs
// (NetRequest, NetResponse, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::PackReplicatedPassengerInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PackReplicatedPassengerInputs");

	ACanoe_BP_C_PackReplicatedPassengerInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.PerformSimCanoeMovement
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::PerformSimCanoeMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PerformSimCanoeMovement");

	ACanoe_BP_C_PerformSimCanoeMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPTimerNonDedicated
// (NetReliable, Exec, Native, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ACanoe_BP_C::STATIC_BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPTimerNonDedicated");

	ACanoe_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPTimerServer
// ()

void ACanoe_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPTimerServer");

	ACanoe_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BP_OverrideCameraTargetOriginLocation
// ()
// Parameters:
// struct FVector                 OutOverrideOrigin              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  WithCameraStyle                (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BP_OverrideCameraTargetOriginLocation(struct FName* WithCameraStyle, struct FVector* OutOverrideOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_OverrideCameraTargetOriginLocation");

	ACanoe_BP_C_BP_OverrideCameraTargetOriginLocation_Params params;
	params.WithCameraStyle = WithCameraStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverrideOrigin != nullptr)
		*OutOverrideOrigin = params.OutOverrideOrigin;
}


// Function Canoe_BP.Canoe_BP_C.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ACanoe_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ReceiveHit");

	ACanoe_BP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Canoe_BP.Canoe_BP_C.BPCanTakePassenger
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PassengerSeatIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForcePassenger                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowFlyersAndWaterDinos      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCanTakePassenger");

	ACanoe_BP_C_BPCanTakePassenger_Params params;
	params.Character = Character;
	params.PassengerSeatIndex = PassengerSeatIndex;
	params.bForcePassenger = bForcePassenger;
	params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.GetPlayerSpawnLocation
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ACanoe_BP_C::GetPlayerSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetPlayerSpawnLocation");

	ACanoe_BP_C_GetPlayerSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPServerHandleNetExecCommand");

	ACanoe_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.BPDinoPostBeginPlay
// ()

void ACanoe_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPDinoPostBeginPlay");

	ACanoe_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_ForceAllowAddBuff");

	ACanoe_BP_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.HandleFX
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::HandleFX(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.HandleFX");

	ACanoe_BP_C_HandleFX_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.SortSeatsByDistance
// (Event, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ToLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSaddlePassengerSeatDefinition> SortedSeatDefinitons           (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Sortedindices                  (Parm, OutParm, ZeroConstructor)

void ACanoe_BP_C::STATIC_SortSeatsByDistance(const struct FVector& ToLocation, class APrimalCharacter* forCharacter, TArray<struct FSaddlePassengerSeatDefinition>* SortedSeatDefinitons, TArray<int>* Sortedindices)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.SortSeatsByDistance");

	ACanoe_BP_C_SortSeatsByDistance_Params params;
	params.ToLocation = ToLocation;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedSeatDefinitons != nullptr)
		*SortedSeatDefinitons = params.SortedSeatDefinitons;
	if (Sortedindices != nullptr)
		*Sortedindices = params.Sortedindices;
}


// Function Canoe_BP.Canoe_BP_C.BPCameraBaseOrientation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ACanoe_BP_C::BPCameraBaseOrientation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCameraBaseOrientation");

	ACanoe_BP_C_BPCameraBaseOrientation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.BPLimitPlayerRotation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InViewRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ACanoe_BP_C::BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPLimitPlayerRotation");

	ACanoe_BP_C_BPLimitPlayerRotation_Params params;
	params.viewingCharacter = viewingCharacter;
	params.InViewRotation = InViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPModifyDesiredRotation");

	ACanoe_BP_C_BPModifyDesiredRotation_Params params;
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


// Function Canoe_BP.Canoe_BP_C.PassengerWeaponChanged
// ()
// Parameters:
// class AShooterWeapon*          newWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::PassengerWeaponChanged(class AShooterWeapon* newWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PassengerWeaponChanged");

	ACanoe_BP_C_PassengerWeaponChanged_Params params;
	params.newWeapon = newWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.OnSpawnedForItem
// (NetReliable, Event, NetResponse, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem**            ForItem                        (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::OnSpawnedForItem(class UPrimalItem** ForItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.OnSpawnedForItem");

	ACanoe_BP_C_OnSpawnedForItem_Params params;
	params.ForItem = ForItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BP_ForceAllowMountedWeapon
// ()
// Parameters:
// class UClass**                 WeaponTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BP_ForceAllowMountedWeapon(class UClass** WeaponTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BP_ForceAllowMountedWeapon");

	ACanoe_BP_C_BP_ForceAllowMountedWeapon_Params params;
	params.WeaponTemplate = WeaponTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.GetCurrentPassengerAxisInputs
// (Net, NetReliable, Exec, Native, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bDebug                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnyActiveInputs               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       PerPassengerInputs             (Parm, OutParm, ZeroConstructor)
// float                          AvgForward                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AvgRight                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumActiveForward               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumActiveRight                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::GetCurrentPassengerAxisInputs(bool bDebug, bool* bAnyActiveInputs, TArray<struct FVector2D>* PerPassengerInputs, float* AvgForward, float* AvgRight, int* NumActiveForward, int* NumActiveRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.GetCurrentPassengerAxisInputs");

	ACanoe_BP_C_GetCurrentPassengerAxisInputs_Params params;
	params.bDebug = bDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAnyActiveInputs != nullptr)
		*bAnyActiveInputs = params.bAnyActiveInputs;
	if (PerPassengerInputs != nullptr)
		*PerPassengerInputs = params.PerPassengerInputs;
	if (AvgForward != nullptr)
		*AvgForward = params.AvgForward;
	if (AvgRight != nullptr)
		*AvgRight = params.AvgRight;
	if (NumActiveForward != nullptr)
		*NumActiveForward = params.NumActiveForward;
	if (NumActiveRight != nullptr)
		*NumActiveRight = params.NumActiveRight;
}


// Function Canoe_BP.Canoe_BP_C.BPNotifyClearPassenger
// (NetReliable, Native, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPNotifyClearPassenger");

	ACanoe_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPNotifyAddPassenger");

	ACanoe_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.PickupCanoe
// (Exec, Native, Static, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterCharacter*       forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::STATIC_PickupCanoe(class AShooterCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.PickupCanoe");

	ACanoe_BP_C_PickupCanoe_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPTryMultiUse");

	ACanoe_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ACanoe_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPGetMultiUseEntries");

	ACanoe_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCanBeBaseForCharacter");

	ACanoe_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACanoe_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.BPCanCryo");

	ACanoe_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Canoe_BP.Canoe_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ReceiveAnyDamage");

	ACanoe_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.UserConstructionScript
// ()

void ACanoe_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.UserConstructionScript");

	ACanoe_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.DoPlayKnockAnimation
// ()
// Parameters:
// int                            KnockDirectionIndex            (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::DoPlayKnockAnimation(int KnockDirectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.DoPlayKnockAnimation");

	ACanoe_BP_C_DoPlayKnockAnimation_Params params;
	params.KnockDirectionIndex = KnockDirectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.Multicast_RefreshColors
// ()

void ACanoe_BP_C::Multicast_RefreshColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.Multicast_RefreshColors");

	ACanoe_BP_C_Multicast_RefreshColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Canoe_BP.Canoe_BP_C.ExecuteUbergraph_Canoe_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACanoe_BP_C::ExecuteUbergraph_Canoe_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Canoe_BP.Canoe_BP_C.ExecuteUbergraph_Canoe_BP");

	ACanoe_BP_C_ExecuteUbergraph_Canoe_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
