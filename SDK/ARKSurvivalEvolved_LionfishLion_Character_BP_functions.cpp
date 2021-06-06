// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.GetHudData
// ()
// Parameters:
// float                          AttackComboPercent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxComboFlashingSpeed          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastUncloakTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CloakCooldown                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFemale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsCamoActive                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastRoarBuffTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RoarBuffCooldown               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasMateBoost                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastTimeReleasedTeleport       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TeleportCooldown               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TeleportPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsCurrentlyChargingTeleport    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        LatestQuickteleportTarget      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeapCooldown                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastLeapTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeapPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::GetHudData(float* AttackComboPercent, float* MaxComboFlashingSpeed, double* LastUncloakTime, float* CloakCooldown, bool* IsFemale, bool* IsCamoActive, double* LastRoarBuffTime, float* RoarBuffCooldown, bool* HasMateBoost, double* LastTimeReleasedTeleport, float* TeleportCooldown, float* TeleportPercent, bool* IsCurrentlyChargingTeleport, class APrimalCharacter** LatestQuickteleportTarget, float* LeapCooldown, double* LastLeapTime, float* LeapPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.GetHudData");

	ALionfishLion_Character_BP_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackComboPercent != nullptr)
		*AttackComboPercent = params.AttackComboPercent;
	if (MaxComboFlashingSpeed != nullptr)
		*MaxComboFlashingSpeed = params.MaxComboFlashingSpeed;
	if (LastUncloakTime != nullptr)
		*LastUncloakTime = params.LastUncloakTime;
	if (CloakCooldown != nullptr)
		*CloakCooldown = params.CloakCooldown;
	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;
	if (IsCamoActive != nullptr)
		*IsCamoActive = params.IsCamoActive;
	if (LastRoarBuffTime != nullptr)
		*LastRoarBuffTime = params.LastRoarBuffTime;
	if (RoarBuffCooldown != nullptr)
		*RoarBuffCooldown = params.RoarBuffCooldown;
	if (HasMateBoost != nullptr)
		*HasMateBoost = params.HasMateBoost;
	if (LastTimeReleasedTeleport != nullptr)
		*LastTimeReleasedTeleport = params.LastTimeReleasedTeleport;
	if (TeleportCooldown != nullptr)
		*TeleportCooldown = params.TeleportCooldown;
	if (TeleportPercent != nullptr)
		*TeleportPercent = params.TeleportPercent;
	if (IsCurrentlyChargingTeleport != nullptr)
		*IsCurrentlyChargingTeleport = params.IsCurrentlyChargingTeleport;
	if (LatestQuickteleportTarget != nullptr)
		*LatestQuickteleportTarget = params.LatestQuickteleportTarget;
	if (LeapCooldown != nullptr)
		*LeapCooldown = params.LeapCooldown;
	if (LastLeapTime != nullptr)
		*LastLeapTime = params.LastLeapTime;
	if (LeapPercent != nullptr)
		*LeapPercent = params.LeapPercent;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPlayDying");

	ALionfishLion_Character_BP_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Lerping While Jumping
// ()

void ALionfishLion_Character_BP_C::Is_Lerping_While_Jumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Lerping While Jumping");

	ALionfishLion_Character_BP_C_Is_Lerping_While_Jumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Reset Gravity
// ()

void ALionfishLion_Character_BP_C::Delay_Reset_Gravity()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Reset Gravity");

	ALionfishLion_Character_BP_C_Delay_Reset_Gravity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.LFL Cloak Transition
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::LFL_Cloak_Transition(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.LFL Cloak Transition");

	ALionfishLion_Character_BP_C_LFL_Cloak_Transition_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceivePossessed");

	ALionfishLion_Character_BP_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp Camera During Jump
// ()

void ALionfishLion_Character_BP_C::Lerp_Camera_During_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp Camera During Jump");

	ALionfishLion_Character_BP_C_Lerp_Camera_During_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanTakePassenger
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PassengerSeatIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForcePassenger                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowFlyersAndWaterDinos      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPCanTakePassenger(class APrimalCharacter** Character, int* PassengerSeatIndex, bool* bForcePassenger, bool* bAllowFlyersAndWaterDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanTakePassenger");

	ALionfishLion_Character_BP_C_BPCanTakePassenger_Params params;
	params.Character = Character;
	params.PassengerSeatIndex = PassengerSeatIndex;
	params.bForcePassenger = bForcePassenger;
	params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is asleep
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::is_asleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is asleep");

	ALionfishLion_Character_BP_C_is_asleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanCryo");

	ALionfishLion_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.IsPackLeader
// ()
// Parameters:
// bool                           bIsLeader                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::IsPackLeader(bool* bIsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.IsPackLeader");

	ALionfishLion_Character_BP_C_IsPackLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLeader != nullptr)
		*bIsLeader = params.bIsLeader;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display No Mate Boost Notification
// ()

void ALionfishLion_Character_BP_C::Display_No_Mate_Boost_Notification()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display No Mate Boost Notification");

	ALionfishLion_Character_BP_C_Display_No_Mate_Boost_Notification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevented Interval to Check for Boss Dinos for Cloaking
// ()

void ALionfishLion_Character_BP_C::Prevented_Interval_to_Check_for_Boss_Dinos_for_Cloaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevented Interval to Check for Boss Dinos for Cloaking");

	ALionfishLion_Character_BP_C_Prevented_Interval_to_Check_for_Boss_Dinos_for_Cloaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Near Boss
// ()

void ALionfishLion_Character_BP_C::Is_Near_Boss()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Near Boss");

	ALionfishLion_Character_BP_C_Is_Near_Boss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorEndOverlap");

	ALionfishLion_Character_BP_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorBeginOverlap");

	ALionfishLion_Character_BP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Decrease Camo Stamina
// ()

void ALionfishLion_Character_BP_C::Decrease_Camo_Stamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Decrease Camo Stamina");

	ALionfishLion_Character_BP_C_Decrease_Camo_Stamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can cloak
// ()
// Parameters:
// class AActor*                  InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class APrimalCharacter*        AsPrimalCharacter              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ALionfishLion_Character_BP_C::can_cloak(class AActor* InputPin, class APrimalCharacter** AsPrimalCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can cloak");

	ALionfishLion_Character_BP_C_can_cloak_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPrimalCharacter != nullptr)
		*AsPrimalCharacter = params.AsPrimalCharacter;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Remove self as origin dino for cloaks
// ()
// Parameters:
// class APrimalCharacter*        who_gets_buff                  (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Remove_self_as_origin_dino_for_cloaks(class APrimalCharacter* who_gets_buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Remove self as origin dino for cloaks");

	ALionfishLion_Character_BP_C_Remove_self_as_origin_dino_for_cloaks_Params params;
	params.who_gets_buff = who_gets_buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.add cloak buff with self as origin
// ()
// Parameters:
// class APrimalCharacter*        who_gets_buff                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           for_solo_rider                 (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::add_cloak_buff_with_self_as_origin(class APrimalCharacter* who_gets_buff, bool for_solo_rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.add cloak buff with self as origin");

	ALionfishLion_Character_BP_C_add_cloak_buff_with_self_as_origin_Params params;
	params.who_gets_buff = who_gets_buff;
	params.for_solo_rider = for_solo_rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is solo camo active
// ()

void ALionfishLion_Character_BP_C::OnRep_is_solo_camo_active()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is solo camo active");

	ALionfishLion_Character_BP_C_OnRep_is_solo_camo_active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Show Quick Teleport Indicator
// ()

void ALionfishLion_Character_BP_C::Show_Quick_Teleport_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Show Quick Teleport Indicator");

	ALionfishLion_Character_BP_C_Show_Quick_Teleport_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Check for Holding Down Crouch
// ()

void ALionfishLion_Character_BP_C::Delay_Check_for_Holding_Down_Crouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Check for Holding Down Crouch");

	ALionfishLion_Character_BP_C_Delay_Check_for_Holding_Down_Crouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Initialization To Determine Targeting Team
// ()

void ALionfishLion_Character_BP_C::Short_Time_After_Initialization_To_Determine_Targeting_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Initialization To Determine Targeting Team");

	ALionfishLion_Character_BP_C_Short_Time_After_Initialization_To_Determine_Targeting_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Long Prevent Tamed Sleeping Timer
// ()

void ALionfishLion_Character_BP_C::Long_Prevent_Tamed_Sleeping_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Long Prevent Tamed Sleeping Timer");

	ALionfishLion_Character_BP_C_Long_Prevent_Tamed_Sleeping_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Fish Trap Ready
// ()

void ALionfishLion_Character_BP_C::Has_Fish_Trap_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Fish Trap Ready");

	ALionfishLion_Character_BP_C_Has_Fish_Trap_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn wild inventory
// ()

void ALionfishLion_Character_BP_C::spawn_wild_inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn wild inventory");

	ALionfishLion_Character_BP_C_spawn_wild_inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn tamed inventory
// ()

void ALionfishLion_Character_BP_C::spawn_tamed_inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn tamed inventory");

	ALionfishLion_Character_BP_C_spawn_tamed_inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check To Determine If Rider Is Still Valid For Charging Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Timeout_Check_To_Determine_If_Rider_Is_Still_Valid_For_Charging_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check To Determine If Rider Is Still Valid For Charging Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Timeout_Check_To_Determine_If_Rider_Is_Still_Valid_For_Charging_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check For Still Holding Spacebar
// ()

void ALionfishLion_Character_BP_C::Timeout_Check_For_Still_Holding_Spacebar()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check For Still Holding Spacebar");

	ALionfishLion_Character_BP_C_Timeout_Check_For_Still_Holding_Spacebar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay And Wake Up
// ()

void ALionfishLion_Character_BP_C::Delay_And_Wake_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay And Wake Up");

	ALionfishLion_Character_BP_C_Delay_And_Wake_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay and fall asleep
// ()

void ALionfishLion_Character_BP_C::delay_and_fall_asleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay and fall asleep");

	ALionfishLion_Character_BP_C_delay_and_fall_asleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Teleport Attack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::Can_Teleport_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Teleport Attack");

	ALionfishLion_Character_BP_C_Can_Teleport_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn flame location on the ground
// ()
// Parameters:
// struct FVector                 Start_Point                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End_Point                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::spawn_flame_location_on_the_ground(const struct FVector& Start_Point, const struct FVector& End_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn flame location on the ground");

	ALionfishLion_Character_BP_C_spawn_flame_location_on_the_ground_Params params;
	params.Start_Point = Start_Point;
	params.End_Point = End_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALionfishLion_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnRefreshColorization");

	ALionfishLion_Character_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset animbp anims to normal
