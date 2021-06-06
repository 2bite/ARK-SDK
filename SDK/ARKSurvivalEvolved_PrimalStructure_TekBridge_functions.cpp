// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalStructure_TekBridge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.SetupSnaps
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void APrimalStructure_TekBridge_C::STATIC_SetupSnaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.SetupSnaps");

	APrimalStructure_TekBridge_C_SetupSnaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlayDying
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::STATIC_BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlayDying");

	APrimalStructure_TekBridge_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideTargetLocation
// ()
// Parameters:
// struct FVector                 attackPos                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APrimalStructure_TekBridge_C::BPOverrideTargetLocation(struct FVector* attackPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideTargetLocation");

	APrimalStructure_TekBridge_C_BPOverrideTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (attackPos != nullptr)
		*attackPos = params.attackPos;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.CalculatePlacementRotation
// ()
// Parameters:
// class AController*             PC                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FPlacementData          PlacementData                  (Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator APrimalStructure_TekBridge_C::CalculatePlacementRotation(class AController* PC, struct FPlacementData* PlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.CalculatePlacementRotation");

	APrimalStructure_TekBridge_C_CalculatePlacementRotation_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlacementData != nullptr)
		*PlacementData = params.PlacementData;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverridePlacementRotation
// (NetReliable, Exec, Event, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                ViewPos                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               ViewRot                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator APrimalStructure_TekBridge_C::BPOverridePlacementRotation(struct FVector* ViewPos, struct FRotator* ViewRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverridePlacementRotation");

	APrimalStructure_TekBridge_C_BPOverridePlacementRotation_Params params;
	params.ViewPos = ViewPos;
	params.ViewRot = ViewRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPIsAllowedToBuildEx
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinalPlacement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bChoosingRotation              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APrimalStructure_TekBridge_C::STATIC_BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPIsAllowedToBuildEx");

	APrimalStructure_TekBridge_C_BPIsAllowedToBuildEx_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;
	params.PC = PC;
	params.bFinalPlacement = bFinalPlacement;
	params.bChoosingRotation = bChoosingRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestForEnemyStructures
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Placer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TooClose                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::TestForEnemyStructures(const struct FVector& Location, class APlayerController* Placer, bool* TooClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestForEnemyStructures");

	APrimalStructure_TekBridge_C_TestForEnemyStructures_Params params;
	params.Location = Location;
	params.Placer = Placer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooClose != nullptr)
		*TooClose = params.TooClose;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPreventUsingAsFloorForStructure
// ()
// Parameters:
// struct FPlacementData          theOutPlacementData            (Parm, OutParm, ReferenceParm)
// class APrimalStructure**       StructureToPlaceOnMe           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure_TekBridge_C::BPPreventUsingAsFloorForStructure(class APrimalStructure** StructureToPlaceOnMe, struct FPlacementData* theOutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPreventUsingAsFloorForStructure");

	APrimalStructure_TekBridge_C_BPPreventUsingAsFloorForStructure_Params params;
	params.StructureToPlaceOnMe = StructureToPlaceOnMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theOutPlacementData != nullptr)
		*theOutPlacementData = params.theOutPlacementData;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPConsumeUsePinCode
// ()
// Parameters:
// class AActor**                 FromKeypadActor                (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           appledPinCode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsActivating                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure_TekBridge_C::BPConsumeUsePinCode(class AActor** FromKeypadActor, class APlayerController** ForPC, int* appledPinCode, bool* bIsActivating)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPConsumeUsePinCode");

	APrimalStructure_TekBridge_C_BPConsumeUsePinCode_Params params;
	params.FromKeypadActor = FromKeypadActor;
	params.ForPC = ForPC;
	params.appledPinCode = appledPinCode;
	params.bIsActivating = bIsActivating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPCanBeActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure_TekBridge_C::BPCanBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPCanBeActivated");

	APrimalStructure_TekBridge_C_BPCanBeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerDeactivated
// ()

void APrimalStructure_TekBridge_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerDeactivated");

	APrimalStructure_TekBridge_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerActivated
// ()

void APrimalStructure_TekBridge_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerActivated");

	APrimalStructure_TekBridge_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.DeactivationComplete
// (Native, Event, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void APrimalStructure_TekBridge_C::DeactivationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.DeactivationComplete");

	APrimalStructure_TekBridge_C_DeactivationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientMaterialUpdate
// ()

void APrimalStructure_TekBridge_C::ClientMaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientMaterialUpdate");

	APrimalStructure_TekBridge_C_ClientMaterialUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientCompleteActivation
// ()

void APrimalStructure_TekBridge_C::ClientCompleteActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientCompleteActivation");

	APrimalStructure_TekBridge_C_ClientCompleteActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ReceiveBeginPlay
// ()

void APrimalStructure_TekBridge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ReceiveBeginPlay");

	APrimalStructure_TekBridge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UpdateVisibility
// ()

