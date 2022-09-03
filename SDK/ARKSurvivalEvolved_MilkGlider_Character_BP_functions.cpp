// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MilkGlider_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CheckTeamAndToggleTroughVisibility
// ()

void AMilkGlider_Character_BP_C::CheckTeamAndToggleTroughVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CheckTeamAndToggleTroughVisibility");

	AMilkGlider_Character_BP_C_CheckTeamAndToggleTroughVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bNurseVisualActive
// ()

void AMilkGlider_Character_BP_C::OnRep_bNurseVisualActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bNurseVisualActive");

	AMilkGlider_Character_BP_C_OnRep_bNurseVisualActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceivePossessed");

	AMilkGlider_Character_BP_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void AMilkGlider_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InterceptInputEvent");

	AMilkGlider_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.PickUpBabies
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void AMilkGlider_Character_BP_C::STATIC_PickUpBabies()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.PickUpBabies");

	AMilkGlider_Character_BP_C_PickUpBabies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetPassengerDinoAdditionalOffset
// ()
// Parameters:
// class APrimalDinoCharacter**   Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMilkGlider_Character_BP_C::BPGetPassengerDinoAdditionalOffset(class APrimalDinoCharacter** Passenger)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetPassengerDinoAdditionalOffset");

	AMilkGlider_Character_BP_C_BPGetPassengerDinoAdditionalOffset_Params params;
	params.Passenger = Passenger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (NetResponse, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AMilkGlider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideRandomWanderLocation");

	AMilkGlider_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateNursingFx
// ()
// Parameters:
// bool                           bUseOverrideIsNursing          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNursing                      (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::UpdateNursingFx(bool bUseOverrideIsNursing, bool IsNursing)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateNursingFx");

	AMilkGlider_Character_BP_C_UpdateNursingFx_Params params;
	params.bUseOverrideIsNursing = bUseOverrideIsNursing;
	params.IsNursing = IsNursing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanNurseDino
// ()
// Parameters:
// class APrimalDinoCharacter**   OtherDino                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::CanNurseDino(class APrimalDinoCharacter** OtherDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanNurseDino");

	AMilkGlider_Character_BP_C_CanNurseDino_Params params;
	params.OtherDino = OtherDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPApplyCharacterSnapshot
// (Event, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 To                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxExtent                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Pose                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCollisionOn                   (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::STATIC_BPApplyCharacterSnapshot(class UPrimalItem** Item, class AActor** To, struct FVector* Offset, float* MaxExtent, int* Pose, bool* bCollisionOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPApplyCharacterSnapshot");

	AMilkGlider_Character_BP_C_BPApplyCharacterSnapshot_Params params;
	params.Item = Item;
	params.To = To;
	params.Offset = Offset;
	params.MaxExtent = MaxExtent;
	params.Pose = Pose;
	params.bCollisionOn = bCollisionOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.TryToPlayBabyPassengerCuddleAnim
// ()

void AMilkGlider_Character_BP_C::TryToPlayBabyPassengerCuddleAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.TryToPlayBabyPassengerCuddleAnim");

	AMilkGlider_Character_BP_C_TryToPlayBabyPassengerCuddleAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateClientCameraShake
// ()

void AMilkGlider_Character_BP_C::UpdateClientCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateClientCameraShake");

	AMilkGlider_Character_BP_C_UpdateClientCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMilkGlider_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPAdjustAttackIndex");

	AMilkGlider_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetAIGlideDirection
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 MoveDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::STATIC_GetAIGlideDirection(struct FVector* MoveDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetAIGlideDirection");

	AMilkGlider_Character_BP_C_GetAIGlideDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveDirection != nullptr)
		*MoveDirection = params.MoveDirection;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldForceFlee");

	AMilkGlider_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideFinalWanderLocation
// ()
// Parameters:
// struct FVector                 outVec                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideFinalWanderLocation");

	AMilkGlider_Character_BP_C_OverrideFinalWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outVec != nullptr)
		*outVec = params.outVec;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.NotifyTribesOfBabyStolen
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrimalDinoCharacter*    StolenBaby                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* TheifSC                        (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::STATIC_NotifyTribesOfBabyStolen(class APrimalDinoCharacter* StolenBaby, class AShooterPlayerController* TheifSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.NotifyTribesOfBabyStolen");

	AMilkGlider_Character_BP_C_NotifyTribesOfBabyStolen_Params params;
	params.StolenBaby = StolenBaby;
	params.TheifSC = TheifSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetBonesToHideOnAllocation
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AMilkGlider_Character_BP_C::BPGetBonesToHideOnAllocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetBonesToHideOnAllocation");

	AMilkGlider_Character_BP_C_BPGetBonesToHideOnAllocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Til Pass Hide Seats
// ()

void AMilkGlider_Character_BP_C::Tick_Til_Pass_Hide_Seats()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Til Pass Hide Seats");

	AMilkGlider_Character_BP_C_Tick_Til_Pass_Hide_Seats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UnhidePassengerSeats
// ()

void AMilkGlider_Character_BP_C::UnhidePassengerSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UnhidePassengerSeats");

	AMilkGlider_Character_BP_C_UnhidePassengerSeats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerGlideClearFoilage
// (NetReliable, Exec, Native, Event, Static, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           bIgnoreGlideCheck              (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::STATIC_ServerGlideClearFoilage(bool bIgnoreGlideCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerGlideClearFoilage");

	AMilkGlider_Character_BP_C_ServerGlideClearFoilage_Params params;
	params.bIgnoreGlideCheck = bIgnoreGlideCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_ForceAllowAddBuff");

	AMilkGlider_Character_BP_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.HasGeyserBuff
// ()
// Parameters:
// bool                           bHasBuff                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::HasGeyserBuff(bool* bHasBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.HasGeyserBuff");

	AMilkGlider_Character_BP_C_HasGeyserBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasBuff != nullptr)
		*bHasBuff = params.bHasBuff;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAdjustOutputDamage
// (Exec, Native, NetMulticast, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMilkGlider_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAdjustOutputDamage");

	AMilkGlider_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearPassenger");

	AMilkGlider_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyAddPassenger");

	AMilkGlider_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCarriedDinoBabyRescaled
// ()
// Parameters:
// class APrimalDinoCharacter**   AgingCarriedDino               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewAge                         (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPCarriedDinoBabyRescaled(class APrimalDinoCharacter** AgingCarriedDino, float* NewAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCarriedDinoBabyRescaled");

	AMilkGlider_Character_BP_C_BPCarriedDinoBabyRescaled_Params params;
	params.AgingCarriedDino = AgingCarriedDino;
	params.NewAge = NewAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ScaleBabyDino
// ()
// Parameters:
// class APrimalDinoCharacter*    BabyToScale                    (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ScaleBabyDino(class APrimalDinoCharacter* BabyToScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ScaleBabyDino");

	AMilkGlider_Character_BP_C_ScaleBabyDino_Params params;
	params.BabyToScale = BabyToScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Can Parachute
// ()
// Parameters:
// bool                           ToStart                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowedToParachute            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Can_Parachute(bool ToStart, bool* bAllowedToParachute)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Can Parachute");

	AMilkGlider_Character_BP_C_Can_Parachute_Params params;
	params.ToStart = ToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowedToParachute != nullptr)
		*bAllowedToParachute = params.bAllowedToParachute;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RotateToZeroPitch
