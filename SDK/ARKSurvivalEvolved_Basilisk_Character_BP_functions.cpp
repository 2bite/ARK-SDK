// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilisk_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPIsHidden
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::BPIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPIsHidden");

	ABasilisk_Character_BP_C_BPIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPostLoadedFromSaveGame
// (Static, NetMulticast, Public, Protected, Delegate, HasOutParms)

void ABasilisk_Character_BP_C::STATIC_BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPostLoadedFromSaveGame");

	ABasilisk_Character_BP_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTurretMode
// ()
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::SetTurretMode(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTurretMode");

	ABasilisk_Character_BP_C_SetTurretMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventFirstPerson");

	ABasilisk_Character_BP_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetSaddleHidden
// ()
// Parameters:
// bool                           NewHidden                      (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::SetSaddleHidden(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetSaddleHidden");

	ABasilisk_Character_BP_C_SetSaddleHidden_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyInventoryItemChange");

	ABasilisk_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdatedTracedMoundTransform
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Protected, Delegate, HasOutParms)

void ABasilisk_Character_BP_C::STATIC_UpdatedTracedMoundTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdatedTracedMoundTransform");

	ABasilisk_Character_BP_C_UpdatedTracedMoundTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.GetBuriedMoundTransform
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms)
// Parameters:
// float                          HeightAlpha                    (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct UObject_FTransform ABasilisk_Character_BP_C::STATIC_GetBuriedMoundTransform(float HeightAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.GetBuriedMoundTransform");

	ABasilisk_Character_BP_C_GetBuriedMoundTransform_Params params;
	params.HeightAlpha = HeightAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Check Unburied State and Add Hungry Ineffectiveness
// ()
// Parameters:
// class FString                  State                          (Parm, OutParm, ZeroConstructor)

void ABasilisk_Character_BP_C::Check_Unburied_State_and_Add_Hungry_Ineffectiveness(class FString* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Check Unburied State and Add Hungry Ineffectiveness");

	ABasilisk_Character_BP_C_Check_Unburied_State_and_Add_Hungry_Ineffectiveness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AddTameIneffectiveness
// ()
// Parameters:
// float                          IneffectivenessValue           (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::AddTameIneffectiveness(float IneffectivenessValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AddTameIneffectiveness");

	ABasilisk_Character_BP_C_AddTameIneffectiveness_Params params;
	params.IneffectivenessValue = IneffectivenessValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTailMoundVisibility
// ()
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::SetTailMoundVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTailMoundVisibility");

	ABasilisk_Character_BP_C_SetTailMoundVisibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.FindNearbyEggs
// ()
// Parameters:
// bool                           StartSeeking                   (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::FindNearbyEggs(bool StartSeeking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.FindNearbyEggs");

	ABasilisk_Character_BP_C_FindNearbyEggs_Params params;
	params.StartSeeking = StartSeeking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPSetupTamed");

	ABasilisk_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPHandleControllerInitiatedAttack");

	ABasilisk_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPOnTamedProcessOrder");

	ABasilisk_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayUndergroundEffectPulse
// ()

void ABasilisk_Character_BP_C::PlayUndergroundEffectPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayUndergroundEffectPulse");

	ABasilisk_Character_BP_C_PlayUndergroundEffectPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.TraceForInvalidGround
// (NetReliable, NetRequest, Exec, Event, Static, Public, Protected, Delegate, HasOutParms)

void ABasilisk_Character_BP_C::STATIC_TraceForInvalidGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.TraceForInvalidGround");

	ABasilisk_Character_BP_C_TraceForInvalidGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifySetRider");

	ABasilisk_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MeshVisibility
// ()
// Parameters:
// class USceneComponent*         InputComponent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::MeshVisibility(class USceneComponent* InputComponent, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MeshVisibility");

	ABasilisk_Character_BP_C_MeshVisibility_Params params;
	params.InputComponent = InputComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearPassenger");

	ABasilisk_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearRider");

	ABasilisk_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Set Visibility Of Riding and Dino Meshes
// ()
// Parameters:
// bool                           NewVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::Set_Visibility_Of_Riding_and_Dino_Meshes(bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Set Visibility Of Riding and Dino Meshes");

	ABasilisk_Character_BP_C_Set_Visibility_Of_Riding_and_Dino_Meshes_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.OffSetFromBuriedGroundLocation
// ()
// Parameters:
// struct FVector                 InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABasilisk_Character_BP_C::OffSetFromBuriedGroundLocation(const struct FVector& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.OffSetFromBuriedGroundLocation");

	ABasilisk_Character_BP_C_OffSetFromBuriedGroundLocation_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.K2_OnMovementModeChanged");

	ABasilisk_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.SharedCanAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::SharedCanAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.SharedCanAttack");

	ABasilisk_Character_BP_C_SharedCanAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanRiderAttack");

	ABasilisk_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanAttack");

	ABasilisk_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, Event, NetResponse, NetMulticast, Public, Protected, Delegate, HasOutParms)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABasilisk_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPGetMultiUseEntries");

	ABasilisk_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTryMultiUse");

	ABasilisk_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.TimeSinceLastAttackForIndex
