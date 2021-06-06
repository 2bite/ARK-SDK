// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Argent_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Argent_Character_BP.Argent_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPDidClearCarriedCharacter");

	AArgent_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.Allow Passenger in Slot
// (Exec, Native, NetResponse, Static, Public, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::STATIC_Allow_Passenger_in_Slot(class APrimalCharacter* Character, int Slot, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Allow Passenger in Slot");

	AArgent_Character_BP_C_Allow_Passenger_in_Slot_Params params;
	params.Character = Character;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AArgent_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPAllowCarryCharacter");

	AArgent_Character_BP_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Argent_Character_BP.Argent_Character_BP_C.Remove Passenger In Slot
// ()
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::Remove_Passenger_In_Slot(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Remove Passenger In Slot");

	AArgent_Character_BP_C_Remove_Passenger_In_Slot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.Get Passenger
// ()
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Char                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::Get_Passenger(int Slot, class APrimalCharacter** Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Get Passenger");

	AArgent_Character_BP_C_Get_Passenger_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Char != nullptr)
		*Char = params.Char;
}


// Function Argent_Character_BP.Argent_Character_BP_C.Has Passenger In Slot
// ()
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::Has_Passenger_In_Slot(int Slot, bool* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.Has Passenger In Slot");

	AArgent_Character_BP_C_Has_Passenger_In_Slot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearRider");

	AArgent_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPDoAttack");

	AArgent_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.UpdateCarryAnim
// ()

void AArgent_Character_BP_C::UpdateCarryAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.UpdateCarryAnim");

	AArgent_Character_BP_C_UpdateCarryAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPOnMovementModeChangedNotify");

	AArgent_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.ReceiveBeginPlay
// ()

void AArgent_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.ReceiveBeginPlay");

	AArgent_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearPassenger");

	AArgent_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.ReceiveTick");

	AArgent_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AArgent_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BlueprintCanRiderAttack");

	AArgent_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BPCanTakePassenger
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PassengerSeatIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForcePassenger                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowFlyersAndWaterDinos      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AArgent_Character_BP_C::BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPCanTakePassenger");

	AArgent_Character_BP_C_BPCanTakePassenger_Params params;
	params.Character = Character;
	params.PassengerSeatIndex = PassengerSeatIndex;
	params.bForcePassenger = bForcePassenger;
	params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyAddPassenger");

	AArgent_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.UserConstructionScript
// ()

void AArgent_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.UserConstructionScript");

	AArgent_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.MulticastOnAttack
// ()

void AArgent_Character_BP_C::MulticastOnAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.MulticastOnAttack");

	AArgent_Character_BP_C_MulticastOnAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.MulticastUpdateCarryAnim
// ()

void AArgent_Character_BP_C::MulticastUpdateCarryAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.MulticastUpdateCarryAnim");

	AArgent_Character_BP_C_MulticastUpdateCarryAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_Character_BP.Argent_Character_BP_C.ExecuteUbergraph_Argent_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_Character_BP_C::ExecuteUbergraph_Argent_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_Character_BP.Argent_Character_BP_C.ExecuteUbergraph_Argent_Character_BP");

	AArgent_Character_BP_C_ExecuteUbergraph_Argent_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