// ()

void AMilkGlider_Character_BP_C::RotateToZeroPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RotateToZeroPitch");

	AMilkGlider_Character_BP_C_RotateToZeroPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bWantsToParachute
// ()

void AMilkGlider_Character_BP_C::OnRep_bWantsToParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bWantsToParachute");

	AMilkGlider_Character_BP_C_OnRep_bWantsToParachute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetParachuteState
// ()
// Parameters:
// bool                           bStartParachute                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseCD                         (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::SetParachuteState(bool bStartParachute, bool bUseCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetParachuteState");

	AMilkGlider_Character_BP_C_SetParachuteState_Params params;
	params.bStartParachute = bStartParachute;
	params.bUseCD = bUseCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMilkGlider_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	AMilkGlider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanStartAutoGlide
// ()
// Parameters:
// bool                           bStartGlide                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::CanStartAutoGlide(bool* bStartGlide)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanStartAutoGlide");

	AMilkGlider_Character_BP_C_CanStartAutoGlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStartGlide != nullptr)
		*bStartGlide = params.bStartGlide;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateSlidingState
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::UpdateSlidingState(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateSlidingState");

	AMilkGlider_Character_BP_C_UpdateSlidingState_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMilkGlider_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetGravityZScale");

	AMilkGlider_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
// ()
// Parameters:
// class APrimalDinoCharacter**   AgingCarriedDino               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PreviousAge                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewAge                         (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPNotifyCarriedDinoBabyAgeIncrement(class APrimalDinoCharacter** AgingCarriedDino, float* PreviousAge, float* NewAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement");

	AMilkGlider_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params params;
	params.AgingCarriedDino = AgingCarriedDino;
	params.PreviousAge = PreviousAge;
	params.NewAge = NewAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetNextValidEmptySeat
// ()
// Parameters:
// int                            SeatNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::GetNextValidEmptySeat(int* SeatNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetNextValidEmptySeat");

	AMilkGlider_Character_BP_C_GetNextValidEmptySeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeatNum != nullptr)
		*SeatNum = params.SeatNum;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPServerHandleNetExecCommand");

	AMilkGlider_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPClientDoMultiUse
