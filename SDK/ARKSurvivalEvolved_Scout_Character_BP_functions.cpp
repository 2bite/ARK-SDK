// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Scout_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Scout_Character_BP.Scout_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPCanCryo");

	AScout_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AScout_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPOnRefreshColorization");

	AScout_Character_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_PreventMovementMode");

	AScout_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ServerIsFiringItemInInventory
// ()
// Parameters:
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ServerIsFiringItemInInventory(bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerIsFiringItemInInventory");

	AScout_Character_BP_C_ServerIsFiringItemInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ServerIsUsingTrackerBeam
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ServerIsUsingTrackerBeam(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerIsUsingTrackerBeam");

	AScout_Character_BP_C_ServerIsUsingTrackerBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Scout_Character_BP.Scout_Character_BP_C.OnCheckMek
// ()

void AScout_Character_BP_C::OnCheckMek()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.OnCheckMek");

	AScout_Character_BP_C_OnCheckMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BP_InterceptTurnInput
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BP_InterceptTurnInput(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_InterceptTurnInput");

	AScout_Character_BP_C_BP_InterceptTurnInput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Set StatsFromItem
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// TArray<float>                  Stats                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AScout_Character_BP_C::Set_StatsFromItem(TArray<float>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Set StatsFromItem");

	AScout_Character_BP_C_Set_StatsFromItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Scout_Character_BP.Scout_Character_BP_C.SetupScoutDisconnect
// ()
// Parameters:
// float                          DelayTimeSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::SetupScoutDisconnect(float DelayTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetupScoutDisconnect");

	AScout_Character_BP_C_SetupScoutDisconnect_Params params;
	params.DelayTimeSeconds = DelayTimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.DestroyScout
// ()

void AScout_Character_BP_C::DestroyScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DestroyScout");

	AScout_Character_BP_C_DestroyScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AScout_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPModifyAimOffsetTargetLocation");

	AScout_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClearExpiredDinoAIData
// ()

void AScout_Character_BP_C::ClearExpiredDinoAIData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClearExpiredDinoAIData");

	AScout_Character_BP_C_ClearExpiredDinoAIData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.SetIsFleeingForDino
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFleeing                      (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::SetIsFleeingForDino(class APrimalDinoCharacter* Dino, bool IsFleeing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetIsFleeingForDino");

	AScout_Character_BP_C_SetIsFleeingForDino_Params params;
	params.Dino = Dino;
	params.IsFleeing = IsFleeing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Is Dino Fleeing
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFleeing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::Is_Dino_Fleeing(class APrimalDinoCharacter* Dino, bool* IsFleeing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Is Dino Fleeing");

	AScout_Character_BP_C_Is_Dino_Fleeing_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFleeing != nullptr)
		*IsFleeing = params.IsFleeing;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideStencilAllianceForTarget
// ()
// Parameters:
// class APrimalCharacter**       TargetDino                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStencilAlliance>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EStencilAlliance> AScout_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter** TargetDino, class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideStencilAllianceForTarget");

	AScout_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params;
	params.TargetDino = TargetDino;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPShouldCancelDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPShouldCancelDoAttack");

	AScout_Character_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.OnRep_LowStamina
// ()

void AScout_Character_BP_C::OnRep_LowStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.OnRep_LowStamina");

	AScout_Character_BP_C_OnRep_LowStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.IsDashing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::IsDashing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsDashing");

	AScout_Character_BP_C_IsDashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPGetHUDElements
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AScout_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPGetHUDElements");

	AScout_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveTick
// (Net, Exec, Native, Static, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveTick");

	AScout_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ScoutIsFirstPerson
// ()
// Parameters:
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ScoutIsFirstPerson(bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ScoutIsFirstPerson");

	AScout_Character_BP_C_ScoutIsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function Scout_Character_BP.Scout_Character_BP_C.InitBeamVFX
// ()

void AScout_Character_BP_C::InitBeamVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InitBeamVFX");

	AScout_Character_BP_C_InitBeamVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.EndBeam VFX
// ()

void AScout_Character_BP_C::EndBeam_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.EndBeam VFX");

	AScout_Character_BP_C_EndBeam_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.SetBeamValidTarget
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::SetBeamValidTarget(bool Value, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetBeamValidTarget");

	AScout_Character_BP_C_SetBeamValidTarget_Params params;
	params.Value = Value;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPHandleOnStopFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BPHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPHandleOnStopFire");

	AScout_Character_BP_C_BPHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Update Target Impact VFX_Implementation
// (NetReliable, NetRequest, Exec, Event, Static, Public, Protected, NetClient, BlueprintEvent, Const)

void AScout_Character_BP_C::STATIC_Update_Target_Impact_VFX_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Update Target Impact VFX_Implementation");

	AScout_Character_BP_C_Update_Target_Impact_VFX_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Update Beam VFX Implementation
// ()

void AScout_Character_BP_C::Update_Beam_VFX_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Update Beam VFX Implementation");

	AScout_Character_BP_C_Update_Beam_VFX_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.SetTargetImpactMaterial
// ()
// Parameters:
// float                          ImpactDistance                 (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::SetTargetImpactMaterial(float ImpactDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetTargetImpactMaterial");

	AScout_Character_BP_C_SetTargetImpactMaterial_Params params;
	params.ImpactDistance = ImpactDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPPreventStasis");

	AScout_Character_BP_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPHandleUseButtonPress");

	AScout_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.IsScoutFirst Person
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::IsScoutFirst_Person(bool* IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsScoutFirst Person");

	AScout_Character_BP_C_IsScoutFirst_Person_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFirstPerson != nullptr)
		*IsFirstPerson = params.IsFirstPerson;
}


// Function Scout_Character_BP.Scout_Character_BP_C.SetFirstPersonMaterial
// ()
// Parameters:
// bool                           IsFirstPerson                  (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::SetFirstPersonMaterial(bool IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SetFirstPersonMaterial");

	AScout_Character_BP_C_SetFirstPersonMaterial_Params params;
	params.IsFirstPerson = IsFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.IsServerOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::IsServerOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsServerOrSinglePlayer");

	AScout_Character_BP_C_IsServerOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Scout_Character_BP.Scout_Character_BP_C.IsClientOrSinglePlayer
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.IsClientOrSinglePlayer");

	AScout_Character_BP_C_IsClientOrSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Tracker Missed
// ()

void AScout_Character_BP_C::Tracker_Missed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Tracker Missed");

	AScout_Character_BP_C_Tracker_Missed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Update Scout Vision
// ()

void AScout_Character_BP_C::Update_Scout_Vision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Update Scout Vision");

	AScout_Character_BP_C_Update_Scout_Vision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPOverrideFPVViewLocation");

	AScout_Character_BP_C_BPOverrideFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPGetFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AScout_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPGetFPVViewLocation");

	AScout_Character_BP_C_BPGetFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.PrivateTracker Missed
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Protected, NetClient, BlueprintEvent, Const)

void AScout_Character_BP_C::STATIC_PrivateTracker_Missed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.PrivateTracker Missed");

	AScout_Character_BP_C_PrivateTracker_Missed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Dash
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Impulse                        (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::STATIC_Dash(const struct FVector& Direction, float Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Dash");

	AScout_Character_BP_C_Dash_Params params;
	params.Direction = Direction;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AScout_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_RotationRate");

	AScout_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AScout_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	AScout_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BlueprintCanAttack");

	AScout_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ServerIs Tracked Target
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTrackedTarget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ServerIs_Tracked_Target(class AActor* Target, bool* IsTrackedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerIs Tracked Target");

	AScout_Character_BP_C_ServerIs_Tracked_Target_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTrackedTarget != nullptr)
		*IsTrackedTarget = params.IsTrackedTarget;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Tracker Hit Character
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// class APrimalCharacter*        HitCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyTracker                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::Tracker_Hit_Character(class APrimalCharacter* HitCharacter, bool ApplyTracker, bool* ValidTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Tracker Hit Character");

	AScout_Character_BP_C_Tracker_Hit_Character_Params params;
	params.HitCharacter = HitCharacter;
	params.ApplyTracker = ApplyTracker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidTarget != nullptr)
		*ValidTarget = params.ValidTarget;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPAdjustDamage
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AScout_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPAdjustDamage");

	AScout_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Scout_Character_BP.Scout_Character_BP_C.BP_OnSetDeath
// ()

void AScout_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_OnSetDeath");

	AScout_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPHandleControllerInitiatedAttack
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::STATIC_BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPHandleControllerInitiatedAttack");

	AScout_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Release Possessing Survivor
// ()

void AScout_Character_BP_C::Release_Possessing_Survivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Release Possessing Survivor");

	AScout_Character_BP_C_Release_Possessing_Survivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.GetPossessedByPlayer
// ()

void AScout_Character_BP_C::GetPossessedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.GetPossessedByPlayer");

	AScout_Character_BP_C_GetPossessedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.Spawned From Projectile
// ()
// Parameters:
// class AShooterPlayerController* ShooterPlayerController        (Parm, ZeroConstructor, IsPlainOldData)
// float                          PossessDelay                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             FiringItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::Spawned_From_Projectile(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class UPrimalItem* FiringItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.Spawned From Projectile");

	AScout_Character_BP_C_Spawned_From_Projectile_Params params;
	params.ShooterPlayerController = ShooterPlayerController;
	params.PossessDelay = PossessDelay;
	params.FiringItem = FiringItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AScout_Character_BP_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BPIsValidUnStasisCaster");

	AScout_Character_BP_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_Character_BP.Scout_Character_BP_C.UserConstructionScript
// ()

void AScout_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UserConstructionScript");

	AScout_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_124
// ()

void AScout_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_124()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_124");

	AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_124_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_123
// ()

void AScout_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_123()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_123");

	AScout_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_123_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_122
// ()

void AScout_Character_BP_C::InpActEvt_Jump_K2Node_InputActionEvent_122()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_122");

	AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_122_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_121
// ()

void AScout_Character_BP_C::InpActEvt_Jump_K2Node_InputActionEvent_121()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_121");

	AScout_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_121_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_120
// ()

void AScout_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_120()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_120");

	AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_120_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_119
// ()

void AScout_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_119()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_119");

	AScout_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_119_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.CrouchTick
// ()

void AScout_Character_BP_C::CrouchTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CrouchTick");

	AScout_Character_BP_C_CrouchTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.JumpTick
// ()

void AScout_Character_BP_C::JumpTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.JumpTick");

	AScout_Character_BP_C_JumpTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.StopPossessingPlayerMovement
// ()

void AScout_Character_BP_C::StopPossessingPlayerMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.StopPossessingPlayerMovement");

	AScout_Character_BP_C_StopPossessingPlayerMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveHit
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

void AScout_Character_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveHit");

	AScout_Character_BP_C_ReceiveHit_Params params;
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


// Function Scout_Character_BP.Scout_Character_BP_C.CheckMek
// ()

void AScout_Character_BP_C::CheckMek()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CheckMek");

	AScout_Character_BP_C_CheckMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandLeft
// ()

void AScout_Character_BP_C::AnimNotify_RepairHandLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandLeft");

	AScout_Character_BP_C_AnimNotify_RepairHandLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandRight
// ()

void AScout_Character_BP_C::AnimNotify_RepairHandRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.AnimNotify_RepairHandRight");

	AScout_Character_BP_C_AnimNotify_RepairHandRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReplicateInputVector
// ()
// Parameters:
// struct FVector                 InputVector                    (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ReplicateInputVector(const struct FVector& InputVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReplicateInputVector");

	AScout_Character_BP_C_ReplicateInputVector_Params params;
	params.InputVector = InputVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReplairMek
// ()
// Parameters:
// class APrimalDinoCharacter*    Mek                            (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::MULTI_ReplairMek(class APrimalDinoCharacter* Mek)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReplairMek");

	AScout_Character_BP_C_MULTI_ReplairMek_Params params;
	params.Mek = Mek;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.SERVER_SetScoutTargeting
// ()
// Parameters:
// bool                           Targeting                      (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::SERVER_SetScoutTargeting(bool Targeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SERVER_SetScoutTargeting");

	AScout_Character_BP_C_SERVER_SetScoutTargeting_Params params;
	params.Targeting = Targeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDestroy
// ()

void AScout_Character_BP_C::ReleasePossessingSurvivorAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDestroy");

	AScout_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.RechargeShield
// ()

void AScout_Character_BP_C::RechargeShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.RechargeShield");

	AScout_Character_BP_C_RechargeShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientActivateAlertMode
// ()

void AScout_Character_BP_C::ClientActivateAlertMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientActivateAlertMode");

	AScout_Character_BP_C_ClientActivateAlertMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutDamaged
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm)

void AScout_Character_BP_C::ClientScoutDamaged(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutDamaged");

	AScout_Character_BP_C_ClientScoutDamaged_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientTickShieldDamageVFX
// ()

void AScout_Character_BP_C::ClientTickShieldDamageVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientTickShieldDamageVFX");

	AScout_Character_BP_C_ClientTickShieldDamageVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientRechargeShield
// ()

void AScout_Character_BP_C::ClientRechargeShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientRechargeShield");

	AScout_Character_BP_C_ClientRechargeShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveBeginPlay
// ()

void AScout_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveBeginPlay");

	AScout_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.SpawnEnd
// ()

void AScout_Character_BP_C::SpawnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.SpawnEnd");

	AScout_Character_BP_C_SpawnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReceiveEndPlay");

	AScout_Character_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.TriggerDisconnectFX
// ()

void AScout_Character_BP_C::TriggerDisconnectFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.TriggerDisconnectFX");

	AScout_Character_BP_C_TriggerDisconnectFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ScoutDied
// ()

void AScout_Character_BP_C::ScoutDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ScoutDied");

	AScout_Character_BP_C_ScoutDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.PossessedByPlayer
// ()

void AScout_Character_BP_C::PossessedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.PossessedByPlayer");

	AScout_Character_BP_C_PossessedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReleasePossessingSurvivor
// ()

void AScout_Character_BP_C::MULTI_ReleasePossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_ReleasePossessingSurvivor");

	AScout_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ServerDashAttack
// ()

void AScout_Character_BP_C::ServerDashAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerDashAttack");

	AScout_Character_BP_C_ServerDashAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.VerifyPossessingSurvivor
// ()

void AScout_Character_BP_C::VerifyPossessingSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.VerifyPossessingSurvivor");

	AScout_Character_BP_C_VerifyPossessingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
// ()

void AScout_Character_BP_C::ReleasePossessingSurvivorAndDelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy");

	AScout_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.DelayedDestroyActor
// ()

void AScout_Character_BP_C::DelayedDestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DelayedDestroyActor");

	AScout_Character_BP_C_DelayedDestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientTrackerMissed
// ()

void AScout_Character_BP_C::ClientTrackerMissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientTrackerMissed");

	AScout_Character_BP_C_ClientTrackerMissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpPressed
// ()

void AScout_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpPressed");

	AScout_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpReleased
// ()

void AScout_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.BP_OnJumpReleased");

	AScout_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.CheckConsumeResource
// ()

void AScout_Character_BP_C::CheckConsumeResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CheckConsumeResource");

	AScout_Character_BP_C_CheckConsumeResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientConsumeResource
// ()

void AScout_Character_BP_C::ClientConsumeResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientConsumeResource");

	AScout_Character_BP_C_ClientConsumeResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.TickThrusterVFX
// ()

void AScout_Character_BP_C::TickThrusterVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.TickThrusterVFX");

	AScout_Character_BP_C_TickThrusterVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientTickAlertMode
// ()

void AScout_Character_BP_C::ClientTickAlertMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientTickAlertMode");

	AScout_Character_BP_C_ClientTickAlertMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientDeactivateAlertMode
// ()

void AScout_Character_BP_C::ClientDeactivateAlertMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientDeactivateAlertMode");

	AScout_Character_BP_C_ClientDeactivateAlertMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientRanOutOfStamina
// ()

void AScout_Character_BP_C::ClientRanOutOfStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientRanOutOfStamina");

	AScout_Character_BP_C_ClientRanOutOfStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutRangeCheck
// ()

void AScout_Character_BP_C::ClientScoutRangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientScoutRangeCheck");

	AScout_Character_BP_C_ClientScoutRangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.CheckSubmerged
// ()

void AScout_Character_BP_C::CheckSubmerged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.CheckSubmerged");

	AScout_Character_BP_C_CheckSubmerged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientDashTick
// ()

void AScout_Character_BP_C::ClientDashTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientDashTick");

	AScout_Character_BP_C_ClientDashTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientDashEnd
// ()

void AScout_Character_BP_C::ClientDashEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientDashEnd");

	AScout_Character_BP_C_ClientDashEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientInitTrackerBeamFX
// ()
// Parameters:
// float                          BeamDistance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidTarget                    (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ClientInitTrackerBeamFX(float BeamDistance, bool ValidTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientInitTrackerBeamFX");

	AScout_Character_BP_C_ClientInitTrackerBeamFX_Params params;
	params.BeamDistance = BeamDistance;
	params.ValidTarget = ValidTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.UpdateTargetImpactVFX
// ()

void AScout_Character_BP_C::UpdateTargetImpactVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UpdateTargetImpactVFX");

	AScout_Character_BP_C_UpdateTargetImpactVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.UpdateBeamVFX
// ()

void AScout_Character_BP_C::UpdateBeamVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UpdateBeamVFX");

	AScout_Character_BP_C_UpdateBeamVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.StartImpactVFX
// ()

void AScout_Character_BP_C::StartImpactVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.StartImpactVFX");

	AScout_Character_BP_C_StartImpactVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ServerHandleOnStopFire
// ()

void AScout_Character_BP_C::ServerHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ServerHandleOnStopFire");

	AScout_Character_BP_C_ServerHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientEndTrackerBeamFX
// ()
// Parameters:
// bool                           ValidTargets                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpactDistance                 (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ClientEndTrackerBeamFX(bool ValidTargets, float ImpactDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientEndTrackerBeamFX");

	AScout_Character_BP_C_ClientEndTrackerBeamFX_Params params;
	params.ValidTargets = ValidTargets;
	params.ImpactDistance = ImpactDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ApplyStaminaCost
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ApplyStaminaCost(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ApplyStaminaCost");

	AScout_Character_BP_C_ApplyStaminaCost_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.StaminaDrain
// ()

void AScout_Character_BP_C::StaminaDrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.StaminaDrain");

	AScout_Character_BP_C_StaminaDrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientLowStamina
// ()

void AScout_Character_BP_C::ClientLowStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientLowStamina");

	AScout_Character_BP_C_ClientLowStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
// ()

void AScout_Character_BP_C::ReleasePossessingSurvivorAndLongDelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy");

	AScout_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.TickStaminaMeter
// ()

void AScout_Character_BP_C::TickStaminaMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.TickStaminaMeter");

	AScout_Character_BP_C_TickStaminaMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAIStrafing
// ()

void AScout_Character_BP_C::MULTI_InitAIStrafing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAIStrafing");

	AScout_Character_BP_C_MULTI_InitAIStrafing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAINonStrafing
// ()

void AScout_Character_BP_C::MULTI_InitAINonStrafing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_InitAINonStrafing");

	AScout_Character_BP_C_MULTI_InitAINonStrafing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetAimingAtScout
// ()

void AScout_Character_BP_C::MULTI_AITargetAimingAtScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetAimingAtScout");

	AScout_Character_BP_C_MULTI_AITargetAimingAtScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetNoLongerAimingAtScout
// ()

void AScout_Character_BP_C::MULTI_AITargetNoLongerAimingAtScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_AITargetNoLongerAimingAtScout");

	AScout_Character_BP_C_MULTI_AITargetNoLongerAimingAtScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientCheckClearExpiredDinoData
// ()

void AScout_Character_BP_C::ClientCheckClearExpiredDinoData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientCheckClearExpiredDinoData");

	AScout_Character_BP_C_ClientCheckClearExpiredDinoData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.DisableAI
// ()

void AScout_Character_BP_C::DisableAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DisableAI");

	AScout_Character_BP_C_DisableAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SpawnedFromProjectile
// ()

void AScout_Character_BP_C::MULTI_SpawnedFromProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SpawnedFromProjectile");

	AScout_Character_BP_C_MULTI_SpawnedFromProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
// ()

void AScout_Character_BP_C::DelayedReleasePossessingSurvivorAndDelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy");

	AScout_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.UpdateScoutVisionBuff
// ()

void AScout_Character_BP_C::UpdateScoutVisionBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.UpdateScoutVisionBuff");

	AScout_Character_BP_C_UpdateScoutVisionBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.RequestRecallScout
// ()

void AScout_Character_BP_C::RequestRecallScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.RequestRecallScout");

	AScout_Character_BP_C_RequestRecallScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ClientHitTerrain
// ()
// Parameters:
// struct FVector                 ImpactNormal                   (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ClientHitTerrain(const struct FVector& ImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ClientHitTerrain");

	AScout_Character_BP_C_ClientHitTerrain_Params params;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SetStatsFromItem
// ()
// Parameters:
// TArray<float>                  Stats                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AScout_Character_BP_C::MULTI_SetStatsFromItem(TArray<float>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.MULTI_SetStatsFromItem");

	AScout_Character_BP_C_MULTI_SetStatsFromItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Scout_Character_BP.Scout_Character_BP_C.OWNINGCLIENT_TrackerHitCharacter
// ()

void AScout_Character_BP_C::OWNINGCLIENT_TrackerHitCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.OWNINGCLIENT_TrackerHitCharacter");

	AScout_Character_BP_C_OWNINGCLIENT_TrackerHitCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_Character_BP.Scout_Character_BP_C.ExecuteUbergraph_Scout_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AScout_Character_BP_C::ExecuteUbergraph_Scout_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_Character_BP.Scout_Character_BP_C.ExecuteUbergraph_Scout_Character_BP");

	AScout_Character_BP_C_ExecuteUbergraph_Scout_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