// ()

void ALionfishLion_Character_BP_C::Reset_animbp_anims_to_normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset animbp anims to normal");

	ALionfishLion_Character_BP_C_Reset_animbp_anims_to_normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict wild teleport attacking
// ()

void ALionfishLion_Character_BP_C::restrict_wild_teleport_attacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict wild teleport attacking");

	ALionfishLion_Character_BP_C_restrict_wild_teleport_attacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.shortly after fleeing from taming
// ()

void ALionfishLion_Character_BP_C::shortly_after_fleeing_from_taming()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.shortly after fleeing from taming");

	ALionfishLion_Character_BP_C_shortly_after_fleeing_from_taming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.show particle over optimal teleport target
// ()

void ALionfishLion_Character_BP_C::show_particle_over_optimal_teleport_target()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.show particle over optimal teleport target");

	ALionfishLion_Character_BP_C_show_particle_over_optimal_teleport_target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.toggle max combo vfx on limbs
// ()

void ALionfishLion_Character_BP_C::toggle_max_combo_vfx_on_limbs()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.toggle max combo vfx on limbs");

	ALionfishLion_Character_BP_C_toggle_max_combo_vfx_on_limbs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Max Combo Kill Fx
// ()

void ALionfishLion_Character_BP_C::Restrict_Max_Combo_Kill_Fx()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Max Combo Kill Fx");

	ALionfishLion_Character_BP_C_Restrict_Max_Combo_Kill_Fx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict bite fx
// ()

void ALionfishLion_Character_BP_C::restrict_bite_fx()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict bite fx");

	ALionfishLion_Character_BP_C_restrict_bite_fx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Mouth Slash
// ()

void ALionfishLion_Character_BP_C::Prep_For_Mouth_Slash()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Mouth Slash");

	ALionfishLion_Character_BP_C_Prep_For_Mouth_Slash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Left Paw Slash
// ()

void ALionfishLion_Character_BP_C::Prep_For_Left_Paw_Slash()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Left Paw Slash");

	ALionfishLion_Character_BP_C_Prep_For_Left_Paw_Slash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prep for right paw slash
// ()

void ALionfishLion_Character_BP_C::prep_for_right_paw_slash()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prep for right paw slash");

	ALionfishLion_Character_BP_C_prep_for_right_paw_slash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Landing From Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Is_Landing_From_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Landing From Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Is_Landing_From_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventFallDamage
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)
// float*                         FallDamageAmount               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventFallDamage");

	ALionfishLion_Character_BP_C_BPPreventFallDamage_Params params;
	params.FallDamageAmount = FallDamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPShouldForceFlee");

	ALionfishLion_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.flee after feeding
// ()