// (NetResponse, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPClientDoMultiUse");

	AMilkGlider_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Valid Baby Dino for Passenger
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoToCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkipAllyCheck                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkipDistanceCheck             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidPassenger                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Is_Valid_Baby_Dino_for_Passenger(class APrimalDinoCharacter* DinoToCheck, bool bSkipAllyCheck, bool bSkipDistanceCheck, bool* ValidPassenger)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Valid Baby Dino for Passenger");

	AMilkGlider_Character_BP_C_Is_Valid_Baby_Dino_for_Passenger_Params params;
	params.DinoToCheck = DinoToCheck;
	params.bSkipAllyCheck = bSkipAllyCheck;
	params.bSkipDistanceCheck = bSkipDistanceCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidPassenger != nullptr)
		*ValidPassenger = params.ValidPassenger;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCanTakePassenger
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PassengerSeatIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForcePassenger                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowFlyersAndWaterDinos      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCanTakePassenger");

	AMilkGlider_Character_BP_C_BPCanTakePassenger_Params params;
	params.Character = Character;
	params.PassengerSeatIndex = PassengerSeatIndex;
	params.bForcePassenger = bForcePassenger;
	params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintDrawFloatingHUD");

	AMilkGlider_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetDivingRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::GetDivingRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetDivingRatio");

	AMilkGlider_Character_BP_C_GetDivingRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOVInterpSpeed
// ()
// Parameters:
// float*                         FOVInterpSpeedIn               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMilkGlider_Character_BP_C::BPModifyFOVInterpSpeed(float* FOVInterpSpeedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOVInterpSpeed");

	AMilkGlider_Character_BP_C_BPModifyFOVInterpSpeed_Params params;
	params.FOVInterpSpeedIn = FOVInterpSpeedIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetFOVRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::GetFOVRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetFOVRatio");

	AMilkGlider_Character_BP_C_GetFOVRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMilkGlider_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOV");

	AMilkGlider_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsDiving
// ()
// Parameters:
// bool                           bIsDiving                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::IsDiving(bool* bIsDiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsDiving");

	AMilkGlider_Character_BP_C_IsDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsDiving != nullptr)
		*bIsDiving = params.bIsDiving;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDiveBomb
// ()
// Parameters:
// bool                           bFromGlide                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanAttack                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::CanDiveBomb(bool bFromGlide, bool* CanAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDiveBomb");

	AMilkGlider_Character_BP_C_CanDiveBomb_Params params;
	params.bFromGlide = bFromGlide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAttack != nullptr)
		*CanAttack = params.CanAttack;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPDoAttack");

	AMilkGlider_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnStartJump");

	AMilkGlider_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDive
// ()
// Parameters:
// bool                           bCanDive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::CanDive(bool* bCanDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDive");

	AMilkGlider_Character_BP_C_CanDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanDive != nullptr)
		*bCanDive = params.bCanDive;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingPitch
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentPitch                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewPitch                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::GetGlidingPitch(float Delta, float CurrentPitch, float* NewPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingPitch");

	AMilkGlider_Character_BP_C_GetGlidingPitch_Params params;
	params.Delta = Delta;
	params.CurrentPitch = CurrentPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPitch != nullptr)
		*NewPitch = params.NewPitch;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyLevelUp");

	AMilkGlider_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearGliding
// ()