// (Static, NetMulticast, Public, Protected, Delegate, HasOutParms)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABasilisk_Character_BP_C::STATIC_TimeSinceLastAttackForIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.TimeSinceLastAttackForIndex");

	ABasilisk_Character_BP_C_TimeSinceLastAttackForIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldUnbury
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::ShouldUnbury(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldUnbury");

	ABasilisk_Character_BP_C_ShouldUnbury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldBury
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::ShouldBury(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldBury");

	ABasilisk_Character_BP_C_ShouldBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerServer
// ()

void ABasilisk_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerServer");

	ABasilisk_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Update Bury Mound
// ()
// Parameters:
// bool                           ShouldShow                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::Update_Bury_Mound(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Update Bury Mound");

	ABasilisk_Character_BP_C_Update_Bury_Mound_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateUndergroundTrail
// ()

void ABasilisk_Character_BP_C::UpdateUndergroundTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateUndergroundTrail");

	ABasilisk_Character_BP_C_UpdateUndergroundTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerNonDedicated
// ()

void ABasilisk_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerNonDedicated");

	ABasilisk_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.InitializeDive
// ()

void ABasilisk_Character_BP_C::InitializeDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.InitializeDive");

	ABasilisk_Character_BP_C_InitializeDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.IsAnimationPlaying
// ()
// Parameters:
// TArray<class UAnimMontage*>    Montages                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::IsAnimationPlaying(TArray<class UAnimMontage*>* Montages, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.IsAnimationPlaying");

	ABasilisk_Character_BP_C_IsAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montages != nullptr)
		*Montages = params.Montages;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DetachChildren
// ()

void ABasilisk_Character_BP_C::DetachChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DetachChildren");

	ABasilisk_Character_BP_C_DetachChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveEnd
// ()

void ABasilisk_Character_BP_C::DiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveEnd");

	ABasilisk_Character_BP_C_DiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveSetup
// ()

void ABasilisk_Character_BP_C::DiveSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveSetup");

	ABasilisk_Character_BP_C_DiveSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveIdle
// ()

void ABasilisk_Character_BP_C::DiveIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveIdle");

	ABasilisk_Character_BP_C_DiveIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.CanDive
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Private, Protected, NetServer, DLLImport, Const, NetValidate)
// Parameters:
// bool                           DiveInCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilisk_Character_BP_C::CanDive(bool DiveInCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.CanDive");

	ABasilisk_Character_BP_C_CanDive_Params params;
	params.DiveInCheck = DiveInCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Get Scaled Affinity Based on Dino
// ()
// Parameters:
// float                          InputAffinity                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABasilisk_Character_BP_C::Get_Scaled_Affinity_Based_on_Dino(float InputAffinity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Get Scaled Affinity Based on Dino");

	ABasilisk_Character_BP_C_Get_Scaled_Affinity_Based_on_Dino_Params params;
	params.InputAffinity = InputAffinity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABasilisk_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPAdjustDamage");

	ABasilisk_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.TameIfAllowed
// ()

void ABasilisk_Character_BP_C::TameIfAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.TameIfAllowed");

	ABasilisk_Character_BP_C_TameIfAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetEggSeeking
// ()

void ABasilisk_Character_BP_C::ResetEggSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetEggSeeking");

	ABasilisk_Character_BP_C_ResetEggSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.IncreaseTamingAffinity
// ()
// Parameters:
// class AShooterCharacter*       TamingPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueForTaming                 (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::IncreaseTamingAffinity(class AShooterCharacter* TamingPlayer, float ValueForTaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.IncreaseTamingAffinity");

	ABasilisk_Character_BP_C_IncreaseTamingAffinity_Params params;
	params.TamingPlayer = TamingPlayer;
	params.ValueForTaming = ValueForTaming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UserConstructionScript
// ()

void ABasilisk_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UserConstructionScript");

	ABasilisk_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__FinishedFunc
// ()

void ABasilisk_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__FinishedFunc");

	ABasilisk_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__UpdateFunc
// ()

void ABasilisk_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__UpdateFunc");

	ABasilisk_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__FinishedFunc
// ()

void ABasilisk_Character_BP_C::MoundTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__FinishedFunc");

	ABasilisk_Character_BP_C_MoundTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__UpdateFunc
// ()

void ABasilisk_Character_BP_C::MoundTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__UpdateFunc");

	ABasilisk_Character_BP_C_MoundTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ReceiveBeginPlay
// ()

void ABasilisk_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ReceiveBeginPlay");

	ABasilisk_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPUnstasis
// ()

void ABasilisk_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPUnstasis");

	ABasilisk_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPDinoPostBeginPlay
// ()

void ABasilisk_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPDinoPostBeginPlay");

	ABasilisk_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_Death
// ()

void ABasilisk_Character_BP_C::AnimNotify_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_Death");

	ABasilisk_Character_BP_C_AnimNotify_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.BP_OnJumpPressed
// ()

