// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPIsHidden
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARockDrake_Character_BP_C::BPIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPIsHidden");

	ARockDrake_Character_BP_C_BPIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
// ()
// Parameters:
// class APrimalCharacter**       launchedCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BPNotifyIfPassengerLaunchShoulderMount(class APrimalCharacter** launchedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount");

	ARockDrake_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params params;
	params.launchedCharacter = launchedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPGetAddForwardVelocityOnJump
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARockDrake_Character_BP_C::BPGetAddForwardVelocityOnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPGetAddForwardVelocityOnJump");

	ARockDrake_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPDinoARKDownloadedBegin
// ()

void ARockDrake_Character_BP_C::BPDinoARKDownloadedBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPDinoARKDownloadedBegin");

	ARockDrake_Character_BP_C_BPDinoARKDownloadedBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveDestroyed
// ()

void ARockDrake_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveDestroyed");

	ARockDrake_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_Controlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::CanClimberStopNonDediTick_Controlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_Controlled");

	ARockDrake_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnJumped
// ()

void ARockDrake_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnJumped");

	ARockDrake_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_ClimbingCanAttack
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::STATIC_Climber_AI_ClimbingCanAttack(int* AttackIndex, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_ClimbingCanAttack");

	ARockDrake_Character_BP_C_Climber_AI_ClimbingCanAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARockDrake_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnStartJump");

	ARockDrake_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_CheckForAttackWhileClimbing
// ()

void ARockDrake_Character_BP_C::Climber_AI_CheckForAttackWhileClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_CheckForAttackWhileClimbing");

	ARockDrake_Character_BP_C_Climber_AI_CheckForAttackWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleRightShoulderButton
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARockDrake_Character_BP_C::BPHandleRightShoulderButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleRightShoulderButton");

	ARockDrake_Character_BP_C_BPHandleRightShoulderButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberAI_UpdateHasTargetWhileClimbing
// ()

void ARockDrake_Character_BP_C::ClimberAI_UpdateHasTargetWhileClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberAI_UpdateHasTargetWhileClimbing");

	ARockDrake_Character_BP_C_ClimberAI_UpdateHasTargetWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPCharacterSleeped
// ()

void ARockDrake_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPCharacterSleeped");

	ARockDrake_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.HideSaddleMesh
// ()

void ARockDrake_Character_BP_C::HideSaddleMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.HideSaddleMesh");

	ARockDrake_Character_BP_C_HideSaddleMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyInventoryItemChange");

	ARockDrake_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetAllRidersHidden
// ()
// Parameters:
// bool                           bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::SetAllRidersHidden(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetAllRidersHidden");

	ARockDrake_Character_BP_C_SetAllRidersHidden_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARockDrake_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleOnStopTargeting");

	ARockDrake_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARockDrake_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPModifyFOV");

	ARockDrake_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARockDrake_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPHandleControllerInitiatedAttack");

	ARockDrake_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_Server
// ()

void ARockDrake_Character_BP_C::ClimberTick_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_Server");

	ARockDrake_Character_BP_C_ClimberTick_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Gliding_BraceForImpact
// (NetReliable, NetResponse, Static, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)

void ARockDrake_Character_BP_C::STATIC_RockDrakeTick_Gliding_BraceForImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Gliding_BraceForImpact");

	ARockDrake_Character_BP_C_RockDrakeTick_Gliding_BraceForImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Server
// ()

void ARockDrake_Character_BP_C::RockDrakeTick_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_Server");

	ARockDrake_Character_BP_C_RockDrakeTick_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_NonDedi
// ()

void ARockDrake_Character_BP_C::RockDrakeTick_NonDedi()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrakeTick_NonDedi");

	ARockDrake_Character_BP_C_RockDrakeTick_NonDedi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyAddPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyAddPassenger");

	ARockDrake_Character_BP_C_BPNotifyAddPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearPassenger
// ()
// Parameters:
// class APrimalCharacter**       PassengerChar                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearPassenger");

	ARockDrake_Character_BP_C_BPNotifyClearPassenger_Params params;
	params.PassengerChar = PassengerChar;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_NonDedi
// ()

void ARockDrake_Character_BP_C::ClimberTick_NonDedi()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberTick_NonDedi");

	ARockDrake_Character_BP_C_ClimberTick_NonDedi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_CheckForPounce
// (Native, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pounceDir                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::STATIC_RockDrake_AI_CheckForPounce(bool* Success, struct FVector* pounceDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_CheckForPounce");

	ARockDrake_Character_BP_C_RockDrake_AI_CheckForPounce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (pounceDir != nullptr)
		*pounceDir = params.pounceDir;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BeginPounceAnims
// ()

void ARockDrake_Character_BP_C::BeginPounceAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BeginPounceAnims");

	ARockDrake_Character_BP_C_BeginPounceAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.AllowTraceForPounce
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::AllowTraceForPounce(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.AllowTraceForPounce");

	ARockDrake_Character_BP_C_AllowTraceForPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdatePounceTargetLocation
// ()

void ARockDrake_Character_BP_C::UpdatePounceTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdatePounceTargetLocation");

	ARockDrake_Character_BP_C_UpdatePounceTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnSetDeath
// ()

void ARockDrake_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnSetDeath");

	ARockDrake_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.TraceForPounce
// (NetReliable, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           foundValidLocation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 validLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::STATIC_TraceForPounce(bool* foundValidLocation, struct FVector* validLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.TraceForPounce");

	ARockDrake_Character_BP_C_TraceForPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundValidLocation != nullptr)
		*foundValidLocation = params.foundValidLocation;
	if (validLocation != nullptr)
		*validLocation = params.validLocation;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateServerClimberByClimbingIndex
// ()

void ARockDrake_Character_BP_C::UpdateServerClimberByClimbingIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateServerClimberByClimbingIndex");

	ARockDrake_Character_BP_C_UpdateServerClimberByClimbingIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateNonControlledClimber
// ()

void ARockDrake_Character_BP_C::UpdateNonControlledClimber()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateNonControlledClimber");

	ARockDrake_Character_BP_C_UpdateNonControlledClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeAdult
// ()

void ARockDrake_Character_BP_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeAdult");

	ARockDrake_Character_BP_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeBaby
// ()

void ARockDrake_Character_BP_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPBecomeBaby");

	ARockDrake_Character_BP_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_NonControlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::CanClimberStopNonDediTick_NonControlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanClimberStopNonDediTick_NonControlled");

	ARockDrake_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnNestEgg
// (NetReliable, NetRequest, Exec, Event, NetResponse, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const, NetValidate)

void ARockDrake_Character_BP_C::SpawnNestEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnNestEgg");

	ARockDrake_Character_BP_C_SpawnNestEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForSpawnEggs
// ()

void ARockDrake_Character_BP_C::CheckForSpawnEggs()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForSpawnEggs");

	ARockDrake_Character_BP_C_CheckForSpawnEggs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CleanAllowTargetWhenUsingCamoArray
// ()

void ARockDrake_Character_BP_C::CleanAllowTargetWhenUsingCamoArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CleanAllowTargetWhenUsingCamoArray");

	ARockDrake_Character_BP_C_CleanAllowTargetWhenUsingCamoArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnTargetedByTamedOrder
// ()
// Parameters:
// class APrimalCharacter**       OrderingCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter**   AttackingDino                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BP_OnTargetedByTamedOrder(class APrimalCharacter** OrderingCharacter, class APrimalDinoCharacter** AttackingDino, bool* bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnTargetedByTamedOrder");

	ARockDrake_Character_BP_C_BP_OnTargetedByTamedOrder_Params params;
	params.OrderingCharacter = OrderingCharacter;
	params.AttackingDino = AttackingDino;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectWallJumpAnim
// ()
// Parameters:
// struct FVector*                wallJumpVelocity               (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::GetCorrectWallJumpAnim(struct FVector* wallJumpVelocity, class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectWallJumpAnim");

	ARockDrake_Character_BP_C_GetCorrectWallJumpAnim_Params params;
	params.wallJumpVelocity = wallJumpVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get CorrectClimber Rotation
// ()
// Parameters:
// bool                           updateRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Get_CorrectClimber_Rotation(bool* updateRotation, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get CorrectClimber Rotation");

	ARockDrake_Character_BP_C_Get_CorrectClimber_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (updateRotation != nullptr)
		*updateRotation = params.updateRotation;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldAlignWithVelocityOnImpact
// ()
// Parameters:
// struct FHitResult              ImpactHit                      (Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::ShouldAlignWithVelocityOnImpact(const struct FHitResult& ImpactHit, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldAlignWithVelocityOnImpact");

	ARockDrake_Character_BP_C_ShouldAlignWithVelocityOnImpact_Params params;
	params.ImpactHit = ImpactHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Override
// ()

void ARockDrake_Character_BP_C::ServerTick_Override()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Override");

	ARockDrake_Character_BP_C_ServerTick_Override_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnWallJump
// ()
// Parameters:
// struct FVector*                wallJumpVelocity               (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::OnWallJump(struct FVector* wallJumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnWallJump");

	ARockDrake_Character_BP_C_OnWallJump_Params params;
	params.wallJumpVelocity = wallJumpVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnStartSeeking
// ()

void ARockDrake_Character_BP_C::OnStartSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnStartSeeking");

	ARockDrake_Character_BP_C_OnStartSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveHit
// (NetRequest, Exec, Native, Static, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const, NetValidate)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ARockDrake_Character_BP_C::STATIC_ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveHit");

	ARockDrake_Character_BP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ARockDrake_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Rock Drake Anim BP
// ()
// Parameters:
// class URockDrake_AnimBlueprint_C* animBP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Get_Rock_Drake_Anim_BP(class URockDrake_AnimBlueprint_C** animBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Rock Drake Anim BP");

	ARockDrake_Character_BP_C_Get_Rock_Drake_Anim_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (animBP != nullptr)
		*animBP = params.animBP;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnGlideImpactVFX
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const, NetValidate)