void AMilkGlider_Character_BP_C::ClearGliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearGliding");

	AMilkGlider_Character_BP_C_ClearGliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DisableNursing
// ()

void AMilkGlider_Character_BP_C::DisableNursing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DisableNursing");

	AMilkGlider_Character_BP_C_DisableNursing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EnableNursing
// ()

void AMilkGlider_Character_BP_C::EnableNursing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EnableNursing");

	AMilkGlider_Character_BP_C_EnableNursing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Event, NetMulticast, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AMilkGlider_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetMultiUseEntries");

	AMilkGlider_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTryMultiUse");

	AMilkGlider_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldLimitRightDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BPShouldLimitRightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldLimitRightDirection");

	AMilkGlider_Character_BP_C_BPShouldLimitRightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveRight");

	AMilkGlider_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyRightDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMilkGlider_Character_BP_C::BPModifyRightDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyRightDirectionInput");

	AMilkGlider_Character_BP_C_BPModifyRightDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintOverrideWantsToRun");

	AMilkGlider_Character_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintCanRiderAttack
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintCanRiderAttack");

	AMilkGlider_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPHandleOnStopTargeting");

	AMilkGlider_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LookDirectionForJumpRefactor
// ()
// Parameters:
// struct FVector                 OutDir                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::LookDirectionForJumpRefactor(struct FVector* OutDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LookDirectionForJumpRefactor");

	AMilkGlider_Character_BP_C_LookDirectionForJumpRefactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDir != nullptr)
		*OutDir = params.OutDir;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveForward");

	AMilkGlider_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Sliding
// ()
// Parameters:
// bool                           bIsSliding                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Is_Sliding(bool* bIsSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Sliding");

	AMilkGlider_Character_BP_C_Is_Sliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSliding != nullptr)
		*bIsSliding = params.bIsSliding;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetSlideDecayMultiplierFromSlope
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          Multi_Ratio_Direction          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CharSlideAngle                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::STATIC_GetSlideDecayMultiplierFromSlope(float* Multi_Ratio_Direction, float* CharSlideAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetSlideDecayMultiplierFromSlope");

	AMilkGlider_Character_BP_C_GetSlideDecayMultiplierFromSlope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multi_Ratio_Direction != nullptr)
		*Multi_Ratio_Direction = params.Multi_Ratio_Direction;
	if (CharSlideAngle != nullptr)
		*CharSlideAngle = params.CharSlideAngle;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Sliding
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::STATIC_Client_Tick_Sliding(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Sliding");

	AMilkGlider_Character_BP_C_Client_Tick_Sliding_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server Tick Sliding
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Server_Tick_Sliding(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server Tick Sliding");

	AMilkGlider_Character_BP_C_Server_Tick_Sliding_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Clear Sliding
// ()

void AMilkGlider_Character_BP_C::Clear_Sliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Clear Sliding");

	AMilkGlider_Character_BP_C_Clear_Sliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartSliding
// ()
// Parameters:
// bool                           bFromGlide                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJustDiveBombed                (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::StartSliding(bool bFromGlide, bool bJustDiveBombed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartSliding");

	AMilkGlider_Character_BP_C_StartSliding_Params params;
	params.bFromGlide = bFromGlide;
	params.bJustDiveBombed = bJustDiveBombed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanSlide
// ()
// Parameters:
// bool                           bCanSlide                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::CanSlide(bool* bCanSlide)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanSlide");

	AMilkGlider_Character_BP_C_CanSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanSlide != nullptr)
		*bCanSlide = params.bCanSlide;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanChargeJump
// ()
// Parameters:
// bool                           bCanJump                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::CanChargeJump(bool* bCanJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanChargeJump");

	AMilkGlider_Character_BP_C_CanChargeJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanJump != nullptr)
		*bCanJump = params.bCanJump;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideFlyingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMilkGlider_Character_BP_C::BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideFlyingVelocity");

	AMilkGlider_Character_BP_C_BPOverrideFlyingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMilkGlider_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	AMilkGlider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Get Gliding Rotation Rate