void ALionfishLion_Character_BP_C::flee_after_feeding()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.flee after feeding");

	ALionfishLion_Character_BP_C_flee_after_feeding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.feed
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Fish_Weight                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           cheat_debug_bypass             (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::feed(class APlayerController* PC, float Fish_Weight, bool cheat_debug_bypass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.feed");

	ALionfishLion_Character_BP_C_feed_Params params;
	params.PC = PC;
	params.Fish_Weight = Fish_Weight;
	params.cheat_debug_bypass = cheat_debug_bypass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bite slash vfx
// ()

void ALionfishLion_Character_BP_C::bite_slash_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bite slash vfx");

	ALionfishLion_Character_BP_C_bite_slash_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.right paw slash vfx
// ()

void ALionfishLion_Character_BP_C::right_paw_slash_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.right paw slash vfx");

	ALionfishLion_Character_BP_C_right_paw_slash_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.left paw slash vfx
// ()

void ALionfishLion_Character_BP_C::left_paw_slash_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.left paw slash vfx");

	ALionfishLion_Character_BP_C_left_paw_slash_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is able to be tamed
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           can_tame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Text                           (Parm, OutParm, ZeroConstructor)

void ALionfishLion_Character_BP_C::is_able_to_be_tamed(class APlayerController* PC, bool* can_tame, class FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is able to be tamed");

	ALionfishLion_Character_BP_C_is_able_to_be_tamed_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (can_tame != nullptr)
		*can_tame = params.can_tame;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideHurtAnim
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageHitNormal           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ALionfishLion_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideHurtAnim");

	ALionfishLion_Character_BP_C_BPOverrideHurtAnim_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.bIsPointDamage = bIsPointDamage;
	params.PointDamageLocation = PointDamageLocation;
	params.PointDamageHitNormal = PointDamageHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Print String Manual
// ()
// Parameters:
// class FString                  In_String                      (Parm, ZeroConstructor)

void ALionfishLion_Character_BP_C::Print_String_Manual(const class FString& In_String)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Print String Manual");

	ALionfishLion_Character_BP_C_Print_String_Manual_Params params;
	params.In_String = In_String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Stop Release Big Spacebar Leap Anims
// ()

void ALionfishLion_Character_BP_C::Stop_Release_Big_Spacebar_Leap_Anims()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Stop Release Big Spacebar Leap Anims");

	ALionfishLion_Character_BP_C_Stop_Release_Big_Spacebar_Leap_Anims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop anim montage if playing
// ()
// Parameters:
// class UAnimMontage*            InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::stop_anim_montage_if_playing(class UAnimMontage* InputPin, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop anim montage if playing");

	ALionfishLion_Character_BP_C_stop_anim_montage_if_playing_Params params;
	params.InputPin = InputPin;
	params.BlendOut = BlendOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get aerial rotation while pouncing
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FRotator                mesh_rot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

struct FRotator ALionfishLion_Character_BP_C::get_aerial_rotation_while_pouncing(struct FRotator* mesh_rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get aerial rotation while pouncing");

	ALionfishLion_Character_BP_C_get_aerial_rotation_while_pouncing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mesh_rot != nullptr)
		*mesh_rot = params.mesh_rot;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set up dynamic mats
// ()

void ALionfishLion_Character_BP_C::set_up_dynamic_mats()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set up dynamic mats");

	ALionfishLion_Character_BP_C_set_up_dynamic_mats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Found Multiple Targets
// ()

void ALionfishLion_Character_BP_C::Has_Found_Multiple_Targets()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Found Multiple Targets");

	ALionfishLion_Character_BP_C_Has_Found_Multiple_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timer Check Teleport Targets
// ()

void ALionfishLion_Character_BP_C::Timer_Check_Teleport_Targets()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timer Check Teleport Targets");

	ALionfishLion_Character_BP_C_Timer_Check_Teleport_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.save control rot
// ()

void ALionfishLion_Character_BP_C::save_control_rot()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.save control rot");

	ALionfishLion_Character_BP_C_save_control_rot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.retrieve control rot
// ()

void ALionfishLion_Character_BP_C::retrieve_control_rot()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.retrieve control rot");

	ALionfishLion_Character_BP_C_retrieve_control_rot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Tele
// ()

void ALionfishLion_Character_BP_C::Shortly_After_Tele()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Tele");

	ALionfishLion_Character_BP_C_Shortly_After_Tele_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Was Seen Requests
// ()

void ALionfishLion_Character_BP_C::Restrict_Was_Seen_Requests()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Was Seen Requests");

	ALionfishLion_Character_BP_C_Restrict_Was_Seen_Requests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.someone has line of sight to lion
// (NetReliable, NetRequest, Exec, Event, Static, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShooterPlayerController* Player_Controller              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::STATIC_someone_has_line_of_sight_to_lion(class AShooterPlayerController* Player_Controller, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.someone has line of sight to lion");

	ALionfishLion_Character_BP_C_someone_has_line_of_sight_to_lion_Params params;
	params.Player_Controller = Player_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check if Viewed by Players
// (NetMulticast, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)

void ALionfishLion_Character_BP_C::Check_if_Viewed_by_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check if Viewed by Players");

	ALionfishLion_Character_BP_C_Check_if_Viewed_by_Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Do Attack Cloak
// ()

void ALionfishLion_Character_BP_C::Do_Attack_Cloak()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Do Attack Cloak");

	ALionfishLion_Character_BP_C_Do_Attack_Cloak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Charge Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Server_Request_Charge_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Charge Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Server_Request_Charge_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request End Charge Big Spacebar Leap
// ()
// Parameters:
// struct FVector                 held_direction_inputs          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            A2                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            InputPin2                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Server_Request_End_Charge_Big_Spacebar_Leap(const struct FVector& held_direction_inputs, class UObject* InputPin, int A2, int InputPin2)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request End Charge Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Server_Request_End_Charge_Big_Spacebar_Leap_Params params;
	params.held_direction_inputs = held_direction_inputs;
	params.InputPin = InputPin;
	params.A2 = A2;
	params.InputPin2 = InputPin2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Jump
// ()

void ALionfishLion_Character_BP_C::Server_Request_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Jump");

	ALionfishLion_Character_BP_C_Server_Request_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Anim Start Jump
// ()

void ALionfishLion_Character_BP_C::Server_Request_Anim_Start_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Anim Start Jump");

	ALionfishLion_Character_BP_C_Server_Request_Anim_Start_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Requiest Crit Bite
// ()

void ALionfishLion_Character_BP_C::Server_Requiest_Crit_Bite()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Requiest Crit Bite");

	ALionfishLion_Character_BP_C_Server_Requiest_Crit_Bite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Hold Teleport
// ()
// Parameters:
// struct FVector                 view_direction                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           quick_tap_teleport             (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Server_Request_Hold_Teleport(const struct FVector& view_direction, class UObject* Target, bool quick_tap_teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Hold Teleport");

	ALionfishLion_Character_BP_C_Server_Request_Hold_Teleport_Params params;
	params.view_direction = view_direction;
	params.Target = Target;
	params.quick_tap_teleport = quick_tap_teleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintGetAttackWeight
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inputWeight                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintGetAttackWeight");

	ALionfishLion_Character_BP_C_BlueprintGetAttackWeight_Params params;
	params.AttackIndex = AttackIndex;
	params.inputWeight = inputWeight;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add solo cloak buffs
// ()

void ALionfishLion_Character_BP_C::Add_solo_cloak_buffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add solo cloak buffs");

	ALionfishLion_Character_BP_C_Add_solo_cloak_buffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.consolidated can attack
// ()
// Parameters:
// int                            InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::consolidated_can_attack(int InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.consolidated can attack");

	ALionfishLion_Character_BP_C_consolidated_can_attack_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.
// ()
// Parameters:
// float                          _1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          _2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::(float _1, float _2, float* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.");

	ALionfishLion_Character_BP_C__Params params;
	params._1 = _1;
	params._2 = _2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Appropriate Extra Distance to Land In Front the Target from Current Position
// ()
// Parameters:
// struct FVector                 current_location               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALionfishLion_Character_BP_C::Get_Appropriate_Extra_Distance_to_Land_In_Front_the_Target_from_Current_Position(const struct FVector& current_location, class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Appropriate Extra Distance to Land In Front the Target from Current Position");

	ALionfishLion_Character_BP_C_Get_Appropriate_Extra_Distance_to_Land_In_Front_the_Target_from_Current_Position_Params params;
	params.current_location = current_location;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport End Location Blocked
// (NetReliable, Exec, NetResponse, NetMulticast, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::Is_Teleport_End_Location_Blocked(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport End Location Blocked");

	ALionfishLion_Character_BP_C_Is_Teleport_End_Location_Blocked_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location In Front Of the Enemy
// ()
// Parameters:
// struct FVector                 current_position               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 final_location                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Get_Desired_Teleport_Final_Location_In_Front_Of_the_Enemy(const struct FVector& current_position, class AActor* Enemy, struct FVector* final_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location In Front Of the Enemy");

	ALionfishLion_Character_BP_C_Get_Desired_Teleport_Final_Location_In_Front_Of_the_Enemy_Params params;
	params.current_position = current_position;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (final_location != nullptr)
		*final_location = params.final_location;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check If The LFL Can Physically Fit To The Teleport Target
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           double_checked_and_all_clear   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Check_If_The_LFL_Can_Physically_Fit_To_The_Teleport_Target(const struct FVector& Start, const struct FVector& End, bool* double_checked_and_all_clear)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check If The LFL Can Physically Fit To The Teleport Target");

	ALionfishLion_Character_BP_C_Check_If_The_LFL_Can_Physically_Fit_To_The_Teleport_Target_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (double_checked_and_all_clear != nullptr)
		*double_checked_and_all_clear = params.double_checked_and_all_clear;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.disable tele targeting vfx
// ()

void ALionfishLion_Character_BP_C::disable_tele_targeting_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.disable tele targeting vfx");

	ALionfishLion_Character_BP_C_disable_tele_targeting_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is sleeping state
// ()

void ALionfishLion_Character_BP_C::OnRep_is_sleeping_state()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is sleeping state");

	ALionfishLion_Character_BP_C_OnRep_is_sleeping_state_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn cloaked footstep
// (NetReliable, Event, NetResponse, Static, NetMulticast, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::STATIC_spawn_cloaked_footstep(class UParticleSystem* EmitterTemplate, const struct FRotator& Rotation, const struct FVector& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn cloaked footstep");

	ALionfishLion_Character_BP_C_spawn_cloaked_footstep_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Rotation = Rotation;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
// ()
// Parameters:
// bool                           overrideTamingProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");

	ALionfishLion_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTamingProgressBarIfActive != nullptr)
		*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnTamedProcessOrder");

	ALionfishLion_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.cooldown after action before being able to sleep
// ()

void ALionfishLion_Character_BP_C::cooldown_after_action_before_being_able_to_sleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.cooldown after action before being able to sleep");

	ALionfishLion_Character_BP_C_cooldown_after_action_before_being_able_to_sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTamedOrderReceived
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTamedOrderReceived");

	ALionfishLion_Character_BP_C_BP_OnTamedOrderReceived_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Tamed Sleeping Timer
// ()

void ALionfishLion_Character_BP_C::Prevent_Tamed_Sleeping_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Tamed Sleeping Timer");

	ALionfishLion_Character_BP_C_Prevent_Tamed_Sleeping_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ALionfishLion_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetMultiUseEntries");

	ALionfishLion_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multiuse logic
// (NetReliable, NetRequest, NetResponse, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FMultiUseEntry>  local_multiuse                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  return_multiuse                (Parm, OutParm, ZeroConstructor)

void ALionfishLion_Character_BP_C::multiuse_logic(class APlayerController* PC, TArray<struct FMultiUseEntry>* local_multiuse, TArray<struct FMultiUseEntry>* return_multiuse)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multiuse logic");

	ALionfishLion_Character_BP_C_multiuse_logic_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (local_multiuse != nullptr)
		*local_multiuse = params.local_multiuse;
	if (return_multiuse != nullptr)
		*return_multiuse = params.return_multiuse;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPClientDoMultiUse");

	ALionfishLion_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Natural Armor Defense Amount Calculation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::Natural_Armor_Defense_Amount_Calculation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Natural Armor Defense Amount Calculation");

	ALionfishLion_Character_BP_C_Natural_Armor_Defense_Amount_Calculation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set up Natural Armor value based on level
// ()

void ALionfishLion_Character_BP_C::Set_up_Natural_Armor_value_based_on_level()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set up Natural Armor value based on level");

	ALionfishLion_Character_BP_C_Set_up_Natural_Armor_value_based_on_level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.attempt to set up natural armor
// ()

void ALionfishLion_Character_BP_C::attempt_to_set_up_natural_armor()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.attempt to set up natural armor");

	ALionfishLion_Character_BP_C_attempt_to_set_up_natural_armor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport stun duration calculation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::teleport_stun_duration_calculation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport stun duration calculation");

	ALionfishLion_Character_BP_C_teleport_stun_duration_calculation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold for Determining Held Bite
// ()

void ALionfishLion_Character_BP_C::Time_Threshold_for_Determining_Held_Bite()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold for Determining Held Bite");

	ALionfishLion_Character_BP_C_Time_Threshold_for_Determining_Held_Bite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Ending Teleport
// ()

void ALionfishLion_Character_BP_C::Short_Time_After_Ending_Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Ending Teleport");

	ALionfishLion_Character_BP_C_Short_Time_After_Ending_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tele attack object types
// ()
// Parameters:
// TArray<TEnumAsByte<EObjectTypeQuery>> Array                          (Parm, OutParm, ZeroConstructor)

void ALionfishLion_Character_BP_C::tele_attack_object_types(TArray<TEnumAsByte<EObjectTypeQuery>>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tele attack object types");

	ALionfishLion_Character_BP_C_tele_attack_object_types_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.straight line teleport charge move detection sphere
// ()

void ALionfishLion_Character_BP_C::straight_line_teleport_charge_move_detection_sphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.straight line teleport charge move detection sphere");

	ALionfishLion_Character_BP_C_straight_line_teleport_charge_move_detection_sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.detect targets in a straight line over time
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)

void ALionfishLion_Character_BP_C::detect_targets_in_a_straight_line_over_time()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.detect targets in a straight line over time");

	ALionfishLion_Character_BP_C_detect_targets_in_a_straight_line_over_time_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Identify Best Aimed Target For Quickteleport - Clientside
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APrimalCharacter*        Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::STATIC_Identify_Best_Aimed_Target_For_Quickteleport___Clientside(class APrimalCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Identify Best Aimed Target For Quickteleport - Clientside");

	ALionfishLion_Character_BP_C_Identify_Best_Aimed_Target_For_Quickteleport___Clientside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set dino and rider hidden
// ()
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dont_reverse_from_end          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::set_dino_and_rider_hidden(bool Hidden, float PlayRate, bool dont_reverse_from_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set dino and rider hidden");

	ALionfishLion_Character_BP_C_set_dino_and_rider_hidden_Params params;
	params.Hidden = Hidden;
	params.PlayRate = PlayRate;
	params.dont_reverse_from_end = dont_reverse_from_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Teleport Target 
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_hud_elem_check              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 teleport_trace_sphere_location (Parm, ZeroConstructor, IsPlainOldData)
// bool                           can_target                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Valid_Teleport_Target_(class APrimalCharacter* Target, bool is_hud_elem_check, const struct FVector& teleport_trace_sphere_location, bool* can_target)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Teleport Target ");

	ALionfishLion_Character_BP_C_Is_Valid_Teleport_Target__Params params;
	params.Target = Target;
	params.is_hud_elem_check = is_hud_elem_check;
	params.teleport_trace_sphere_location = teleport_trace_sphere_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (can_target != nullptr)
		*can_target = params.can_target;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set final location and rotation after teleport
// ()
// Parameters:
// struct FVector                 start_loc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End_Loc                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           turn_around                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::set_final_location_and_rotation_after_teleport(const struct FVector& start_loc, const struct FVector& End_Loc, bool turn_around)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set final location and rotation after teleport");

	ALionfishLion_Character_BP_C_set_final_location_and_rotation_after_teleport_Params params;
	params.start_loc = start_loc;
	params.End_Loc = End_Loc;
	params.turn_around = turn_around;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.damage teleport target
// (NetReliable, Exec, Native, Event, Static, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)

void ALionfishLion_Character_BP_C::STATIC_damage_teleport_target()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.damage teleport target");

	ALionfishLion_Character_BP_C_damage_teleport_target_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prepare LFL for teleporting to target
// ()
// Parameters:
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::prepare_LFL_for_teleporting_to_target(const struct FVector& End, const struct FVector& Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prepare LFL for teleporting to target");

	ALionfishLion_Character_BP_C_prepare_LFL_for_teleporting_to_target_Params params;
	params.End = End;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is line of sight to target blocked
// (NetReliable, NetRequest, NetResponse, NetMulticast, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 from_specific_location         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           simple_check                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::is_line_of_sight_to_target_blocked(class AActor* Target, bool Debug, const struct FVector& from_specific_location, bool simple_check, bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is line of sight to target blocked");

	ALionfishLion_Character_BP_C_is_line_of_sight_to_target_blocked_Params params;
	params.Target = Target;
	params.Debug = Debug;
	params.from_specific_location = from_specific_location;
	params.simple_check = simple_check;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get rotation to face opponent
// ()
// Parameters:
// struct FVector                 current_location               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ALionfishLion_Character_BP_C::get_rotation_to_face_opponent(const struct FVector& current_location, class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get rotation to face opponent");

	ALionfishLion_Character_BP_C_get_rotation_to_face_opponent_Params params;
	params.current_location = current_location;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location Behind The Enemy
// ()
// Parameters:
// struct FVector                 current_position               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 final_location                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Get_Desired_Teleport_Final_Location_Behind_The_Enemy(const struct FVector& current_position, class AActor* Enemy, struct FVector* final_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location Behind The Enemy");

	ALionfishLion_Character_BP_C_Get_Desired_Teleport_Final_Location_Behind_The_Enemy_Params params;
	params.current_position = current_position;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (final_location != nullptr)
		*final_location = params.final_location;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get appropriate extra distance to land behind the target from current position
// ()
// Parameters:
// struct FVector                 current_location               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALionfishLion_Character_BP_C::get_appropriate_extra_distance_to_land_behind_the_target_from_current_position(const struct FVector& current_location, class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get appropriate extra distance to land behind the target from current position");

	ALionfishLion_Character_BP_C_get_appropriate_extra_distance_to_land_behind_the_target_from_current_position_Params params;
	params.current_location = current_location;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.request release charge teleport
// ()
// Parameters:
// bool                           is_quick_tap_teleport          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::request_release_charge_teleport(bool is_quick_tap_teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.request release charge teleport");

	ALionfishLion_Character_BP_C_request_release_charge_teleport_Params params;
	params.is_quick_tap_teleport = is_quick_tap_teleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Sort Selected Teleport Targets By Distance From Center
// ()

void ALionfishLion_Character_BP_C::Sort_Selected_Teleport_Targets_By_Distance_From_Center()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Sort Selected Teleport Targets By Distance From Center");

	ALionfishLion_Character_BP_C_Sort_Selected_Teleport_Targets_By_Distance_From_Center_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Select Next Teleport Target While Charging
// ()

void ALionfishLion_Character_BP_C::Select_Next_Teleport_Target_While_Charging()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Select Next Teleport Target While Charging");

	ALionfishLion_Character_BP_C_Select_Next_Teleport_Target_While_Charging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get teleport trace sphere location
// ()
// Parameters:
// struct FVector                 view_direction                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALionfishLion_Character_BP_C::get_teleport_trace_sphere_location(const struct FVector& view_direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get teleport trace sphere location");

	ALionfishLion_Character_BP_C_get_teleport_trace_sphere_location_Params params;
	params.view_direction = view_direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Teleport
// ()

void ALionfishLion_Character_BP_C::Is_Charging_Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Teleport");

	ALionfishLion_Character_BP_C_Is_Charging_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Teleport Stop
// (NetReliable, NetRequest, Exec, Native, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UObject*                 hit_target                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Teleport_Stop(class UObject* hit_target)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Teleport Stop");

	ALionfishLion_Character_BP_C_Teleport_Stop_Params params;
	params.hit_target = hit_target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Teleport
// ()
// Parameters:
// float                          Teleport_Strength_Percentage   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_quick_tap_teleport          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Start_Teleport(float Teleport_Strength_Percentage, bool is_quick_tap_teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Teleport");

	ALionfishLion_Character_BP_C_Start_Teleport_Params params;
	params.Teleport_Strength_Percentage = Teleport_Strength_Percentage;
	params.is_quick_tap_teleport = is_quick_tap_teleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Teleport Character Octree Overlap Radius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::Get_Teleport_Character_Octree_Overlap_Radius()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Teleport Character Octree Overlap Radius");

	ALionfishLion_Character_BP_C_Get_Teleport_Character_Octree_Overlap_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Teleport
// ()
// Parameters:
// bool                           Is_Mid_Teleport                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Mid_Teleport(bool* Is_Mid_Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Teleport");

	ALionfishLion_Character_BP_C_Is_Mid_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Mid_Teleport != nullptr)
		*Is_Mid_Teleport = params.Is_Mid_Teleport;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport Cooldown Active
// ()

void ALionfishLion_Character_BP_C::Is_Teleport_Cooldown_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport Cooldown Active");

	ALionfishLion_Character_BP_C_Is_Teleport_Cooldown_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Teleport
// (NetReliable, NetRequest, Native, Event, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ALionfishLion_Character_BP_C::Request_Release_Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Teleport");

	ALionfishLion_Character_BP_C_Request_Release_Teleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Charge Teleport
// (Exec, NetResponse, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ALionfishLion_Character_BP_C::Time_Threshold_For_Determining_Charge_Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Charge Teleport");

	ALionfishLion_Character_BP_C_Time_Threshold_For_Determining_Charge_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Jump Or Big Spacebar Leap
// (NetRequest, Exec, NetResponse, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ALionfishLion_Character_BP_C::Time_Threshold_For_Determining_Jump_Or_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Jump Or Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Time_Threshold_For_Determining_Jump_Or_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStopJump
// (NetReliable, NetRequest, Native, NetResponse, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPOnStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStopJump");

	ALionfishLion_Character_BP_C_BPOnStopJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.sync movement inputs
// ()

void ALionfishLion_Character_BP_C::sync_movement_inputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.sync movement inputs");

	ALionfishLion_Character_BP_C_sync_movement_inputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.duration to hold on to current combo count
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::duration_to_hold_on_to_current_combo_count()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.duration to hold on to current combo count");

	ALionfishLion_Character_BP_C_duration_to_hold_on_to_current_combo_count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove character from max combo attacked characters array
// ()
// Parameters:
// class AActor*                  InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::remove_character_from_max_combo_attacked_characters_array(class AActor* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove character from max combo attacked characters array");

	ALionfishLion_Character_BP_C_remove_character_from_max_combo_attacked_characters_array_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.clear recently max combo attacked characters array
// ()

void ALionfishLion_Character_BP_C::clear_recently_max_combo_attacked_characters_array()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.clear recently max combo attacked characters array");

	ALionfishLion_Character_BP_C_clear_recently_max_combo_attacked_characters_array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPKilledSomethingEvent
// ()
// Parameters:
// class APrimalCharacter**       killedTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter** killedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPKilledSomethingEvent");

	ALionfishLion_Character_BP_C_BPKilledSomethingEvent_Params params;
	params.killedTarget = killedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PerformanceThrottledTick
// ()

void ALionfishLion_Character_BP_C::PerformanceThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PerformanceThrottledTick");

	ALionfishLion_Character_BP_C_PerformanceThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Blend Fov Back To Normal After Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Blend_Fov_Back_To_Normal_After_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Blend Fov Back To Normal After Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Blend_Fov_Back_To_Normal_After_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close Enough To Hit Big Spacebar Leap Target
// (NetRequest, Native, Static, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           can_hit_target                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::STATIC_Is_Close_Enough_To_Hit_Big_Spacebar_Leap_Target(bool* can_hit_target)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close Enough To Hit Big Spacebar Leap Target");

	ALionfishLion_Character_BP_C_Is_Close_Enough_To_Hit_Big_Spacebar_Leap_Target_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (can_hit_target != nullptr)
		*can_hit_target = params.can_hit_target;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Frozen From Hitstop
// ()

void ALionfishLion_Character_BP_C::Is_Frozen_From_Hitstop()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Frozen From Hitstop");

	ALionfishLion_Character_BP_C_Is_Frozen_From_Hitstop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Land
// ()

void ALionfishLion_Character_BP_C::On_Big_Spacebar_Leap_Land()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Land");

	ALionfishLion_Character_BP_C_On_Big_Spacebar_Leap_Land_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Blending FOV Back To Normal After Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Is_Blending_FOV_Back_To_Normal_After_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Blending FOV Back To Normal After Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Is_Blending_FOV_Back_To_Normal_After_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_PreventMovementMode");

	ALionfishLion_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Hit Target
// ()
// Parameters:
// class APrimalCharacter*        InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::On_Big_Spacebar_Leap_Hit_Target(class APrimalCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Hit Target");

	ALionfishLion_Character_BP_C_On_Big_Spacebar_Leap_Hit_Target_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Turnaround Stop on Other Side Of Big Spacebar Leap Target
// ()

void ALionfishLion_Character_BP_C::Request_Turnaround_Stop_on_Other_Side_Of_Big_Spacebar_Leap_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Turnaround Stop on Other Side Of Big Spacebar Leap Target");

	ALionfishLion_Character_BP_C_Request_Turnaround_Stop_on_Other_Side_Of_Big_Spacebar_Leap_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Ground and Halt Anim
// (NetRequest, Exec, Event, NetResponse, Static, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           retry                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::STATIC_Check_for_Ground_and_Halt_Anim(bool* retry)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Ground and Halt Anim");

	ALionfishLion_Character_BP_C_Check_for_Ground_and_Halt_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retry != nullptr)
		*retry = params.retry;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Extra Big Spacebar Leap Ground Checks
// ()

void ALionfishLion_Character_BP_C::Extra_Big_Spacebar_Leap_Ground_Checks()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Extra Big Spacebar Leap Ground Checks");

	ALionfishLion_Character_BP_C_Extra_Big_Spacebar_Leap_Ground_Checks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Repeated Big Spacebar Leap Anim
// ()

void ALionfishLion_Character_BP_C::Prevent_Repeated_Big_Spacebar_Leap_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Repeated Big Spacebar Leap Anim");

	ALionfishLion_Character_BP_C_Prevent_Repeated_Big_Spacebar_Leap_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Big Spacebar Leap
// ()
// Parameters:
// bool                           Is_Mid_Big_Spacebar_Leap       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Mid_Big_Spacebar_Leap(bool* Is_Mid_Big_Spacebar_Leap)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Is_Mid_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Mid_Big_Spacebar_Leap != nullptr)
		*Is_Mid_Big_Spacebar_Leap = params.Is_Mid_Big_Spacebar_Leap;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp time to move to other side of the target
// (Exec, Event, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ALionfishLion_Character_BP_C::lerp_time_to_move_to_other_side_of_the_target()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp time to move to other side of the target");

	ALionfishLion_Character_BP_C_lerp_time_to_move_to_other_side_of_the_target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Finisher Buildup FOV Return To Normal
// ()

void ALionfishLion_Character_BP_C::Post_Finisher_Buildup_FOV_Return_To_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Finisher Buildup FOV Return To Normal");

	ALionfishLion_Character_BP_C_Post_Finisher_Buildup_FOV_Return_To_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Playing FOVIncrease On Finisher Buildup
// ()

void ALionfishLion_Character_BP_C::Is_Playing_FOVIncrease_On_Finisher_Buildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Playing FOVIncrease On Finisher Buildup");

	ALionfishLion_Character_BP_C_Is_Playing_FOVIncrease_On_Finisher_Buildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Short Time Before Swapping Between Big Spacebar Leap Anticipation Poses
// ()

void ALionfishLion_Character_BP_C::Allow_Short_Time_Before_Swapping_Between_Big_Spacebar_Leap_Anticipation_Poses()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Short Time Before Swapping Between Big Spacebar Leap Anticipation Poses");

	ALionfishLion_Character_BP_C_Allow_Short_Time_Before_Swapping_Between_Big_Spacebar_Leap_Anticipation_Poses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveTick");

	ALionfishLion_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tick events
// (NetRequest, Exec, Native, Event, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::tick_events(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tick events");

	ALionfishLion_Character_BP_C_tick_events_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Force Initial Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Force_Initial_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Force Initial Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Force_Initial_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.play sleep during day anim
// ()

void ALionfishLion_Character_BP_C::play_sleep_during_day_anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.play sleep during day anim");

	ALionfishLion_Character_BP_C_play_sleep_during_day_anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Should Restrict Movement
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::Should_Restrict_Movement()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Should Restrict Movement");

	ALionfishLion_Character_BP_C_Should_Restrict_Movement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideCameraViewTarget
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

void ALionfishLion_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideCameraViewTarget");

	ALionfishLion_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (Exec, Native, NetResponse, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ALionfishLion_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStartJump");

	ALionfishLion_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Right Swipe Attack Anim Priorities
// (NetRequest, Exec, Native, NetResponse, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            Attack_Index                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Update_Right_Swipe_Attack_Anim_Priorities(int Attack_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Right Swipe Attack Anim Priorities");

	ALionfishLion_Character_BP_C_Update_Right_Swipe_Attack_Anim_Priorities_Params params;
	params.Attack_Index = Attack_Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Bite Attack Anim Priorities
// (NetReliable, Exec, Event, NetResponse, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            Attack_Index                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Update_Bite_Attack_Anim_Priorities(int Attack_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Bite Attack Anim Priorities");

	ALionfishLion_Character_BP_C_Update_Bite_Attack_Anim_Priorities_Params params;
	params.Attack_Index = Attack_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Big Spacebar Leap Target
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_hud_elem_check              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           can_target                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Valid_Big_Spacebar_Leap_Target(class APrimalCharacter* Target, bool is_hud_elem_check, bool* can_target)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Big Spacebar Leap Target");

	ALionfishLion_Character_BP_C_Is_Valid_Big_Spacebar_Leap_Target_Params params;
	params.Target = Target;
	params.is_hud_elem_check = is_hud_elem_check;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (can_target != nullptr)
		*can_target = params.can_target;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.RidingTick
// (NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::STATIC_RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.RidingTick");

	ALionfishLion_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPModifyDesiredRotation");

	ALionfishLion_Character_BP_C_BPModifyDesiredRotation_Params params;
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


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Big Spacebar Leap Character Octree Overlap Radius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::Get_Big_Spacebar_Leap_Character_Octree_Overlap_Radius()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Big Spacebar Leap Character Octree Overlap Radius");

	ALionfishLion_Character_BP_C_Get_Big_Spacebar_Leap_Character_Octree_Overlap_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairLocation
// ()
// Parameters:
// float*                         CanvasClipX                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CanvasClipY                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPGetCrosshairLocation(float* CanvasClipX, float* CanvasClipY, float* OutX, float* OutY)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairLocation");

	ALionfishLion_Character_BP_C_BPGetCrosshairLocation_Params params;
	params.CanvasClipX = CanvasClipX;
	params.CanvasClipY = CanvasClipY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutX != nullptr)
		*OutX = params.OutX;
	if (OutY != nullptr)
		*OutY = params.OutY;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairColor
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ALionfishLion_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairColor");

	ALionfishLion_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering Or Exiting Roar Movement Restriction
// ()

void ALionfishLion_Character_BP_C::Entering_Or_Exiting_Roar_Movement_Restriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering Or Exiting Roar Movement Restriction");

	ALionfishLion_Character_BP_C_Entering_Or_Exiting_Roar_Movement_Restriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering or Exiting Camo Movement Restriction
// ()

void ALionfishLion_Character_BP_C::Entering_or_Exiting_Camo_Movement_Restriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering or Exiting Camo Movement Restriction");

	ALionfishLion_Character_BP_C_Entering_or_Exiting_Camo_Movement_Restriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Big Spacebar Leap Anim at First
// ()

void ALionfishLion_Character_BP_C::Prevent_Big_Spacebar_Leap_Anim_at_First()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Big Spacebar Leap Anim at First");

	ALionfishLion_Character_BP_C_Prevent_Big_Spacebar_Leap_Anim_at_First_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Gravity Timeout
// ()

void ALionfishLion_Character_BP_C::Low_Gravity_Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Gravity Timeout");

	ALionfishLion_Character_BP_C_Low_Gravity_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Big Spacebar Leap Landing Reduced Friction
// ()

void ALionfishLion_Character_BP_C::Post_Big_Spacebar_Leap_Landing_Reduced_Friction()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Big Spacebar Leap Landing Reduced Friction");

	ALionfishLion_Character_BP_C_Post_Big_Spacebar_Leap_Landing_Reduced_Friction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Big Spacebar Leap Friction
// ()

void ALionfishLion_Character_BP_C::Low_Big_Spacebar_Leap_Friction()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Big Spacebar Leap Friction");

	ALionfishLion_Character_BP_C_Low_Big_Spacebar_Leap_Friction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnMovementModeChangedNotify");

	ALionfishLion_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerNonDedicated
// ()

void ALionfishLion_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerNonDedicated");

	ALionfishLion_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Interpolate Mesh
// ()

void ALionfishLion_Character_BP_C::Interpolate_Mesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Interpolate Mesh");

	ALionfishLion_Character_BP_C_Interpolate_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hard set rotation but interp mesh location
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::hard_set_rotation_but_interp_mesh_location(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hard set rotation but interp mesh location");

	ALionfishLion_Character_BP_C_hard_set_rotation_but_interp_mesh_location_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Rotation and Interp Mesh
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Set_Rotation_and_Interp_Mesh(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Rotation and Interp Mesh");

	ALionfishLion_Character_BP_C_Set_Rotation_and_Interp_Mesh_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update transforms
// ()

void ALionfishLion_Character_BP_C::update_transforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update transforms");

	ALionfishLion_Character_BP_C_update_transforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update anims
// ()
// Parameters:
// bool                           ensureAnimsPlaying             (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::update_anims(bool ensureAnimsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update anims");

	ALionfishLion_Character_BP_C_update_anims_Params params;
	params.ensureAnimsPlaying = ensureAnimsPlaying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close To Ground
// (NetRequest, Event, NetResponse, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          CheckDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Close_To_Ground(float CheckDistance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close To Ground");

	ALionfishLion_Character_BP_C_Is_Close_To_Ground_Params params;
	params.CheckDistance = CheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Use Aim Offsets
// ()
// Parameters:
// bool                           new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Set_Use_Aim_Offsets(bool new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Use Aim Offsets");

	ALionfishLion_Character_BP_C_Set_Use_Aim_Offsets_Params params;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Jumping Anim
// ()

void ALionfishLion_Character_BP_C::Update_Jumping_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Jumping Anim");

	ALionfishLion_Character_BP_C_Update_Jumping_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Manual Play Land Anim
// ()

void ALionfishLion_Character_BP_C::Manual_Play_Land_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Manual Play Land Anim");

	ALionfishLion_Character_BP_C_Manual_Play_Land_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Start
// ()

void ALionfishLion_Character_BP_C::Big_Spacebar_Leap_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Start");

	ALionfishLion_Character_BP_C_Big_Spacebar_Leap_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_CurrentClimbingState
// ()

void ALionfishLion_Character_BP_C::OnRep_CurrentClimbingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_CurrentClimbingState");

	ALionfishLion_Character_BP_C_OnRep_CurrentClimbingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set State
// ()
// Parameters:
// TEnumAsByte<E_PredatorClimbingState> new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Net_Set_State(TEnumAsByte<E_PredatorClimbingState> new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set State");

	ALionfishLion_Character_BP_C_Net_Set_State_Params params;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Keep Pouncing during Big Spacebar Leap
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Can_Keep_Pouncing_during_Big_Spacebar_Leap(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Keep Pouncing during Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Can_Keep_Pouncing_during_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Tick
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ALionfishLion_Character_BP_C::Big_Spacebar_Leap_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Tick");

	ALionfishLion_Character_BP_C_Big_Spacebar_Leap_Tick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Default Dino
// ()
// Parameters:
// class ALionfishLion_Character_BP_C* ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Get_Default_Dino(class ALionfishLion_Character_BP_C** ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Default Dino");

	ALionfishLion_Character_BP_C_Get_Default_Dino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ref != nullptr)
		*ref = params.ref;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove carry buff from prey
// ()

void ALionfishLion_Character_BP_C::remove_carry_buff_from_prey()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove carry buff from prey");

	ALionfishLion_Character_BP_C_remove_carry_buff_from_prey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can carry creature
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::can_carry_creature(class APrimalCharacter* Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can carry creature");

	ALionfishLion_Character_BP_C_can_carry_creature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Stop
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UObject*                 hit_target                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::STATIC_Big_Spacebar_Leap_Stop(class UObject* hit_target)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Stop");

	ALionfishLion_Character_BP_C_Big_Spacebar_Leap_Stop_Params params;
	params.hit_target = hit_target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.initilialize sleep
// ()

void ALionfishLion_Character_BP_C::initilialize_sleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.initilialize sleep");

	ALionfishLion_Character_BP_C_initilialize_sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reenable Collision
// ()

void ALionfishLion_Character_BP_C::Reenable_Collision()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reenable Collision");

	ALionfishLion_Character_BP_C_Reenable_Collision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustDamage");

	ALionfishLion_Character_BP_C_BPAdjustDamage_Params params;
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


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Calculate Big Spacebar Leap Direction
// ()
// Parameters:
// class AActor*                  Targetted_Character            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Big_Spacebar_Leap_velocity     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Big_Spacebar_Leap_dir          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Calculate_Big_Spacebar_Leap_Direction(class AActor* Targetted_Character, float Big_Spacebar_Leap_velocity, struct FVector* Big_Spacebar_Leap_dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Calculate Big Spacebar Leap Direction");

	ALionfishLion_Character_BP_C_Calculate_Big_Spacebar_Leap_Direction_Params params;
	params.Targetted_Character = Targetted_Character;
	params.Big_Spacebar_Leap_velocity = Big_Spacebar_Leap_velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Big_Spacebar_Leap_dir != nullptr)
		*Big_Spacebar_Leap_dir = params.Big_Spacebar_Leap_dir;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.True Wake Up Other Pack Dinos
// ()

void ALionfishLion_Character_BP_C::True_Wake_Up_Other_Pack_Dinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.True Wake Up Other Pack Dinos");

	ALionfishLion_Character_BP_C_True_Wake_Up_Other_Pack_Dinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.wake up other pack dinos
// ()
// Parameters:
// bool                           reset_their_affinity           (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::wake_up_other_pack_dinos(bool reset_their_affinity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.wake up other pack dinos");

	ALionfishLion_Character_BP_C_wake_up_other_pack_dinos_Params params;
	params.reset_their_affinity = reset_their_affinity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay True Wake Up
// ()

void ALionfishLion_Character_BP_C::Delay_True_Wake_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay True Wake Up");

	ALionfishLion_Character_BP_C_Delay_True_Wake_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Rotate During Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Rotate_During_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Rotate During Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Rotate_During_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Appearance
// ()

void ALionfishLion_Character_BP_C::Update_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Appearance");

	ALionfishLion_Character_BP_C_Update_Appearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_bIsDaytime
// ()

void ALionfishLion_Character_BP_C::OnRep_bIsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_bIsDaytime");

	ALionfishLion_Character_BP_C_OnRep_bIsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Is Fully Awake
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Get_Is_Fully_Awake(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Is Fully Awake");

	ALionfishLion_Character_BP_C_Get_Is_Fully_Awake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Dino Needs to Sleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Dino_Needs_to_Sleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Dino Needs to Sleep");

	ALionfishLion_Character_BP_C_Dino_Needs_to_Sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Valid Target
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Has_Valid_Target(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Valid Target");

	ALionfishLion_Character_BP_C_Has_Valid_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Sleep Debt to Deprived Ratio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Get_Sleep_Debt_to_Deprived_Ratio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Sleep Debt to Deprived Ratio");

	ALionfishLion_Character_BP_C_Get_Sleep_Debt_to_Deprived_Ratio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino Grounded
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Dino_Grounded(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino Grounded");

	ALionfishLion_Character_BP_C_Is_Dino_Grounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino in Shallow Water
// ()
// Parameters:
// bool                           shallowWaters                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Dino_in_Shallow_Water(bool* shallowWaters)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino in Shallow Water");

	ALionfishLion_Character_BP_C_Is_Dino_in_Shallow_Water_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shallowWaters != nullptr)
		*shallowWaters = params.shallowWaters;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Wake
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Can_Wake(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Wake");

	ALionfishLion_Character_BP_C_Can_Wake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Sleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Can_Sleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Sleep");

	ALionfishLion_Character_BP_C_Can_Sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Fall Asleep
// ()

void ALionfishLion_Character_BP_C::On_Fall_Asleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Fall Asleep");

	ALionfishLion_Character_BP_C_On_Fall_Asleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Wake Up
// ()

void ALionfishLion_Character_BP_C::On_Wake_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Wake Up");

	ALionfishLion_Character_BP_C_On_Wake_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Torpidity
// ()
// Parameters:
// float                          newTorpidity                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Set_Torpidity(float newTorpidity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Torpidity");

	ALionfishLion_Character_BP_C_Set_Torpidity_Params params;
	params.newTorpidity = newTorpidity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Related Actions
// ()

void ALionfishLion_Character_BP_C::Update_Sleep_Related_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Related Actions");

	ALionfishLion_Character_BP_C_Update_Sleep_Related_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Play Natural Sleeping Anims
// ()
// Parameters:
// bool                           isFallingAsleep                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAlerted                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Play_Natural_Sleeping_Anims(bool isFallingAsleep, bool isAlerted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Play Natural Sleeping Anims");

	ALionfishLion_Character_BP_C_Play_Natural_Sleeping_Anims_Params params;
	params.isFallingAsleep = isFallingAsleep;
	params.isAlerted = isAlerted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set Natural Sleep State
// ()
// Parameters:
// bool                           isAsleep                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Net_Set_Natural_Sleep_State(bool isAsleep)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set Natural Sleep State");

	ALionfishLion_Character_BP_C_Net_Set_Natural_Sleep_State_Params params;
	params.isAsleep = isAsleep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintDrawFloatingHUD");

	ALionfishLion_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeAdult
// ()

void ALionfishLion_Character_BP_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeAdult");

	ALionfishLion_Character_BP_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeBaby
// ()

void ALionfishLion_Character_BP_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeBaby");

	ALionfishLion_Character_BP_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventRiding");

	ALionfishLion_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Possible to Sleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Possible_to_Sleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Possible to Sleep");

	ALionfishLion_Character_BP_C_Is_Possible_to_Sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTryMultiUse");

	ALionfishLion_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Nocturnal Logic
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Allow_Nocturnal_Logic(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Nocturnal Logic");

	ALionfishLion_Character_BP_C_Allow_Nocturnal_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Debt
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Update_Sleep_Debt(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Debt");

	ALionfishLion_Character_BP_C_Update_Sleep_Debt_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Sleep Debt
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Has_Sleep_Debt(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Sleep Debt");

	ALionfishLion_Character_BP_C_Has_Sleep_Debt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is time of day when lion wants to sleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_time_of_day_when_lion_wants_to_sleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is time of day when lion wants to sleep");

	ALionfishLion_Character_BP_C_Is_time_of_day_when_lion_wants_to_sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Target Attacking Ally
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Target_Attacking_Ally(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Target Attacking Ally");

	ALionfishLion_Character_BP_C_Is_Target_Attacking_Ally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Tamed Following
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Tamed_Following(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Tamed Following");

	ALionfishLion_Character_BP_C_Is_Tamed_Following_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Wake
// ()

void ALionfishLion_Character_BP_C::Check_for_Wake()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Wake");

	ALionfishLion_Character_BP_C_Check_for_Wake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Sleep
// ()

void ALionfishLion_Character_BP_C::Check_for_Sleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Sleep");

	ALionfishLion_Character_BP_C_Check_for_Sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerServer
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ALionfishLion_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerServer");

	ALionfishLion_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check Time Of Day
// ()
// Parameters:
// bool                           ForceUpdate                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Check_Time_Of_Day(bool ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check Time Of Day");

	ALionfishLion_Character_BP_C_Check_Time_Of_Day_Params params;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Init Nocturnal Dino
// ()

void ALionfishLion_Character_BP_C::Init_Nocturnal_Dino()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Init Nocturnal Dino");

	ALionfishLion_Character_BP_C_Init_Nocturnal_Dino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Setup Refs
// ()

void ALionfishLion_Character_BP_C::Setup_Refs()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Setup Refs");

	ALionfishLion_Character_BP_C_Setup_Refs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyStructurePlacedNearby
// ()
// Parameters:
// class APrimalStructure**       NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyStructurePlacedNearby");

	ALionfishLion_Character_BP_C_BPNotifyStructurePlacedNearby_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Wake Up
// ()
// Parameters:
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Wake_Up(bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Wake Up");

	ALionfishLion_Character_BP_C_Wake_Up_Params params;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Fall Asleep
// ()
// Parameters:
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ignoreIsPossible               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Triggered_By_Multiuse          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Fall_Asleep(bool forceSuccess, bool ignoreIsPossible, bool Triggered_By_Multiuse)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Fall Asleep");

	ALionfishLion_Character_BP_C_Fall_Asleep_Params params;
	params.forceSuccess = forceSuccess;
	params.ignoreIsPossible = ignoreIsPossible;
	params.Triggered_By_Multiuse = Triggered_By_Multiuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCharacterSleeped
// ()

void ALionfishLion_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCharacterSleeped");

	ALionfishLion_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCharacterUnsleeped
// ()

void ALionfishLion_Character_BP_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCharacterUnsleeped");

	ALionfishLion_Character_BP_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Sleep Deprived
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Is_Sleep_Deprived(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Sleep Deprived");

	ALionfishLion_Character_BP_C_Is_Sleep_Deprived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display Message
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)

void ALionfishLion_Character_BP_C::Display_Message(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display Message");

	ALionfishLion_Character_BP_C_Display_Message_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is camo active
// ()

void ALionfishLion_Character_BP_C::OnRep_is_camo_active()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is camo active");

	ALionfishLion_Character_BP_C_OnRep_is_camo_active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.net set use camo
// ()
// Parameters:
// bool                           new_state                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           solo                           (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::net_set_use_camo(bool new_state, bool solo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.net set use camo");

	ALionfishLion_Character_BP_C_net_set_use_camo_Params params;
	params.new_state = new_state;
	params.solo = solo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Use Camo
// ()
// Parameters:
// bool                           is_for_start                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Can_Use_Camo(bool is_for_start, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Use Camo");

	ALionfishLion_Character_BP_C_Can_Use_Camo_Params params;
	params.is_for_start = is_for_start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.does it have enough stamina
// ()
// Parameters:
// float                          stamina_requirement            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::does_it_have_enough_stamina(float stamina_requirement, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.does it have enough stamina");

	ALionfishLion_Character_BP_C_does_it_have_enough_stamina_Params params;
	params.stamina_requirement = stamina_requirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.K2_OnMovementModeChanged");

	ALionfishLion_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTargetedByTamedOrder
// ()
// Parameters:
// class APrimalCharacter**       OrderingCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter**   AttackingDino                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BP_OnTargetedByTamedOrder(class APrimalCharacter** OrderingCharacter, class APrimalDinoCharacter** AttackingDino, bool* bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTargetedByTamedOrder");

	ALionfishLion_Character_BP_C_BP_OnTargetedByTamedOrder_Params params;
	params.OrderingCharacter = OrderingCharacter;
	params.AttackingDino = AttackingDino;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add Rider to Camo Fade Queue
// ()
// Parameters:
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enterCamo                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Add_Rider_to_Camo_Fade_Queue(class AShooterCharacter* Rider, bool enterCamo, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add Rider to Camo Fade Queue");

	ALionfishLion_Character_BP_C_Add_Rider_to_Camo_Fade_Queue_Params params;
	params.Rider = Rider;
	params.enterCamo = enterCamo;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearPassenger");

	ALionfishLion_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
// ()
// Parameters:
// class APrimalCharacter**       launchedCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPNotifyIfPassengerLaunchShoulderMount(class APrimalCharacter** launchedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount");

	ALionfishLion_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params params;
	params.launchedCharacter = launchedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Activate Rider Camo Particles
// ()
// Parameters:
// bool                           enterCamo                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       specificRider                  (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Activate_Rider_Camo_Particles(bool enterCamo, class AShooterCharacter* specificRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Activate Rider Camo Particles");

	ALionfishLion_Character_BP_C_Activate_Rider_Camo_Particles_Params params;
	params.enterCamo = enterCamo;
	params.specificRider = specificRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Clean Allow Target when Using Camo Array
// ()

void ALionfishLion_Character_BP_C::Clean_Allow_Target_when_Using_Camo_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Clean Allow Target when Using Camo Array");

	ALionfishLion_Character_BP_C_Clean_Allow_Target_when_Using_Camo_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set All Riders Hidden
// ()
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Set_All_Riders_Hidden(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set All Riders Hidden");

	ALionfishLion_Character_BP_C_Set_All_Riders_Hidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Camo Active
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Set_Camo_Active(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Camo Active");

	ALionfishLion_Character_BP_C_Set_Camo_Active_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Big Spacebar Leap Charge
// (NetReliable, Exec, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ALionfishLion_Character_BP_C::Request_Release_Big_Spacebar_Leap_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Big Spacebar Leap Charge");

	ALionfishLion_Character_BP_C_Request_Release_Big_Spacebar_Leap_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPServerHandleNetExecCommand
// (Event, NetResponse, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::STATIC_BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPServerHandleNetExecCommand");

	ALionfishLion_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get held direction relative to camera forward
// ()
// Parameters:
// bool                           in_water                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALionfishLion_Character_BP_C::get_held_direction_relative_to_camera_forward(bool in_water)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get held direction relative to camera forward");

	ALionfishLion_Character_BP_C_get_held_direction_relative_to_camera_forward_Params params;
	params.in_water = in_water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveforward
// ()

void ALionfishLion_Character_BP_C::Reset_Moveforward()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveforward");

	ALionfishLion_Character_BP_C_Reset_Moveforward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveForward");

	ALionfishLion_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveright
// ()

void ALionfishLion_Character_BP_C::Reset_Moveright()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveright");

	ALionfishLion_Character_BP_C_Reset_Moveright_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveRight");

	ALionfishLion_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Big Spacebar Leap Cooldown Active
// ()

void ALionfishLion_Character_BP_C::Is_Big_Spacebar_Leap_Cooldown_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Big Spacebar Leap Cooldown Active");

	ALionfishLion_Character_BP_C_Is_Big_Spacebar_Leap_Cooldown_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is in Initial Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Is_in_Initial_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is in Initial Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Is_in_Initial_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Big Spacebar Leap
// ()
// Parameters:
// float                          Big_Spacebar_Leap_Strength_Percentage (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Start_Big_Spacebar_Leap(float Big_Spacebar_Leap_Strength_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Start_Big_Spacebar_Leap_Params params;
	params.Big_Spacebar_Leap_Strength_Percentage = Big_Spacebar_Leap_Strength_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.CanJumpInternal");

	ALionfishLion_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ALionfishLion_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanAttack");

	ALionfishLion_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::Is_Charging_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Big Spacebar Leap");

	ALionfishLion_Character_BP_C_Is_Charging_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Apply Pack Buff
// ()

void ALionfishLion_Character_BP_C::Apply_Pack_Buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Apply Pack Buff");

	ALionfishLion_Character_BP_C_Apply_Pack_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanRiderAttack");

	ALionfishLion_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InterceptInputEvent
// (Event, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ALionfishLion_Character_BP_C::STATIC_InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InterceptInputEvent");

	ALionfishLion_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Current Combo Melee Index
// ()

void ALionfishLion_Character_BP_C::Reset_Current_Combo_Melee_Index()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Current Combo Melee Index");

	ALionfishLion_Character_BP_C_Reset_Current_Combo_Melee_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Combo Count
// ()

void ALionfishLion_Character_BP_C::Reset_Combo_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Combo Count");

	ALionfishLion_Character_BP_C_Reset_Combo_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAdjustOutputDamage");

	ALionfishLion_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALionfishLion_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustAttackIndex");

	ALionfishLion_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDoAttack
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDoAttack");

	ALionfishLion_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveAnyDamage");

	ALionfishLion_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyLevelUp");

	ALionfishLion_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPUnstasis
// ()

void ALionfishLion_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPUnstasis");

	ALionfishLion_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifySetRider");

	ALionfishLion_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALionfishLion_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");

	ALionfishLion_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnDinoCheat");

	ALionfishLion_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearRider");

	ALionfishLion_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleControllerInitiatedAttack");

	ALionfishLion_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleOnStopTargeting");

	ALionfishLion_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.UserConstructionScript
// ()

void ALionfishLion_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.UserConstructionScript");

	ALionfishLion_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__FinishedFunc
// ()

void ALionfishLion_Character_BP_C::grow_teleport_target_sphere__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__FinishedFunc");

	ALionfishLion_Character_BP_C_grow_teleport_target_sphere__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__UpdateFunc
// ()

void ALionfishLion_Character_BP_C::grow_teleport_target_sphere__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__UpdateFunc");

	ALionfishLion_Character_BP_C_grow_teleport_target_sphere__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__FinishedFunc
// ()

void ALionfishLion_Character_BP_C::move_between_teleport_targets__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__FinishedFunc");

	ALionfishLion_Character_BP_C_move_between_teleport_targets__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__UpdateFunc
// ()

void ALionfishLion_Character_BP_C::move_between_teleport_targets__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__UpdateFunc");

	ALionfishLion_Character_BP_C_move_between_teleport_targets__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__FinishedFunc
// ()

void ALionfishLion_Character_BP_C::fade_hide_dino__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__FinishedFunc");

	ALionfishLion_Character_BP_C_fade_hide_dino__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__UpdateFunc
// ()

void ALionfishLion_Character_BP_C::fade_hide_dino__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__UpdateFunc");

	ALionfishLion_Character_BP_C_fade_hide_dino__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__FinishedFunc
// ()

void ALionfishLion_Character_BP_C::lerp_to_normal__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__FinishedFunc");

	ALionfishLion_Character_BP_C_lerp_to_normal__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__UpdateFunc
// ()

void ALionfishLion_Character_BP_C::lerp_to_normal__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__UpdateFunc");

	ALionfishLion_Character_BP_C_lerp_to_normal__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__FinishedFunc
// ()

void ALionfishLion_Character_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__FinishedFunc");

	ALionfishLion_Character_BP_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__UpdateFunc
// ()

void ALionfishLion_Character_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__UpdateFunc");

	ALionfishLion_Character_BP_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__FinishedFunc
// ()

void ALionfishLion_Character_BP_C::stealth_anim_timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__FinishedFunc");

	ALionfishLion_Character_BP_C_stealth_anim_timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__UpdateFunc
// ()

void ALionfishLion_Character_BP_C::stealth_anim_timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__UpdateFunc");

	ALionfishLion_Character_BP_C_stealth_anim_timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__FinishedFunc
// ()

void ALionfishLion_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__FinishedFunc");

	ALionfishLion_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__UpdateFunc
// ()

void ALionfishLion_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__UpdateFunc");

	ALionfishLion_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::client_start_charge_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge Big Spacebar Leap");

	ALionfishLion_Character_BP_C_client_start_charge_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge Big Spacebar Leap
// ()
// Parameters:
// bool                           is_max_combo_Big_Spacebar_Leap (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::client_end_charge_Big_Spacebar_Leap(bool is_max_combo_Big_Spacebar_Leap)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge Big Spacebar Leap");

	ALionfishLion_Character_BP_C_client_end_charge_Big_Spacebar_Leap_Params params;
	params.is_max_combo_Big_Spacebar_Leap = is_max_combo_Big_Spacebar_Leap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
// ()

void ALionfishLion_Character_BP_C::Event_CleanAllowTargetWhenUsingCamoArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray");

	ALionfishLion_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_RestartCheckTargetArrayTimer
// ()

void ALionfishLion_Character_BP_C::Event_RestartCheckTargetArrayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_RestartCheckTargetArrayTimer");

	ALionfishLion_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started roar
// ()

void ALionfishLion_Character_BP_C::multicast_started_roar()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started roar");

	ALionfishLion_Character_BP_C_multicast_started_roar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveBeginPlay
// ()

void ALionfishLion_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveBeginPlay");

	ALionfishLion_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Re initialize nocturnal dino
// ()

void ALionfishLion_Character_BP_C::Re_initialize_nocturnal_dino()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Re initialize nocturnal dino");

	ALionfishLion_Character_BP_C_Re_initialize_nocturnal_dino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsDaytime
// ()

void ALionfishLion_Character_BP_C::OnIsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsDaytime");

	ALionfishLion_Character_BP_C_OnIsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsNighttime
// ()

void ALionfishLion_Character_BP_C::OnIsNighttime()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsNighttime");

	ALionfishLion_Character_BP_C_OnIsNighttime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.EnableMovementAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::EnableMovementAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.EnableMovementAfterDelay");

	ALionfishLion_Character_BP_C_EnableMovementAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.DisableMovementAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::DisableMovementAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.DisableMovementAfterDelay");

	ALionfishLion_Character_BP_C_DisableMovementAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ALionfishLion_Character_BP_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature");

	ALionfishLion_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bind sleeping buff dispatcher
// ()
// Parameters:
// class APrimalBuff*             Buff                           (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::bind_sleeping_buff_dispatcher(class APrimalBuff* Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bind sleeping buff dispatcher");

	ALionfishLion_Character_BP_C_bind_sleeping_buff_dispatcher_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.awoken from other buff added
// ()

void ALionfishLion_Character_BP_C::awoken_from_other_buff_added()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.awoken from other buff added");

	ALionfishLion_Character_BP_C_awoken_from_other_buff_added_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server_NetSetClimbingState
// ()
// Parameters:
// TEnumAsByte<E_PredatorClimbingState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Server_NetSetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server_NetSetClimbingState");

	ALionfishLion_Character_BP_C_Server_NetSetClimbingState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PreventLandingAnimBriefly
// ()

void ALionfishLion_Character_BP_C::PreventLandingAnimBriefly()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PreventLandingAnimBriefly");

	ALionfishLion_Character_BP_C_PreventLandingAnimBriefly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnJumpPressed
// ()

void ALionfishLion_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnJumpPressed");

	ALionfishLion_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.SyncGravityForBig Spacebar LeapFall
// ()

void ALionfishLion_Character_BP_C::SyncGravityForBig_Spacebar_LeapFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.SyncGravityForBig Spacebar LeapFall");

	ALionfishLion_Character_BP_C_SyncGravityForBig_Spacebar_LeapFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client started secondary roar
// ()

void ALionfishLion_Character_BP_C::client_started_secondary_roar()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client started secondary roar");

	ALionfishLion_Character_BP_C_client_started_secondary_roar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay update cloak animbp
// ()

void ALionfishLion_Character_BP_C::delay_update_cloak_animbp()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay update cloak animbp");

	ALionfishLion_Character_BP_C_delay_update_cloak_animbp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit swipe on target
// ()
// Parameters:
// float                          combo_count                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::multicast_hit_swipe_on_target(float combo_count)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit swipe on target");

	ALionfishLion_Character_BP_C_multicast_hit_swipe_on_target_Params params;
	params.combo_count = combo_count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit bite on target
// ()
// Parameters:
// float                          combo_value                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 target_loc                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::multicast_hit_bite_on_target(float combo_value, const struct FVector& target_loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit bite on target");

	ALionfishLion_Character_BP_C_multicast_hit_bite_on_target_Params params;
	params.combo_value = combo_value;
	params.target_loc = target_loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast start jumping
// ()

void ALionfishLion_Character_BP_C::multicast_start_jumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast start jumping");

	ALionfishLion_Character_BP_C_multicast_start_jumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.temporarily set fall blend to zero
// ()

void ALionfishLion_Character_BP_C::temporarily_set_fall_blend_to_zero()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.temporarily set fall blend to zero");

	ALionfishLion_Character_BP_C_temporarily_set_fall_blend_to_zero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.keep trying to init nocturnal anim
// ()

void ALionfishLion_Character_BP_C::keep_trying_to_init_nocturnal_anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.keep trying to init nocturnal anim");

	ALionfishLion_Character_BP_C_keep_trying_to_init_nocturnal_anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast tame
// ()

void ALionfishLion_Character_BP_C::multicast_tame()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast tame");

	ALionfishLion_Character_BP_C_multicast_tame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast play natural sleeping anims
// ()
// Parameters:
// bool                           is_falling_asleep              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_alerted                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::multicast_play_natural_sleeping_anims(bool is_falling_asleep, bool is_alerted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast play natural sleeping anims");

	ALionfishLion_Character_BP_C_multicast_play_natural_sleeping_anims_Params params;
	params.is_falling_asleep = is_falling_asleep;
	params.is_alerted = is_alerted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.early end Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::early_end_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.early end Big Spacebar Leap");

	ALionfishLion_Character_BP_C_early_end_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to location after Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::lerp_to_location_after_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to location after Big Spacebar Leap");

	ALionfishLion_Character_BP_C_lerp_to_location_after_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast Big Spacebar Leap end
// ()

void ALionfishLion_Character_BP_C::multicast_Big_Spacebar_Leap_end()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast Big Spacebar Leap end");

	ALionfishLion_Character_BP_C_multicast_Big_Spacebar_Leap_end_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started Big Spacebar Leap 2
// ()
// Parameters:
// float                          Big_Spacebar_Leap_Strength_Percentage (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::multicast_started_Big_Spacebar_Leap_2(float Big_Spacebar_Leap_Strength_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started Big Spacebar Leap 2");

	ALionfishLion_Character_BP_C_multicast_started_Big_Spacebar_Leap_2_Params params;
	params.Big_Spacebar_Leap_Strength_Percentage = Big_Spacebar_Leap_Strength_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on max combo Big Spacebar Leap hit
// ()

void ALionfishLion_Character_BP_C::multicast_on_max_combo_Big_Spacebar_Leap_hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on max combo Big Spacebar Leap hit");

	ALionfishLion_Character_BP_C_multicast_on_max_combo_Big_Spacebar_Leap_hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Hitstop
// ()
// Parameters:
// float                          Hitstop_Time                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Hitstop(float Hitstop_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Hitstop");

	ALionfishLion_Character_BP_C_Hitstop_Params params;
	params.Hitstop_Time = Hitstop_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.max combo Big Spacebar Leap hitstop
// ()

void ALionfishLion_Character_BP_C::max_combo_Big_Spacebar_Leap_hitstop()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.max combo Big Spacebar Leap hitstop");

	ALionfishLion_Character_BP_C_max_combo_Big_Spacebar_Leap_hitstop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on killed dino with max combo attack
// ()
// Parameters:
// struct FVector                 target_location                (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::multicast_on_killed_dino_with_max_combo_attack(const struct FVector& target_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on killed dino with max combo attack");

	ALionfishLion_Character_BP_C_multicast_on_killed_dino_with_max_combo_attack_Params params;
	params.target_location = target_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ServerSyncMovementValues
// ()
// Parameters:
// float                          synced_right                   (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::ServerSyncMovementValues(float synced_right)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ServerSyncMovementValues");

	ALionfishLion_Character_BP_C_ServerSyncMovementValues_Params params;
	params.synced_right = synced_right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge teleport
// ()

void ALionfishLion_Character_BP_C::client_start_charge_teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge teleport");

	ALionfishLion_Character_BP_C_client_start_charge_teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge teleport
// ()
// Parameters:
// bool                           is_max_combo_Teleport          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_quick_tap_teleport          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::client_end_charge_teleport(bool is_max_combo_Teleport, bool is_quick_tap_teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge teleport");

	ALionfishLion_Character_BP_C_client_end_charge_teleport_Params params;
	params.is_max_combo_Teleport = is_max_combo_Teleport;
	params.is_quick_tap_teleport = is_quick_tap_teleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started teleport 2
// ()
// Parameters:
// bool                           is_quick_tap_teleport          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Teleport_Target_Count          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::multicast_started_teleport_2(bool is_quick_tap_teleport, int Teleport_Target_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started teleport 2");

	ALionfishLion_Character_BP_C_multicast_started_teleport_2_Params params;
	params.is_quick_tap_teleport = is_quick_tap_teleport;
	params.Teleport_Target_Count = Teleport_Target_Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport to targets
// ()

void ALionfishLion_Character_BP_C::teleport_to_targets()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport to targets");

	ALionfishLion_Character_BP_C_teleport_to_targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.start teleport attack actual movement
// ()
// Parameters:
// struct FVector                 initial_location               (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::start_teleport_attack_actual_movement(const struct FVector& initial_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.start teleport attack actual movement");

	ALionfishLion_Character_BP_C_start_teleport_attack_actual_movement_Params params;
	params.initial_location = initial_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel teleport on failing to get targets
// ()
// Parameters:
// bool                           cancel_anim                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::soft_cancel_teleport_on_failing_to_get_targets(bool cancel_anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel teleport on failing to get targets");

	ALionfishLion_Character_BP_C_soft_cancel_teleport_on_failing_to_get_targets_Params params;
	params.cancel_anim = cancel_anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport attack to position
// ()
// Parameters:
// struct FVector                 start_loc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End_Loc                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           probably_final_teleport        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           turn_around                    (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::teleport_attack_to_position(const struct FVector& start_loc, const struct FVector& End_Loc, bool probably_final_teleport, bool turn_around)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport attack to position");

	ALionfishLion_Character_BP_C_teleport_attack_to_position_Params params;
	params.start_loc = start_loc;
	params.End_Loc = End_Loc;
	params.probably_final_teleport = probably_final_teleport;
	params.turn_around = turn_around;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.finished teleport attack
// ()

void ALionfishLion_Character_BP_C::finished_teleport_attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.finished teleport attack");

	ALionfishLion_Character_BP_C_finished_teleport_attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hide dino for teleport
// ()
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dont_reverse_from_end          (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::hide_dino_for_teleport(bool Hidden, float PlayRate, bool dont_reverse_from_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hide dino for teleport");

	ALionfishLion_Character_BP_C_hide_dino_for_teleport_Params params;
	params.Hidden = Hidden;
	params.PlayRate = PlayRate;
	params.dont_reverse_from_end = dont_reverse_from_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoPostBeginPlay
// ()

void ALionfishLion_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoPostBeginPlay");

	ALionfishLion_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restart dino clientside
// ()

void ALionfishLion_Character_BP_C::restart_dino_clientside()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restart dino clientside");

	ALionfishLion_Character_BP_C_restart_dino_clientside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel charge Big Spacebar Leap
// ()

void ALionfishLion_Character_BP_C::soft_cancel_charge_Big_Spacebar_Leap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel charge Big Spacebar Leap");

	ALionfishLion_Character_BP_C_soft_cancel_charge_Big_Spacebar_Leap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612");

	ALionfishLion_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Multi_UpdateBuffTime
// ()
// Parameters:
// bool                           bIsActive                      (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Multi_UpdateBuffTime(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Multi_UpdateBuffTime");

	ALionfishLion_Character_BP_C_Multi_UpdateBuffTime_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.trace loc
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::trace_loc(const struct FVector& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.trace loc");

	ALionfishLion_Character_BP_C_trace_loc_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp loc to normal
// ()

void ALionfishLion_Character_BP_C::lerp_loc_to_normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp loc to normal");

	ALionfishLion_Character_BP_C_lerp_loc_to_normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop mesh lerp to normal
// ()

void ALionfishLion_Character_BP_C::stop_mesh_lerp_to_normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop mesh lerp to normal");

	ALionfishLion_Character_BP_C_stop_mesh_lerp_to_normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set New Time on Fade
// ()
// Parameters:
// float                          New_Time                       (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::Set_New_Time_on_Fade(float New_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set New Time on Fade");

	ALionfishLion_Character_BP_C_Set_New_Time_on_Fade_Params params;
	params.New_Time = New_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp While Jumping
// ()

void ALionfishLion_Character_BP_C::Lerp_While_Jumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp While Jumping");

	ALionfishLion_Character_BP_C_Lerp_While_Jumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnActorCustomEvent_Event
// ()
// Parameters:
// struct FName                   EventCustomName                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  EventCustomString              (Parm, ZeroConstructor)
// class AActor*                  InstigatorActor                (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::OnActorCustomEvent_Event(const struct FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnActorCustomEvent_Event");

	ALionfishLion_Character_BP_C_OnActorCustomEvent_Event_Params params;
	params.EventCustomName = EventCustomName;
	params.EventCustomString = EventCustomString;
	params.InstigatorActor = InstigatorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate max combo Big Spacebar Leap particle
// ()

void ALionfishLion_Character_BP_C::activate_max_combo_Big_Spacebar_Leap_particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate max combo Big Spacebar Leap particle");

	ALionfishLion_Character_BP_C_activate_max_combo_Big_Spacebar_Leap_particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate water Big Spacebar Leap particles
// ()

void ALionfishLion_Character_BP_C::activate_water_Big_Spacebar_Leap_particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate water Big Spacebar Leap particles");

	ALionfishLion_Character_BP_C_activate_water_Big_Spacebar_Leap_particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ExecuteUbergraph_LionfishLion_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_C::ExecuteUbergraph_LionfishLion_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ExecuteUbergraph_LionfishLion_Character_BP");

	ALionfishLion_Character_BP_C_ExecuteUbergraph_LionfishLion_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