void ARockDrake_Character_BP_C::STATIC_SpawnGlideImpactVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SpawnGlideImpactVFX");

	ARockDrake_Character_BP_C_SpawnGlideImpactVFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCurrentGlidingRotationRateMult
// ()
// Parameters:
// float                          mult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::GetCurrentGlidingRotationRateMult(float* mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCurrentGlidingRotationRateMult");

	ARockDrake_Character_BP_C_GetCurrentGlidingRotationRateMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mult != nullptr)
		*mult = params.mult;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, Exec, Event, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARockDrake_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintAdjustOutputDamage");

	ARockDrake_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Is Rock Drake Gliding
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Is_Rock_Drake_Gliding(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Is Rock Drake Gliding");

	ARockDrake_Character_BP_C_Is_Rock_Drake_Gliding_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Stop All Climber Logic
// ()

void ARockDrake_Character_BP_C::Stop_All_Climber_Logic()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Stop All Climber Logic");

	ARockDrake_Character_BP_C_Stop_All_Climber_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceStart
// ()

void ARockDrake_Character_BP_C::PounceStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceStart");

	ARockDrake_Character_BP_C_PounceStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_OnSetTarget
// ()
// Parameters:
// class AActor**                 NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Climber_AI_OnSetTarget(class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_AI_OnSetTarget");

	ARockDrake_Character_BP_C_Climber_AI_OnSetTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnRiderChangeWeapons
// ()
// Parameters:
// class AShooterCharacter**      theRider                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            newWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BP_OnRiderChangeWeapons(class AShooterCharacter** theRider, class UPrimalItem** newWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnRiderChangeWeapons");

	ARockDrake_Character_BP_C_BP_OnRiderChangeWeapons_Params params;
	params.theRider = theRider;
	params.newWeapon = newWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberOn Server Run Released
// ()

void ARockDrake_Character_BP_C::ClimberOn_Server_Run_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberOn Server Run Released");

	ARockDrake_Character_BP_C_ClimberOn_Server_Run_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldRockDrakeGlideFall
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::ShouldRockDrakeGlideFall(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldRockDrakeGlideFall");

	ARockDrake_Character_BP_C_ShouldRockDrakeGlideFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStopSeeking
// ()

void ARockDrake_Character_BP_C::ClimberStopSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStopSeeking");

	ARockDrake_Character_BP_C_ClimberStopSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStartSeeking
// ()

void ARockDrake_Character_BP_C::ClimberStartSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClimberStartSeeking");

	ARockDrake_Character_BP_C_ClimberStartSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsRockDrakeGliding_Pure
// ()
// Parameters:
// bool                           checkPrev                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::IsRockDrakeGliding_Pure(bool checkPrev, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsRockDrakeGliding_Pure");

	ARockDrake_Character_BP_C_IsRockDrakeGliding_Pure_Params params;
	params.checkPrev = checkPrev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_Feathers
// ()

void ARockDrake_Character_BP_C::Update_Gliding_Feathers()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_Feathers");

	ARockDrake_Character_BP_C_Update_Gliding_Feathers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_VFX
// ()

void ARockDrake_Character_BP_C::Update_Gliding_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Update Gliding_VFX");

	ARockDrake_Character_BP_C_Update_Gliding_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGliding_Audio
// ()

void ARockDrake_Character_BP_C::UpdateGliding_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGliding_Audio");

	ARockDrake_Character_BP_C_UpdateGliding_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGlidingFX
// ()

void ARockDrake_Character_BP_C::UpdateGlidingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateGlidingFX");

	ARockDrake_Character_BP_C_UpdateGlidingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_OnServerRunPressed
// ()

void ARockDrake_Character_BP_C::Climber_OnServerRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Climber_OnServerRunPressed");

	ARockDrake_Character_BP_C_Climber_OnServerRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClientTick_UpdateClimberTarget FOV
// ()

void ARockDrake_Character_BP_C::ClientTick_UpdateClimberTarget_FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ClientTick_UpdateClimberTarget FOV");

	ARockDrake_Character_BP_C_ClientTick_UpdateClimberTarget_FOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Target TPV_Camera Offset
// ()

void ARockDrake_Character_BP_C::Replicate_Index_Update_Target_TPV_Camera_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Target TPV_Camera Offset");

	ARockDrake_Character_BP_C_Replicate_Index_Update_Target_TPV_Camera_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.AddRiderToCamoFadeQueue
// ()
// Parameters:
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnterCamo                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::AddRiderToCamoFadeQueue(class AShooterCharacter* Rider, bool EnterCamo, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.AddRiderToCamoFadeQueue");

	ARockDrake_Character_BP_C_AddRiderToCamoFadeQueue_Params params;
	params.Rider = Rider;
	params.EnterCamo = EnterCamo;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ActivateRiderCamoParticles
// ()
// Parameters:
// bool                           EnterCamo                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       specificRider                  (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::ActivateRiderCamoParticles(bool EnterCamo, class AShooterCharacter* specificRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ActivateRiderCamoParticles");

	ARockDrake_Character_BP_C_ActivateRiderCamoParticles_Params params;
	params.EnterCamo = EnterCamo;
	params.specificRider = specificRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifySetRider");

	ARockDrake_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPNotifyClearRider");

	ARockDrake_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveAnyDamage");

	ARockDrake_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::GetGlidingSpeedRatio_(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_");

	ARockDrake_Character_BP_C_GetGlidingSpeedRatio__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPUnstasis
// ()

void ARockDrake_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPUnstasis");

	ARockDrake_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake
// ()

void ARockDrake_Character_BP_C::InitRockDrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake");

	ARockDrake_Character_BP_C_InitRockDrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_Pure
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::GetGlidingSpeedRatio_Pure(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetGlidingSpeedRatio_Pure");

	ARockDrake_Character_BP_C_GetGlidingSpeedRatio_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARockDrake_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ARockDrake_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Non Dedi Climber
// ()

void ARockDrake_Character_BP_C::Replicate_Index_Update_Non_Dedi_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Non Dedi Climber");

	ARockDrake_Character_BP_C_Replicate_Index_Update_Non_Dedi_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Server And Client Climber
// ()

void ARockDrake_Character_BP_C::Replicate_Index_Update_Server_And_Client_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Replicate Index Update Server And Client Climber");

	ARockDrake_Character_BP_C_Replicate_Index_Update_Server_And_Client_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberMovementMode
// ()

void ARockDrake_Character_BP_C::UpdateClimberMovementMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberMovementMode");

	ARockDrake_Character_BP_C_UpdateClimberMovementMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BPOnMovementModeChangedNotify");

	ARockDrake_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetRockDrakeStateOverrideIndex
// ()
// Parameters:
// TEnumAsByte<E_DinoClimberState_RockDrake> State                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::GetRockDrakeStateOverrideIndex(TEnumAsByte<E_DinoClimberState_RockDrake> State, unsigned char* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetRockDrakeStateOverrideIndex");

	ARockDrake_Character_BP_C_GetRockDrakeStateOverrideIndex_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectSurfaceTraceDistance
// ()
// Parameters:
// bool*                          isForRetry                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          traceDist                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::GetCorrectSurfaceTraceDistance(bool* isForRetry, float* traceDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GetCorrectSurfaceTraceDistance");

	ARockDrake_Character_BP_C_GetCorrectSurfaceTraceDistance_Params params;
	params.isForRetry = isForRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceDist != nullptr)
		*traceDist = params.traceDist;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Tick Force Forward Input
// ()

void ARockDrake_Character_BP_C::Tick_Force_Forward_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Tick Force Forward Input");

	ARockDrake_Character_BP_C_Tick_Force_Forward_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARockDrake_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ARockDrake_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.GlideStart
// ()

void ARockDrake_Character_BP_C::GlideStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.GlideStart");

	ARockDrake_Character_BP_C_GlideStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PrepareToPounce
// ()
// Parameters:
// struct FVector                 pounceDir                      (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::PrepareToPounce(const struct FVector& pounceDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PrepareToPounce");

	ARockDrake_Character_BP_C_PrepareToPounce_Params params;
	params.pounceDir = pounceDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Net Set Climber State
// ()
// Parameters:
// unsigned char*                 newStateIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Net_Set_Climber_State(unsigned char* newStateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Net Set Climber State");

	ARockDrake_Character_BP_C_Net_Set_Climber_State_Params params;
	params.newStateIndex = newStateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetCamoActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::SetCamoActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetCamoActive");

	ARockDrake_Character_BP_C_SetCamoActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanGlide
// ()
// Parameters:
// bool                           isToStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::CanGlide(bool isToStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanGlide");

	ARockDrake_Character_BP_C_CanGlide_Params params;
	params.isToStart = isToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanPounce
// ()
// Parameters:
// bool                           isToStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::CanPounce(bool isToStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CanPounce");

	ARockDrake_Character_BP_C_CanPounce_Params params;
	params.isToStart = isToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Gliding
// ()

void ARockDrake_Character_BP_C::ServerTick_Gliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Gliding");

	ARockDrake_Character_BP_C_ServerTick_Gliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Pouncing
// ()

void ARockDrake_Character_BP_C::ServerTick_Pouncing()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ServerTick_Pouncing");

	ARockDrake_Character_BP_C_ServerTick_Pouncing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberStateByClimbingIndex
// ()
// Parameters:
// unsigned char*                 newIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::UpdateClimberStateByClimbingIndex(unsigned char* newIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UpdateClimberStateByClimbingIndex");

	ARockDrake_Character_BP_C_UpdateClimberStateByClimbingIndex_Params params;
	params.newIndex = newIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldClimberDraw CrosshairWhileClimbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::ShouldClimberDraw_CrosshairWhileClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ShouldClimberDraw CrosshairWhileClimbing");

	ARockDrake_Character_BP_C_ShouldClimberDraw_CrosshairWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnRep_bIsUsingCamo
// ()

void ARockDrake_Character_BP_C::OnRep_bIsUsingCamo()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OnRep_bIsUsingCamo");

	ARockDrake_Character_BP_C_OnRep_bIsUsingCamo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Can Use Camo
// ()
// Parameters:
// bool                           isForStart                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Can_Use_Camo(bool isForStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Can Use Camo");

	ARockDrake_Character_BP_C_Can_Use_Camo_Params params;
	params.isForStart = isForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.NetSetUseCamo
// ()
// Parameters:
// bool                           newUse                         (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::NetSetUseCamo(bool newUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.NetSetUseCamo");

	ARockDrake_Character_BP_C_NetSetUseCamo_Params params;
	params.newUse = newUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsNormalClimbable
// ()
// Parameters:
// struct FVector*                Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isAverageNormal                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.IsNormalClimbable");

	ARockDrake_Character_BP_C_IsNormalClimbable_Params params;
	params.Normal = Normal;
	params.isAverageNormal = isAverageNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Correct Surface Trace OffsetTransforms
// ()
// Parameters:
// bool*                          overrideUseMap                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   newUseMp                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct UObject_FTransform> offsetTransforms               (Parm, OutParm, ZeroConstructor)
// TArray<int>                    TraceIndeces                   (Parm, OutParm, ZeroConstructor)

void ARockDrake_Character_BP_C::Get_Correct_Surface_Trace_OffsetTransforms(bool* overrideUseMap, TArray<bool>* newUseMp, TArray<struct UObject_FTransform>* offsetTransforms, TArray<int>* TraceIndeces)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Get Correct Surface Trace OffsetTransforms");

	ARockDrake_Character_BP_C_Get_Correct_Surface_Trace_OffsetTransforms_Params params;
	params.overrideUseMap = overrideUseMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newUseMp != nullptr)
		*newUseMp = params.newUseMp;
	if (offsetTransforms != nullptr)
		*offsetTransforms = params.offsetTransforms;
	if (TraceIndeces != nullptr)
		*TraceIndeces = params.TraceIndeces;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Check For Prevent Stop Climbing
// ()
// Parameters:
// TArray<bool>                   traceHitsArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           numValidHits                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           numTraces                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           allowClimbing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* allowClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Check For Prevent Stop Climbing");

	ARockDrake_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params params;
	params.numValidHits = numValidHits;
	params.numTraces = numTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceHitsArray != nullptr)
		*traceHitsArray = params.traceHitsArray;
	if (allowClimbing != nullptr)
		*allowClimbing = params.allowClimbing;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARockDrake_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanAttack");

	ARockDrake_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARockDrake_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BlueprintCanRiderAttack");

	ARockDrake_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.UserConstructionScript
// ()

void ARockDrake_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.UserConstructionScript");

	ARockDrake_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__FinishedFunc
// ()

void ARockDrake_Character_BP_C::FadeCamo_RockDrake__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__FinishedFunc");

	ARockDrake_Character_BP_C_FadeCamo_RockDrake__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__UpdateFunc
// ()

void ARockDrake_Character_BP_C::FadeCamo_RockDrake__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeCamo_RockDrake__UpdateFunc");

	ARockDrake_Character_BP_C_FadeCamo_RockDrake__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__FinishedFunc
// ()

void ARockDrake_Character_BP_C::FadeToInvisible_Rider__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__FinishedFunc");

	ARockDrake_Character_BP_C_FadeToInvisible_Rider__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__UpdateFunc
// ()

void ARockDrake_Character_BP_C::FadeToInvisible_Rider__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.FadeToInvisible_Rider__UpdateFunc");

	ARockDrake_Character_BP_C_FadeToInvisible_Rider__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_114
// ()

void ARockDrake_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_114()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_114");

	ARockDrake_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_114_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpPressed
// ()

void ARockDrake_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpPressed");

	ARockDrake_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpReleased
// ()

void ARockDrake_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.BP_OnJumpReleased");

	ARockDrake_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_GlideStart
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          newSpeedMult                   (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Multi_GlideStart(const struct FRotator& NewRotation, float newSpeedMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_GlideStart");

	ARockDrake_Character_BP_C_Multi_GlideStart_Params params;
	params.NewRotation = NewRotation;
	params.newSpeedMult = newSpeedMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PounceStart
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFromClimbing                 (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Multi_PounceStart(const struct FRotator& NewRotation, bool isFromClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PounceStart");

	ARockDrake_Character_BP_C_Multi_PounceStart_Params params;
	params.NewRotation = NewRotation;
	params.isFromClimbing = isFromClimbing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Play_FadeCamo_RockDrake
// ()

void ARockDrake_Character_BP_C::Play_FadeCamo_RockDrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Play_FadeCamo_RockDrake");

	ARockDrake_Character_BP_C_Play_FadeCamo_RockDrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Reverse_FadeCamo_RockDrake
// ()

void ARockDrake_Character_BP_C::Reverse_FadeCamo_RockDrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Reverse_FadeCamo_RockDrake");

	ARockDrake_Character_BP_C_Reverse_FadeCamo_RockDrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveBeginPlay
// ()

void ARockDrake_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReceiveBeginPlay");

	ARockDrake_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_RockDrake
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::SetNewTime_FadeCamo_RockDrake(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_RockDrake");

	ARockDrake_Character_BP_C_SetNewTime_FadeCamo_RockDrake_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_SetNewTime_FadeCamo_RockDrake
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Multi_SetNewTime_FadeCamo_RockDrake(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_SetNewTime_FadeCamo_RockDrake");

	ARockDrake_Character_BP_C_Multi_SetNewTime_FadeCamo_RockDrake_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_Rider
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::SetNewTime_FadeCamo_Rider(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.SetNewTime_FadeCamo_Rider");

	ARockDrake_Character_BP_C_SetNewTime_FadeCamo_Rider_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReverseFromEnd_FadeCamo_Rider
// ()

void ARockDrake_Character_BP_C::ReverseFromEnd_FadeCamo_Rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ReverseFromEnd_FadeCamo_Rider");

	ARockDrake_Character_BP_C_ReverseFromEnd_FadeCamo_Rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PlayFromStart_FadeCamo_Rider
// ()

void ARockDrake_Character_BP_C::PlayFromStart_FadeCamo_Rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PlayFromStart_FadeCamo_Rider");

	ARockDrake_Character_BP_C_PlayFromStart_FadeCamo_Rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_OnRiderEquipWeapon
// ()
// Parameters:
// class AShooterCharacter*       theRider                       (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Multi_OnRiderEquipWeapon(class AShooterCharacter* theRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_OnRiderEquipWeapon");

	ARockDrake_Character_BP_C_Multi_OnRiderEquipWeapon_Params params;
	params.theRider = theRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_Event
// ()

void ARockDrake_Character_BP_C::InitRockDrake_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_Event");

	ARockDrake_Character_BP_C_InitRockDrake_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_NextTick
// ()

void ARockDrake_Character_BP_C::InitRockDrake_NextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.InitRockDrake_NextTick");

	ARockDrake_Character_BP_C_InitRockDrake_NextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_HardSetCamoActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Multi_HardSetCamoActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_HardSetCamoActive");

	ARockDrake_Character_BP_C_Multi_HardSetCamoActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::PounceAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.PounceAfterDelay");

	ARockDrake_Character_BP_C_PounceAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
// ()

void ARockDrake_Character_BP_C::Event_CleanAllowTargetWhenUsingCamoArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray");

	ARockDrake_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_RestartCheckTargetArrayTimer
// ()

void ARockDrake_Character_BP_C::Event_RestartCheckTargetArrayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Event_RestartCheckTargetArrayTimer");

	ARockDrake_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.TrySpawnEggAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::TrySpawnEggAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.TrySpawnEggAfterDelay");

	ARockDrake_Character_BP_C_TrySpawnEggAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestSetJumpMovementMode
// ()

void ARockDrake_Character_BP_C::Server_RequestSetJumpMovementMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestSetJumpMovementMode");

	ARockDrake_Character_BP_C_Server_RequestSetJumpMovementMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ResetIsInAirFromJumpAfterDelay
// ()

void ARockDrake_Character_BP_C::ResetIsInAirFromJumpAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ResetIsInAirFromJumpAfterDelay");

	ARockDrake_Character_BP_C_ResetIsInAirFromJumpAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.OwningClient_SyncAllowPouncing
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::OwningClient_SyncAllowPouncing(bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.OwningClient_SyncAllowPouncing");

	ARockDrake_Character_BP_C_OwningClient_SyncAllowPouncing_Params params;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_SyncHasValidPounceTarget
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newTargetLocation              (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::Server_SyncHasValidPounceTarget(bool newVal, const struct FVector& newTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_SyncHasValidPounceTarget");

	ARockDrake_Character_BP_C_Server_SyncHasValidPounceTarget_Params params;
	params.newVal = newVal;
	params.newTargetLocation = newTargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_AnticipatePounce
// ()
// Parameters:
// bool                           isFromSetTarget                (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::RockDrake_AI_AnticipatePounce(bool isFromSetTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.RockDrake_AI_AnticipatePounce");

	ARockDrake_Character_BP_C_RockDrake_AI_AnticipatePounce_Params params;
	params.isFromSetTarget = isFromSetTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer
// ()

void ARockDrake_Character_BP_C::CheckForGlideStartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer");

	ARockDrake_Character_BP_C_CheckForGlideStartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_EnableTick
// ()

void ARockDrake_Character_BP_C::CheckForGlideStartTimer_EnableTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_EnableTick");

	ARockDrake_Character_BP_C_CheckForGlideStartTimer_EnableTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_StopTick
// ()

void ARockDrake_Character_BP_C::CheckForGlideStartTimer_StopTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.CheckForGlideStartTimer_StopTick");

	ARockDrake_Character_BP_C_CheckForGlideStartTimer_StopTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PlayFade
// ()

void ARockDrake_Character_BP_C::Multi_PlayFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Multi_PlayFade");

	ARockDrake_Character_BP_C_Multi_PlayFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestWaterJump
// ()

void ARockDrake_Character_BP_C::Server_RequestWaterJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.Server_RequestWaterJump");

	ARockDrake_Character_BP_C_Server_RequestWaterJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.WaterJump
// ()

void ARockDrake_Character_BP_C::WaterJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.WaterJump");

	ARockDrake_Character_BP_C_WaterJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP.RockDrake_Character_BP_C.ExecuteUbergraph_RockDrake_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_C::ExecuteUbergraph_RockDrake_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP.RockDrake_Character_BP_C.ExecuteUbergraph_RockDrake_Character_BP");

	ARockDrake_Character_BP_C_ExecuteUbergraph_RockDrake_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