// ()
// Parameters:
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Get_Gliding_Rotation_Rate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Get Gliding Rotation Rate");

	AMilkGlider_Character_BP_C_Get_Gliding_Rotation_Rate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMilkGlider_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_RotationRate");

	AMilkGlider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingSpeedRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::GetGlidingSpeedRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingSpeedRatio");

	AMilkGlider_Character_BP_C_GetGlidingSpeedRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Gliding
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Client_Tick_Gliding(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Gliding");

	AMilkGlider_Character_BP_C_Client_Tick_Gliding_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_CurrentExtraState
// ()

void AMilkGlider_Character_BP_C::OnRep_CurrentExtraState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_CurrentExtraState");

	AMilkGlider_Character_BP_C_OnRep_CurrentExtraState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunReleased
// ()

void AMilkGlider_Character_BP_C::InputRunReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunReleased");

	AMilkGlider_Character_BP_C_InputRunReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunPressed
// ()

void AMilkGlider_Character_BP_C::InputRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunPressed");

	AMilkGlider_Character_BP_C_InputRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerServer
// ()

void AMilkGlider_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerServer");

	AMilkGlider_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsGliding
// ()
// Parameters:
// bool                           bIsGliding                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::IsGliding(bool* bIsGliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsGliding");

	AMilkGlider_Character_BP_C_IsGliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsGliding != nullptr)
		*bIsGliding = params.bIsGliding;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Force ForwardInput
// ()

void AMilkGlider_Character_BP_C::Tick_Force_ForwardInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Force ForwardInput");

	AMilkGlider_Character_BP_C_Tick_Force_ForwardInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanGlide
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ToStart                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowedToGlide                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::STATIC_CanGlide(bool ToStart, bool* bAllowedToGlide)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanGlide");

	AMilkGlider_Character_BP_C_CanGlide_Params params;
	params.ToStart = ToStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowedToGlide != nullptr)
		*bAllowedToGlide = params.bAllowedToGlide;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartGlide
// ()
// Parameters:
// bool                           bFromSlide                     (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::StartGlide(bool bFromSlide)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartGlide");

	AMilkGlider_Character_BP_C_StartGlide_Params params;
	params.bFromSlide = bFromSlide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerTickGliding
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ServerTickGliding(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerTickGliding");

	AMilkGlider_Character_BP_C_ServerTickGliding_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AMilkGlider_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetHUDElements");

	AMilkGlider_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerNonDedicated
// ()

void AMilkGlider_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerNonDedicated");

	AMilkGlider_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifySetRider");

	AMilkGlider_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCharacterSleeped
// ()

void AMilkGlider_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCharacterSleeped");

	AMilkGlider_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearRider");

	AMilkGlider_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerStopJump
// ()

void AMilkGlider_Character_BP_C::ServerStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerStopJump");

	AMilkGlider_Character_BP_C_ServerStopJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnMovementModeChangedNotify");

	AMilkGlider_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetLaunchDirection
// ()
// Parameters:
// class AActor*                  CalcActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMilkGlider_Character_BP_C::GetLaunchDirection(class AActor* CalcActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetLaunchDirection");

	AMilkGlider_Character_BP_C_GetLaunchDirection_Params params;
	params.CalcActor = CalcActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LaunchAtTracePoint
// ()

void AMilkGlider_Character_BP_C::LaunchAtTracePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LaunchAtTracePoint");

	AMilkGlider_Character_BP_C_LaunchAtTracePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteJump
// ()

void AMilkGlider_Character_BP_C::ExecuteJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteJump");

	AMilkGlider_Character_BP_C_ExecuteJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Prep Jump
// ()

void AMilkGlider_Character_BP_C::Prep_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Prep Jump");

	AMilkGlider_Character_BP_C_Prep_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShouldStopJumpRotation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilkGlider_Character_BP_C::ShouldStopJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShouldStopJumpRotation");

	AMilkGlider_Character_BP_C_ShouldStopJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClamp                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMilkGlider_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, bool bClamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetClampedLookDir");

	AMilkGlider_Character_BP_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;
	params.bClamp = bClamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.JumpingTrace
// (NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void AMilkGlider_Character_BP_C::JumpingTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.JumpingTrace");

	AMilkGlider_Character_BP_C_JumpingTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShortestAngleDistance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShortestAngleDistance");

	AMilkGlider_Character_BP_C_ShortestAngleDistance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Find Leap Dir
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMilkGlider_Character_BP_C::Find_Leap_Dir()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Find Leap Dir");

	AMilkGlider_Character_BP_C_Find_Leap_Dir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UserConstructionScript
// ()

void AMilkGlider_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UserConstructionScript");

	AMilkGlider_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_RunToggle_K2Node_InputActionEvent_200
// ()

void AMilkGlider_Character_BP_C::InpActEvt_RunToggle_K2Node_InputActionEvent_200()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_RunToggle_K2Node_InputActionEvent_200");

	AMilkGlider_Character_BP_C_InpActEvt_RunToggle_K2Node_InputActionEvent_200_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_199
// ()

void AMilkGlider_Character_BP_C::InpActEvt_Run_K2Node_InputActionEvent_199()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_199");

	AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_199_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_198
// ()

void AMilkGlider_Character_BP_C::InpActEvt_Run_K2Node_InputActionEvent_198()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_198");

	AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_198_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpPressed
// ()

void AMilkGlider_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpPressed");

	AMilkGlider_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpReleased
// ()

void AMilkGlider_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpReleased");

	AMilkGlider_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedPress
// ()

void AMilkGlider_Character_BP_C::DelayedPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedPress");

	AMilkGlider_Character_BP_C_DelayedPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Request Jump Response
// ()
// Parameters:
// bool                           isHoldingJump                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ChargeTime                     (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Request_Jump_Response(bool isHoldingJump, float ChargeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Request Jump Response");

	AMilkGlider_Character_BP_C_Request_Jump_Response_Params params;
	params.isHoldingJump = isHoldingJump;
	params.ChargeTime = ChargeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_SetPreventMovement
// ()
// Parameters:
// bool                           NewPreventMovement             (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_SetPreventMovement");

	AMilkGlider_Character_BP_C_Multi_SetPreventMovement_Params params;
	params.NewPreventMovement = NewPreventMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedClearJumping
// ()

void AMilkGlider_Character_BP_C::DelayedClearJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedClearJumping");

	AMilkGlider_Character_BP_C_DelayedClearJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JumpInstant                    (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TraceTargetDir");

	AMilkGlider_Character_BP_C_Server_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;
	params.JumpInstant = JumpInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartJumpIdle
// ()

void AMilkGlider_Character_BP_C::StartJumpIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartJumpIdle");

	AMilkGlider_Character_BP_C_StartJumpIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearJump
// ()
// Parameters:
// bool                           ForceImmediateClear            (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ClearJump(bool ForceImmediateClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearJump");

	AMilkGlider_Character_BP_C_ClearJump_Params params;
	params.ForceImmediateClear = ForceImmediateClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_TraceTargetDir");

	AMilkGlider_Character_BP_C_Multi_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateAllJumpRotation
// ()

void AMilkGlider_Character_BP_C::UpdateAllJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateAllJumpRotation");

	AMilkGlider_Character_BP_C_UpdateAllJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateJumpRotation
// ()

void AMilkGlider_Character_BP_C::UpdateJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateJumpRotation");

	AMilkGlider_Character_BP_C_UpdateJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RequestJumpReady
// ()

void AMilkGlider_Character_BP_C::RequestJumpReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RequestJumpReady");

	AMilkGlider_Character_BP_C_RequestJumpReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_JumpStart
// ()

void AMilkGlider_Character_BP_C::Event_JumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_JumpStart");

	AMilkGlider_Character_BP_C_Event_JumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StartGlide
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewSpeedMultiplier             (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Multi_StartGlide(const struct FRotator& NewRotation, float NewSpeedMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StartGlide");

	AMilkGlider_Character_BP_C_Multi_StartGlide_Params params;
	params.NewRotation = NewRotation;
	params.NewSpeedMultiplier = NewSpeedMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputPressed
// ()

void AMilkGlider_Character_BP_C::Server_RunInputPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputPressed");

	AMilkGlider_Character_BP_C_Server_RunInputPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputReleased
// ()

void AMilkGlider_Character_BP_C::Server_RunInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputReleased");

	AMilkGlider_Character_BP_C_Server_RunInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceiveBeginPlay
// ()

void AMilkGlider_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceiveBeginPlay");

	AMilkGlider_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TargetInput
// ()
// Parameters:
// bool                           IsPressed                      (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Server_TargetInput(bool IsPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TargetInput");

	AMilkGlider_Character_BP_C_Server_TargetInput_Params params;
	params.IsPressed = IsPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPUnstasis
// ()

void AMilkGlider_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPUnstasis");

	AMilkGlider_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DiveBomb
// ()
// Parameters:
// bool                           bFromDive                      (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::DiveBomb(bool bFromDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DiveBomb");

	AMilkGlider_Character_BP_C_DiveBomb_Params params;
	params.bFromDive = bFromDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OwningClientDiveBombCameraShake
// ()
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromDiveBomb                  (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::OwningClientDiveBombCameraShake(float Intensity, bool bFromDiveBomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OwningClientDiveBombCameraShake");

	AMilkGlider_Character_BP_C_OwningClientDiveBombCameraShake_Params params;
	params.Intensity = Intensity;
	params.bFromDiveBomb = bFromDiveBomb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnJumpPressedReroute
// ()

void AMilkGlider_Character_BP_C::OnJumpPressedReroute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnJumpPressedReroute");

	AMilkGlider_Character_BP_C_OnJumpPressedReroute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.WaterJump
// ()

void AMilkGlider_Character_BP_C::WaterJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.WaterJump");

	AMilkGlider_Character_BP_C_WaterJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnDied_Event");

	AMilkGlider_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_SetParachuteInput
// ()
// Parameters:
// struct FVector                 Parachute_Input_Vector         (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Server_SetParachuteInput(const struct FVector& Parachute_Input_Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_SetParachuteInput");

	AMilkGlider_Character_BP_C_Server_SetParachuteInput_Params params;
	params.Parachute_Input_Vector = Parachute_Input_Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetToStoredVelocity
// ()

void AMilkGlider_Character_BP_C::SetToStoredVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetToStoredVelocity");

	AMilkGlider_Character_BP_C_SetToStoredVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_Init
// ()

void AMilkGlider_Character_BP_C::Event_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_Init");

	AMilkGlider_Character_BP_C_Event_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StealBaby
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Multi_StealBaby(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StealBaby");

	AMilkGlider_Character_BP_C_Multi_StealBaby_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.AIJump
// ()

void AMilkGlider_Character_BP_C::AIJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.AIJump");

	AMilkGlider_Character_BP_C_AIJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EventStopPara
// ()

void AMilkGlider_Character_BP_C::EventStopPara()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EventStopPara");

	AMilkGlider_Character_BP_C_EventStopPara_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BellyFlopJump
// ()

void AMilkGlider_Character_BP_C::BellyFlopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BellyFlopJump");

	AMilkGlider_Character_BP_C_BellyFlopJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_UpdateNursingFX
// ()
// Parameters:
// bool                           bNewIsNursing                  (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::Multi_UpdateNursingFX(bool bNewIsNursing)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_UpdateNursingFX");

	AMilkGlider_Character_BP_C_Multi_UpdateNursingFX_Params params;
	params.bNewIsNursing = bNewIsNursing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DropAllBabes
// ()

void AMilkGlider_Character_BP_C::DropAllBabes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DropAllBabes");

	AMilkGlider_Character_BP_C_DropAllBabes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerDropBabes
// ()
// Parameters:
// class AShooterPlayerController* Shooter                        (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ServerDropBabes(class AShooterPlayerController* Shooter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerDropBabes");

	AMilkGlider_Character_BP_C_ServerDropBabes_Params params;
	params.Shooter = Shooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerPickUpBabes
// ()
// Parameters:
// class AShooterPlayerController* Shooter                        (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ServerPickUpBabes(class AShooterPlayerController* Shooter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerPickUpBabes");

	AMilkGlider_Character_BP_C_ServerPickUpBabes_Params params;
	params.Shooter = Shooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopSlideSound
// ()

void AMilkGlider_Character_BP_C::Event_StopSlideSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopSlideSound");

	AMilkGlider_Character_BP_C_Event_StopSlideSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopGlideSound
// ()

void AMilkGlider_Character_BP_C::Event_StopGlideSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopGlideSound");

	AMilkGlider_Character_BP_C_Event_StopGlideSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopParaSound
// ()

void AMilkGlider_Character_BP_C::Event_StopParaSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopParaSound");

	AMilkGlider_Character_BP_C_Event_StopParaSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteUbergraph_MilkGlider_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMilkGlider_Character_BP_C::ExecuteUbergraph_MilkGlider_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteUbergraph_MilkGlider_Character_BP");

	AMilkGlider_Character_BP_C_ExecuteUbergraph_MilkGlider_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
