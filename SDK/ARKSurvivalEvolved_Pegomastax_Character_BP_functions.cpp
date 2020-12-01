// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pegomastax_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPClientHandleNetExecCommand
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APegomastax_Character_BP_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPClientHandleNetExecCommand");

	APegomastax_Character_BP_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateWaitingState
// ()
// Parameters:
// class APrimalCharacter*        TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isInWaitingState               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::UpdateWaitingState(class APrimalCharacter* TargetCharacter, bool* isInWaitingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateWaitingState");

	APegomastax_Character_BP_C_UpdateWaitingState_Params params;
	params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isInWaitingState != nullptr)
		*isInWaitingState = params.isInWaitingState;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.isInWaitingState
// ()
// Parameters:
// class APrimalCharacter*        TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isWaiting                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::isInWaitingState(class APrimalCharacter* TargetCharacter, bool* isWaiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.isInWaitingState");

	APegomastax_Character_BP_C_isInWaitingState_Params params;
	params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isWaiting != nullptr)
		*isWaiting = params.isWaiting;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.WillRunToOwner
// ()
// Parameters:
// class APawn*                   ownerPawn                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           willRun                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::WillRunToOwner(class APawn* ownerPawn, bool* willRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.WillRunToOwner");

	APegomastax_Character_BP_C_WillRunToOwner_Params params;
	params.ownerPawn = ownerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (willRun != nullptr)
		*willRun = params.willRun;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTimerServer
// ()

void APegomastax_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTimerServer");

	APegomastax_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FindPawnToGoBackTo
// ()
// Parameters:
// class APawn*                   selectedPawn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::FindPawnToGoBackTo(class APawn** selectedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FindPawnToGoBackTo");

	APegomastax_Character_BP_C_FindPawnToGoBackTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (selectedPawn != nullptr)
		*selectedPawn = params.selectedPawn;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnAnimPlayedNotify");

	APegomastax_Character_BP_C_BPOnAnimPlayedNotify_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.RestoreSecondaryAnims
// ()

void APegomastax_Character_BP_C::RestoreSecondaryAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.RestoreSecondaryAnims");

	APegomastax_Character_BP_C_RestoreSecondaryAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ClearSecondaryAnims
// ()

void APegomastax_Character_BP_C::ClearSecondaryAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ClearSecondaryAnims");

	APegomastax_Character_BP_C_ClearSecondaryAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PostAttackActions
// (Native, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           stoleItem                      (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::STATIC_PostAttackActions(bool stoleItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PostAttackActions");

	APegomastax_Character_BP_C_PostAttackActions_Params params;
	params.stoleItem = stoleItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShouldStopHolding
// ()
// Parameters:
// bool                           shouldStop                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::ShouldStopHolding(bool* shouldStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShouldStopHolding");

	APegomastax_Character_BP_C_ShouldStopHolding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldStop != nullptr)
		*shouldStop = params.shouldStop;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can Play Holding Anim
// ()
// Parameters:
// bool                           CanPlay                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::Can_Play_Holding_Anim(bool* CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can Play Holding Anim");

	APegomastax_Character_BP_C_Can_Play_Holding_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlay != nullptr)
		*CanPlay = params.CanPlay;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnClearMountedDino
// ()

void APegomastax_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnClearMountedDino");

	APegomastax_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnSetMountedDino
// ()

void APegomastax_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnSetMountedDino");

	APegomastax_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateHoldingStatus
// ()

void APegomastax_Character_BP_C::UpdateHoldingStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateHoldingStatus");

	APegomastax_Character_BP_C_UpdateHoldingStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPCharacterSleeped
// ()

void APegomastax_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPCharacterSleeped");

	APegomastax_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnMovementModeChangedNotify");

	APegomastax_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateTamedInventory
// ()