void APrimalStructure_TekBridge_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UpdateVisibility");

	APrimalStructure_TekBridge_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideUILocation
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APrimalStructure_TekBridge_C::BPOverrideUILocation(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideUILocation");

	APrimalStructure_TekBridge_C_BPOverrideUILocation_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideSnappedFromTransform
// ()
// Parameters:
// class APrimalStructure**       ParentStructure                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParentSnapFromIndex            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ParentSnapFromName             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                UnsnappedPlacementPos          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               UnsnappedPlacementRot          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SnappedPlacementPos            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               SnappedPlacementRot            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SnapToIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SnapToName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            bForceInvalidateSnap           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure_TekBridge_C::BPOverrideSnappedFromTransform(class APrimalStructure** ParentStructure, int* ParentSnapFromIndex, struct FName* ParentSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideSnappedFromTransform");

	APrimalStructure_TekBridge_C_BPOverrideSnappedFromTransform_Params params;
	params.ParentStructure = ParentStructure;
	params.ParentSnapFromIndex = ParentSnapFromIndex;
	params.ParentSnapFromName = ParentSnapFromName;
	params.UnsnappedPlacementPos = UnsnappedPlacementPos;
	params.UnsnappedPlacementRot = UnsnappedPlacementRot;
	params.SnappedPlacementPos = SnappedPlacementPos;
	params.SnappedPlacementRot = SnappedPlacementRot;
	params.SnapToIndex = SnapToIndex;
	params.SnapToName = SnapToName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (bForceInvalidateSnap != nullptr)
		*bForceInvalidateSnap = params.bForceInvalidateSnap;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushBlockers
// ()
// Parameters:
// class APrimalCharacter*        BlockingCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartPos                       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::PushBlockers(class APrimalCharacter* BlockingCharacter, const struct FVector& StartPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushBlockers");

	APrimalStructure_TekBridge_C_PushBlockers_Params params;
	params.BlockingCharacter = BlockingCharacter;
	params.StartPos = StartPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activating
// ()

void APrimalStructure_TekBridge_C::OnRep_Activating()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activating");

	APrimalStructure_TekBridge_C_OnRep_Activating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TryActivate
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ActivateBridge                 (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::STATIC_TryActivate(bool ActivateBridge)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TryActivate");

	APrimalStructure_TekBridge_C_TryActivate_Params params;
	params.ActivateBridge = ActivateBridge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Activate
// ()
// Parameters:
// bool                           ActivateBridge                 (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::Activate(bool ActivateBridge)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Activate");

	APrimalStructure_TekBridge_C_Activate_Params params;
	params.ActivateBridge = ActivateBridge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, NetResponse, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APrimalStructure_TekBridge_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPGetMultiUseEntries");

	APrimalStructure_TekBridge_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure_TekBridge_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPTryMultiUse");

	APrimalStructure_TekBridge_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.IsBlocked
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckLanding                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::IsBlocked(const struct FVector& Start, const struct FRotator& Rotation, const struct FVector& End, bool CheckLanding, bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.IsBlocked");

	APrimalStructure_TekBridge_C_IsBlocked_Params params;
	params.Start = Start;
	params.Rotation = Rotation;
	params.End = End;
	params.CheckLanding = CheckLanding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activated
// ()

void APrimalStructure_TekBridge_C::OnRep_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activated");

	APrimalStructure_TekBridge_C_OnRep_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_LandingPosition
// ()

void APrimalStructure_TekBridge_C::OnRep_LandingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_LandingPosition");

	APrimalStructure_TekBridge_C_OnRep_LandingPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PreviewLanding
// ()

void APrimalStructure_TekBridge_C::PreviewLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PreviewLanding");

	APrimalStructure_TekBridge_C_PreviewLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestExtension
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Extension                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        SnapTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChoosingRotation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Good                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Placement                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::STATIC_TestExtension(const struct FVector& Start, const struct FRotator& Rotation, int Extension, class APrimalStructure* SnapTarget, bool ChoosingRotation, bool* Good, struct FVector* Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestExtension");

	APrimalStructure_TekBridge_C_TestExtension_Params params;
	params.Start = Start;
	params.Rotation = Rotation;
	params.Extension = Extension;
	params.SnapTarget = SnapTarget;
	params.ChoosingRotation = ChoosingRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Good != nullptr)
		*Good = params.Good;
	if (Placement != nullptr)
		*Placement = params.Placement;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlacedStructure");

	APrimalStructure_TekBridge_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPBeginPreview
// ()

void APrimalStructure_TekBridge_C::BPBeginPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPBeginPreview");

	APrimalStructure_TekBridge_C_BPBeginPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExtendBridge
// (NetRequest, NetResponse, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::ExtendBridge(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExtendBridge");

	APrimalStructure_TekBridge_C_ExtendBridge_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UserConstructionScript
// ()

void APrimalStructure_TekBridge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UserConstructionScript");

	APrimalStructure_TekBridge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationTick
// ()

void APrimalStructure_TekBridge_C::ActivationTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationTick");

	APrimalStructure_TekBridge_C_ActivationTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushImpact
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::PushImpact(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushImpact");

	APrimalStructure_TekBridge_C_PushImpact_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationFailed
// ()

void APrimalStructure_TekBridge_C::ActivationFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationFailed");

	APrimalStructure_TekBridge_C_ActivationFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientIsPlaced
// ()

void APrimalStructure_TekBridge_C::ClientIsPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientIsPlaced");

	APrimalStructure_TekBridge_C_ClientIsPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.MaterialUpdate
// ()

void APrimalStructure_TekBridge_C::MaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.MaterialUpdate");

	APrimalStructure_TekBridge_C_MaterialUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExecuteUbergraph_PrimalStructure_TekBridge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_TekBridge_C::ExecuteUbergraph_PrimalStructure_TekBridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExecuteUbergraph_PrimalStructure_TekBridge");

	APrimalStructure_TekBridge_C_ExecuteUbergraph_PrimalStructure_TekBridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