void ABasilisk_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.BP_OnJumpPressed");

	ABasilisk_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoveToEgg
// ()

void ABasilisk_Character_BP_C::MoveToEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoveToEgg");

	ABasilisk_Character_BP_C_MoveToEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartUpdateEggSeekTimer
// ()

void ABasilisk_Character_BP_C::StartUpdateEggSeekTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartUpdateEggSeekTimer");

	ABasilisk_Character_BP_C_StartUpdateEggSeekTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartEggMoving
// ()

void ABasilisk_Character_BP_C::StartEggMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartEggMoving");

	ABasilisk_Character_BP_C_StartEggMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.RestartBrain
// ()

void ABasilisk_Character_BP_C::RestartBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.RestartBrain");

	ABasilisk_Character_BP_C_RestartBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateSeekEgg
// ()

void ABasilisk_Character_BP_C::UpdateSeekEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateSeekEgg");

	ABasilisk_Character_BP_C_UpdateSeekEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.EatEgg
// ()

void ABasilisk_Character_BP_C::EatEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.EatEgg");

	ABasilisk_Character_BP_C_EatEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.DissolveEggItem
// ()

void ABasilisk_Character_BP_C::DissolveEggItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.DissolveEggItem");

	ABasilisk_Character_BP_C_DissolveEggItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGroundParticleVFX
// ()
// Parameters:
// bool                           orientToGround                 (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetFromRoot                 (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::PlayGroundParticleVFX(bool orientToGround, class UParticleSystem* ParticleSystem, const struct FVector& OffsetFromRoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGroundParticleVFX");

	ABasilisk_Character_BP_C_PlayGroundParticleVFX_Params params;
	params.orientToGround = orientToGround;
	params.ParticleSystem = ParticleSystem;
	params.OffsetFromRoot = OffsetFromRoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_SetSaddleHidden
// ()
// Parameters:
// bool                           NewHidden                      (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::Multi_SetSaddleHidden(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_SetSaddleHidden");

	ABasilisk_Character_BP_C_Multi_SetSaddleHidden_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceUpdateBuriedMound
// ()

void ABasilisk_Character_BP_C::ForceUpdateBuriedMound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceUpdateBuriedMound");

	ABasilisk_Character_BP_C_ForceUpdateBuriedMound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetInterp
// ()
// Parameters:
// bool                           BuriedState                    (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::ResetInterp(bool BuriedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetInterp");

	ABasilisk_Character_BP_C_ResetInterp_Params params;
	params.BuriedState = BuriedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGatedFXPulse
// ()

void ABasilisk_Character_BP_C::PlayGatedFXPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGatedFXPulse");

	ABasilisk_Character_BP_C_PlayGatedFXPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartMoundVisual
// ()
// Parameters:
// bool                           NewVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::StartMoundVisual(bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartMoundVisual");

	ABasilisk_Character_BP_C_StartMoundVisual_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_ForceDiveEnd
// ()

void ABasilisk_Character_BP_C::Multi_ForceDiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_ForceDiveEnd");

	ABasilisk_Character_BP_C_Multi_ForceDiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceDiveEnd
// ()

void ABasilisk_Character_BP_C::ForceDiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceDiveEnd");

	ABasilisk_Character_BP_C_ForceDiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartBuried
// ()

void ABasilisk_Character_BP_C::StartBuried()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartBuried");

	ABasilisk_Character_BP_C_StartBuried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveIn
// ()

void ABasilisk_Character_BP_C::Multi_DiveIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveIn");

	ABasilisk_Character_BP_C_Multi_DiveIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Attempt Dive In
// ()

void ABasilisk_Character_BP_C::Attempt_Dive_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Attempt Dive In");

	ABasilisk_Character_BP_C_Attempt_Dive_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AttemptDiveOut
// ()

void ABasilisk_Character_BP_C::AttemptDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AttemptDiveOut");

	ABasilisk_Character_BP_C_AttemptDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveOut
// ()

void ABasilisk_Character_BP_C::Multi_DiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveOut");

	ABasilisk_Character_BP_C_Multi_DiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_EndBury
// ()

void ABasilisk_Character_BP_C::AnimNotify_EndBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_EndBury");

	ABasilisk_Character_BP_C_AnimNotify_EndBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_StartBury
// ()

void ABasilisk_Character_BP_C::AnimNotify_StartBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_StartBury");

	ABasilisk_Character_BP_C_AnimNotify_StartBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.Server_TryDive
// ()
// Parameters:
// bool                           NewUnderground                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ImmediateOut                   (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::Server_TryDive(bool NewUnderground, bool ImmediateOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.Server_TryDive");

	ABasilisk_Character_BP_C_Server_TryDive_Params params;
	params.NewUnderground = NewUnderground;
	params.ImmediateOut = ImmediateOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP.Basilisk_Character_BP_C.ExecuteUbergraph_Basilisk_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_C::ExecuteUbergraph_Basilisk_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP.Basilisk_Character_BP_C.ExecuteUbergraph_Basilisk_Character_BP");

	ABasilisk_Character_BP_C_ExecuteUbergraph_Basilisk_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