void APegomastax_Character_BP_C::CreateTamedInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateTamedInventory");

	APegomastax_Character_BP_C_CreateTamedInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ProcessUsedItem
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::ProcessUsedItem(class UPrimalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ProcessUsedItem");

	APegomastax_Character_BP_C_ProcessUsedItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CalculateBuffTimeForGroup
// ()
// Parameters:
// class APrimalBuff*             Buff                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          extraTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::CalculateBuffTimeForGroup(class APrimalBuff* Buff, float* extraTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CalculateBuffTimeForGroup");

	APegomastax_Character_BP_C_CalculateBuffTimeForGroup_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (extraTime != nullptr)
		*extraTime = params.extraTime;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.NextPickPocketingMode
// ()

void APegomastax_Character_BP_C::NextPickPocketingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.NextPickPocketingMode");

	APegomastax_Character_BP_C_NextPickPocketingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanReturnToCharacter
// ()
// Parameters:
// class AShooterPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           returnPossible                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::CanReturnToCharacter(class AShooterPlayerController* PlayerController, bool* returnPossible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanReturnToCharacter");

	APegomastax_Character_BP_C_CanReturnToCharacter_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (returnPossible != nullptr)
		*returnPossible = params.returnPossible;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanStealItem
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canSteal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::CanStealItem(class UPrimalItem* Item, bool* canSteal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanStealItem");

	APegomastax_Character_BP_C_CanStealItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSteal != nullptr)
		*canSteal = params.canSteal;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.goBackToOwner
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::goBackToOwner(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.goBackToOwner");

	APegomastax_Character_BP_C_goBackToOwner_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Get NumPegosInGroup
// ()
// Parameters:
// int                            maxExtraItems                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::Get_NumPegosInGroup(int* maxExtraItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Get NumPegosInGroup");

	APegomastax_Character_BP_C_Get_NumPegosInGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxExtraItems != nullptr)
		*maxExtraItems = params.maxExtraItems;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsValidItemForTaming
// (NetReliable, Exec, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrimalItem*             PrimalItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::STATIC_IsValidItemForTaming(class UPrimalItem* PrimalItem, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsValidItemForTaming");

	APegomastax_Character_BP_C_IsValidItemForTaming_Params params;
	params.PrimalItem = PrimalItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPInventoryItemUsed
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::BPInventoryItemUsed(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPInventoryItemUsed");

	APegomastax_Character_BP_C_BPInventoryItemUsed_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ReceiveAnyDamage");

	APegomastax_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  K2Node_Select_ReturnValue      (OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APegomastax_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale, struct FColor* K2Node_Select_ReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintDrawFloatingHUD");

	APegomastax_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (K2Node_Select_ReturnValue != nullptr)
		*K2Node_Select_ReturnValue = params.K2Node_Select_ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APegomastax_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTryMultiUse");

	APegomastax_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APegomastax_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPGetMultiUseEntries");

	APegomastax_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.AddAffinityFromFood
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::AddAffinityFromFood(class UPrimalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.AddAffinityFromFood");

	APegomastax_Character_BP_C_AddAffinityFromFood_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealItemInSlot
// ()
// Parameters:
// int                            slotNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::StealItemInSlot(int slotNumber, class APrimalCharacter* Character, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealItemInSlot");

	APegomastax_Character_BP_C_StealItemInSlot_Params params;
	params.slotNumber = slotNumber;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can StealFromCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canSteal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::Can_StealFromCharacter(class APrimalCharacter* Character, bool* canSteal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can StealFromCharacter");

	APegomastax_Character_BP_C_Can_StealFromCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSteal != nullptr)
		*canSteal = params.canSteal;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealRandom Items
// ()
// Parameters:
// int                            NumItems                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           includeHotBarItems             (Parm, ZeroConstructor, IsPlainOldData)
// float                          totalChance                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          chancePerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::StealRandom_Items(int NumItems, bool includeHotBarItems, float totalChance, float chancePerItem, class APrimalCharacter* Character, bool* succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealRandom Items");

	APegomastax_Character_BP_C_StealRandom_Items_Params params;
	params.NumItems = NumItems;
	params.includeHotBarItems = includeHotBarItems;
	params.totalChance = totalChance;
	params.chancePerItem = chancePerItem;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succeeded != nullptr)
		*succeeded = params.succeeded;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Stop FleeingWithLoot
// ()

void APegomastax_Character_BP_C::Stop_FleeingWithLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Stop FleeingWithLoot");

	APegomastax_Character_BP_C_Stop_FleeingWithLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StartFleeingWithLoot
// ()

void APegomastax_Character_BP_C::StartFleeingWithLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StartFleeingWithLoot");

	APegomastax_Character_BP_C_StartFleeingWithLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APegomastax_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPShouldForceFlee");

	APegomastax_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Do StealItem
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrimalCharacter*        characterToStealFrom           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             itemToSteal                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           consumeItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::STATIC_Do_StealItem(class APrimalCharacter* characterToStealFrom, class UPrimalItem* itemToSteal, bool consumeItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Do StealItem");

	APegomastax_Character_BP_C_Do_StealItem_Params params;
	params.characterToStealFrom = characterToStealFrom;
	params.itemToSteal = itemToSteal;
	params.consumeItem = consumeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Steal from Character
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::Steal_from_Character(class APrimalCharacter* Character, bool* succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Steal from Character");

	APegomastax_Character_BP_C_Steal_from_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succeeded != nullptr)
		*succeeded = params.succeeded;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, Exec, Native, NetResponse, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APegomastax_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintAdjustOutputDamage");

	APegomastax_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateWildInventory
// ()

void APegomastax_Character_BP_C::CreateWildInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateWildInventory");

	APegomastax_Character_BP_C_CreateWildInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.OnJumped
// ()

void APegomastax_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.OnJumped");

	APegomastax_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingWeightsArray
// ()
// Parameters:
// TArray<float>                  resourceWeightsIn              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimalItem*>     resourceItems                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  resourceWeightsOut             (Parm, OutParm, ZeroConstructor)

void APegomastax_Character_BP_C::BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingWeightsArray");

	APegomastax_Character_BP_C_BPModifyHarvestingWeightsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (resourceWeightsIn != nullptr)
		*resourceWeightsIn = params.resourceWeightsIn;
	if (resourceItems != nullptr)
		*resourceItems = params.resourceItems;
	if (resourceWeightsOut != nullptr)
		*resourceWeightsOut = params.resourceWeightsOut;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APegomastax_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingQuantity");

	APegomastax_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintCanAttack
// (NetRequest, Exec, Native, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APegomastax_Character_BP_C::STATIC_BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintCanAttack");

	APegomastax_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UserConstructionScript
// ()

void APegomastax_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UserConstructionScript");

	APegomastax_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPUnstasis
// ()

void APegomastax_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPUnstasis");

	APegomastax_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingForTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          preDelay                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Idle                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideBag                        (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::PlayHoldingForTime(float Time, float preDelay, bool Idle, bool HideBag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingForTime");

	APegomastax_Character_BP_C_PlayHoldingForTime_Params params;
	params.Time = Time;
	params.preDelay = preDelay;
	params.Idle = Idle;
	params.HideBag = HideBag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.HideBag
// ()

void APegomastax_Character_BP_C::HideBag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.HideBag");

	APegomastax_Character_BP_C_HideBag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingAfterFleeing
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::StopHoldingAfterFleeing(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingAfterFleeing");

	APegomastax_Character_BP_C_StopHoldingAfterFleeing_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingImmediate
// ()
// Parameters:
// bool                           stopIdleHoldingAnim            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           stopRunHoldingAnim             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideBag                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          idleBlendOutTime               (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::StopHoldingImmediate(bool stopIdleHoldingAnim, bool stopRunHoldingAnim, bool HideBag, float idleBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingImmediate");

	APegomastax_Character_BP_C_StopHoldingImmediate_Params params;
	params.stopIdleHoldingAnim = stopIdleHoldingAnim;
	params.stopRunHoldingAnim = stopRunHoldingAnim;
	params.HideBag = HideBag;
	params.idleBlendOutTime = idleBlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingImmediate
// ()
// Parameters:
// bool                           Idle                           (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::PlayHoldingImmediate(bool Idle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingImmediate");

	APegomastax_Character_BP_C_PlayHoldingImmediate_Params params;
	params.Idle = Idle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBag
// ()

void APegomastax_Character_BP_C::ShowBag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBag");

	APegomastax_Character_BP_C_ShowBag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBagAfterDelay
// ()

void APegomastax_Character_BP_C::ShowBagAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBagAfterDelay");

	APegomastax_Character_BP_C_ShowBagAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FleeAfterTime
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::FleeAfterTime(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FleeAfterTime");

	APegomastax_Character_BP_C_FleeAfterTime_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayCombinedHolding
// ()
// Parameters:
// float                          timeBeforeRun                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          preDelay                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideBag                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          runHoldDuration                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::PlayCombinedHolding(float timeBeforeRun, float preDelay, bool HideBag, float runHoldDuration, class APawn* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayCombinedHolding");

	APegomastax_Character_BP_C_PlayCombinedHolding_Params params;
	params.timeBeforeRun = timeBeforeRun;
	params.preDelay = preDelay;
	params.HideBag = HideBag;
	params.runHoldDuration = runHoldDuration;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ExecuteUbergraph_Pegomastax_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APegomastax_Character_BP_C::ExecuteUbergraph_Pegomastax_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ExecuteUbergraph_Pegomastax_Character_BP");

	APegomastax_Character_BP_C_ExecuteUbergraph_Pegomastax_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
