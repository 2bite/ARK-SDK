// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLootTarget
// ()

void AFjordhawk_Character_BP_C::UpdateLootTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLootTarget");

	AFjordhawk_Character_BP_C_UpdateLootTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SetDestination
// ()
// Parameters:
// struct FVector                 NewDestination                 (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::SetDestination(const struct FVector& NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SetDestination");

	AFjordhawk_Character_BP_C_SetDestination_Params params;
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetFlight
// ()
// Parameters:
// bool*                          bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BPOnSetFlight(bool* bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetFlight");

	AFjordhawk_Character_BP_C_BPOnSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PreventShowingDinoTooltip
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::PreventShowingDinoTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PreventShowingDinoTooltip");

	AFjordhawk_Character_BP_C_PreventShowingDinoTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventOrderAllowed
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventOrderAllowed");

	AFjordhawk_Character_BP_C_BPPreventOrderAllowed_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.MulticastShieldBreakSound
// ()
// Parameters:
// bool                           Break                          (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::MulticastShieldBreakSound(bool Break)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.MulticastShieldBreakSound");

	AFjordhawk_Character_BP_C_MulticastShieldBreakSound_Params params;
	params.Break = Break;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BreakShield
// ()

void AFjordhawk_Character_BP_C::BreakShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BreakShield");

	AFjordhawk_Character_BP_C_BreakShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BuffClassIsStun
// ()
// Parameters:
// class UClass*                  BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStun                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BuffClassIsStun(class UClass* BuffClass, bool* IsStun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BuffClassIsStun");

	AFjordhawk_Character_BP_C_BuffClassIsStun_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStun != nullptr)
		*IsStun = params.IsStun;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_ForceAllowAddBuff");

	AFjordhawk_Character_BP_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPostLoadedFromSaveGame
// ()

void AFjordhawk_Character_BP_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPostLoadedFromSaveGame");

	AFjordhawk_Character_BP_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_PreventCarryingByCharacter
// ()
// Parameters:
// class APrimalCharacter**       ByCarrier                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::BP_PreventCarryingByCharacter(class APrimalCharacter** ByCarrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_PreventCarryingByCharacter");

	AFjordhawk_Character_BP_C_BP_PreventCarryingByCharacter_Params params;
	params.ByCarrier = ByCarrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CanEatCharacter
// ()
// Parameters:
// class APrimalCharacter*        InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::CanEatCharacter(class APrimalCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CanEatCharacter");

	AFjordhawk_Character_BP_C_CanEatCharacter_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishEating
// ()

void AFjordhawk_Character_BP_C::FinishEating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishEating");

	AFjordhawk_Character_BP_C_FinishEating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnPlayerDied
// ()
// Parameters:
// class APrimalCharacter*        NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::OnPlayerDied(class APrimalCharacter* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnPlayerDied");

	AFjordhawk_Character_BP_C_OnPlayerDied_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.StopWaitingForPlayer
// ()

void AFjordhawk_Character_BP_C::StopWaitingForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.StopWaitingForPlayer");

	AFjordhawk_Character_BP_C_StopWaitingForPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetApproachPoint
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InAir                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::GetApproachPoint(class AActor* Target, bool InAir, struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetApproachPoint");

	AFjordhawk_Character_BP_C_GetApproachPoint_Params params;
	params.Target = Target;
	params.InAir = InAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnDinoCheat");

	AFjordhawk_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientUpdate
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ClientUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientUpdate");

	AFjordhawk_Character_BP_C_ClientUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ServerUpdate
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ServerUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ServerUpdate");

	AFjordhawk_Character_BP_C_ServerUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventStasis");

	AFjordhawk_Character_BP_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnMassTeleportEvent
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState>* EventState                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter**       TeleportInitiatedByChar        (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BPOnMassTeleportEvent(TEnumAsByte<EMassTeleportState>* EventState, class APrimalCharacter** TeleportInitiatedByChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnMassTeleportEvent");

	AFjordhawk_Character_BP_C_BPOnMassTeleportEvent_Params params;
	params.EventState = EventState;
	params.TeleportInitiatedByChar = TeleportInitiatedByChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RetrievePlayerInventory
// ()

void AFjordhawk_Character_BP_C::RetrievePlayerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RetrievePlayerInventory");

	AFjordhawk_Character_BP_C_RetrievePlayerInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishedTame
// ()

void AFjordhawk_Character_BP_C::FinishedTame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishedTame");

	AFjordhawk_Character_BP_C_FinishedTame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.WildLookForCorpses
// ()

void AFjordhawk_Character_BP_C::WildLookForCorpses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.WildLookForCorpses");

	AFjordhawk_Character_BP_C_WildLookForCorpses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientHideDino
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ClientHideDino(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientHideDino");

	AFjordhawk_Character_BP_C_ClientHideDino_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPUnstasis
// ()

void AFjordhawk_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPUnstasis");

	AFjordhawk_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForLootDrop
// (NetReliable, Native, NetMulticast, Public, Protected, NetServer, HasDefaults, BlueprintEvent)

void AFjordhawk_Character_BP_C::CheckForLootDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForLootDrop");

	AFjordhawk_Character_BP_C_CheckForLootDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReacquirePlayer
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ReacquirePlayer(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReacquirePlayer");

	AFjordhawk_Character_BP_C_ReacquirePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPIsBlockedByShield
// ()
// Parameters:
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// struct FVector                 ShotDirection                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bBlockAllPointDamage           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::BPIsBlockedByShield(bool* bBlockAllPointDamage, struct FHitResult* HitInfo, struct FVector* ShotDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPIsBlockedByShield");

	AFjordhawk_Character_BP_C_BPIsBlockedByShield_Params params;
	params.bBlockAllPointDamage = bBlockAllPointDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
	if (ShotDirection != nullptr)
		*ShotDirection = params.ShotDirection;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLoot
// ()
// Parameters:
// bool                           Loot                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PlayerId                       (Parm, ZeroConstructor)

void AFjordhawk_Character_BP_C::UpdateLoot(bool Loot, const class FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLoot");

	AFjordhawk_Character_BP_C_UpdateLoot_Params params;
	params.Loot = Loot;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TogglePreyDetection
// ()

void AFjordhawk_Character_BP_C::TogglePreyDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TogglePreyDetection");

	AFjordhawk_Character_BP_C_TogglePreyDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PostLaunchUpdate
// ()

void AFjordhawk_Character_BP_C::PostLaunchUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PostLaunchUpdate");

	AFjordhawk_Character_BP_C_PostLaunchUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLaunchVectors
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::VerifyLaunchVectors(const struct FVector& Loc, const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLaunchVectors");

	AFjordhawk_Character_BP_C_VerifyLaunchVectors_Params params;
	params.Loc = Loc;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPrepareForLaunchFromShoulder
// ()
// Parameters:
// struct FVector                 viewLoc                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 viewDir                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFjordhawk_Character_BP_C::BPPrepareForLaunchFromShoulder(struct FVector* viewLoc, struct FVector* viewDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPrepareForLaunchFromShoulder");

	AFjordhawk_Character_BP_C_BPPrepareForLaunchFromShoulder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (viewLoc != nullptr)
		*viewLoc = params.viewLoc;
	if (viewDir != nullptr)
		*viewDir = params.viewDir;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPGetTargetingDesirability
// ()
// Parameters:
// class AActor**                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFjordhawk_Character_BP_C::BPGetTargetingDesirability(class AActor** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPGetTargetingDesirability");

	AFjordhawk_Character_BP_C_BPGetTargetingDesirability_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForPlayerDeath
// ()

void AFjordhawk_Character_BP_C::CheckForPlayerDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForPlayerDeath");

	AFjordhawk_Character_BP_C_CheckForPlayerDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPlayDying");

	AFjordhawk_Character_BP_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateForcedTickSetting
// ()

void AFjordhawk_Character_BP_C::UpdateForcedTickSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateForcedTickSetting");

	AFjordhawk_Character_BP_C_UpdateForcedTickSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetEatTarget
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AFjordhawk_Character_BP_C::GetEatTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetEatTarget");

	AFjordhawk_Character_BP_C_GetEatTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Net Show Bag
// ()
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::Net_Show_Bag(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Net Show Bag");

	AFjordhawk_Character_BP_C_Net_Show_Bag_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DinoShoulderMountedLaunch
// ()
// Parameters:
// struct FVector*                launchDir                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      throwingCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DinoShoulderMountedLaunch");

	AFjordhawk_Character_BP_C_DinoShoulderMountedLaunch_Params params;
	params.launchDir = launchDir;
	params.throwingCharacter = throwingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLootTarget
// (NetReliable, Exec, Event, Public, Protected, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter*        InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::VerifyLootTarget(class APrimalCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLootTarget");

	AFjordhawk_Character_BP_C_VerifyLootTarget_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPShouldForceFlee");

	AFjordhawk_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PickUpLoot
// ()

void AFjordhawk_Character_BP_C::PickUpLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PickUpLoot");

	AFjordhawk_Character_BP_C_PickUpLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPSetupTamed");

	AFjordhawk_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LookForLoot
// ()
// Parameters:
// float                          SearchRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LookForBetterLoot              (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::LookForLoot(float SearchRadius, bool LookForBetterLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LookForLoot");

	AFjordhawk_Character_BP_C_LookForLoot_Params params;
	params.SearchRadius = SearchRadius;
	params.LookForBetterLoot = LookForBetterLoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LootCache
// ()
// Parameters:
// class APrimalStructureItemContainer* StructureToLoot                (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::LootCache(class APrimalStructureItemContainer* StructureToLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LootCache");

	AFjordhawk_Character_BP_C_LootCache_Params params;
	params.StructureToLoot = StructureToLoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveDestroyed
// ()

void AFjordhawk_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveDestroyed");

	AFjordhawk_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DropLoot
// ()

void AFjordhawk_Character_BP_C::DropLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DropLoot");

	AFjordhawk_Character_BP_C_DropLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPDinoPostBeginPlay
// ()

void AFjordhawk_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPDinoPostBeginPlay");

	AFjordhawk_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindAimedTarget
// (NetReliable, NetRequest, Native, NetMulticast, Public, Protected, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AimDir                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::FindAimedTarget(const struct FVector& AimLoc, const struct FVector& AimDir, class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindAimedTarget");

	AFjordhawk_Character_BP_C_FindAimedTarget_Params params;
	params.AimLoc = AimLoc;
	params.AimDir = AimDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnLaunched
// ()
// Parameters:
// struct FVector*                LaunchVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnLaunched");

	AFjordhawk_Character_BP_C_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnClearMountedDino
// ()

void AFjordhawk_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnClearMountedDino");

	AFjordhawk_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetMountedDino
// ()

void AFjordhawk_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetMountedDino");

	AFjordhawk_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OverrideRandomWanderLocation");

	AFjordhawk_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindWanderAroundActor
// ()

void AFjordhawk_Character_BP_C::FindWanderAroundActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindWanderAroundActor");

	AFjordhawk_Character_BP_C_FindWanderAroundActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Eat  Corpse
// ()
// Parameters:
// class APrimalCharacter*        DinoToEat                      (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::Eat__Corpse(class APrimalCharacter* DinoToEat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Eat  Corpse");

	AFjordhawk_Character_BP_C_Eat__Corpse_Params params;
	params.DinoToEat = DinoToEat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AFjordhawk_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintCanAttack");

	AFjordhawk_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RestoreShield
// ()

void AFjordhawk_Character_BP_C::RestoreShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RestoreShield");

	AFjordhawk_Character_BP_C_RestoreShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnRep_HasShield
// (Native, Event, NetResponse, MulticastDelegate, NetServer, HasDefaults, BlueprintEvent)

void AFjordhawk_Character_BP_C::OnRep_HasShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnRep_HasShield");

	AFjordhawk_Character_BP_C_OnRep_HasShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFjordhawk_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPAdjustDamage");

	AFjordhawk_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveTick");

	AFjordhawk_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Disable Landing
// ()

void AFjordhawk_Character_BP_C::Disable_Landing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Disable Landing");

	AFjordhawk_Character_BP_C_Disable_Landing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.AllowLanding
// ()

void AFjordhawk_Character_BP_C::AllowLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.AllowLanding");

	AFjordhawk_Character_BP_C_AllowLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnTamedProcessOrder");

	AFjordhawk_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveAnyDamage");

	AFjordhawk_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z To Point
// ()
// Parameters:
// struct FVector                 offsetFromCurrentLocation      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::Rotate_Z_To_Point(const struct FVector& offsetFromCurrentLocation, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z To Point");

	AFjordhawk_Character_BP_C_Rotate_Z_To_Point_Params params;
	params.offsetFromCurrentLocation = offsetFromCurrentLocation;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z to Target
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::Rotate_Z_to_Target(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z to Target");

	AFjordhawk_Character_BP_C_Rotate_Z_to_Target_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UserConstructionScript
// ()

void AFjordhawk_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UserConstructionScript");

	AFjordhawk_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__FinishedFunc
// ()

void AFjordhawk_Character_BP_C::RotationToTarget__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__FinishedFunc");

	AFjordhawk_Character_BP_C_RotationToTarget__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__UpdateFunc
// ()

void AFjordhawk_Character_BP_C::RotationToTarget__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__UpdateFunc");

	AFjordhawk_Character_BP_C_RotationToTarget__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SlowlyRotateZTo
// ()
// Parameters:
// struct FRotator                TargetRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                initialRotation                (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::SlowlyRotateZTo(const struct FRotator& TargetRotation, float Time, const struct FRotator& initialRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SlowlyRotateZTo");

	AFjordhawk_Character_BP_C_SlowlyRotateZTo_Params params;
	params.TargetRotation = TargetRotation;
	params.Time = Time;
	params.initialRotation = initialRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.HideDino
// ()

void AFjordhawk_Character_BP_C::HideDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.HideDino");

	AFjordhawk_Character_BP_C_HideDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ShowDino
// ()

void AFjordhawk_Character_BP_C::ShowDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ShowDino");

	AFjordhawk_Character_BP_C_ShowDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientSetHidden
// ()
// Parameters:
// bool                           NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ClientSetHidden(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientSetHidden");

	AFjordhawk_Character_BP_C_ClientSetHidden_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateVisibilityAfterUnstasis
// ()

void AFjordhawk_Character_BP_C::UpdateVisibilityAfterUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateVisibilityAfterUnstasis");

	AFjordhawk_Character_BP_C_UpdateVisibilityAfterUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyEscape
// ()

void AFjordhawk_Character_BP_C::VerifyEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyEscape");

	AFjordhawk_Character_BP_C_VerifyEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryLanding
// ()

void AFjordhawk_Character_BP_C::TryLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryLanding");

	AFjordhawk_Character_BP_C_TryLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ExecuteUbergraph_Fjordhawk_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Character_BP_C::ExecuteUbergraph_Fjordhawk_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ExecuteUbergraph_Fjordhawk_Character_BP");

	AFjordhawk_Character_BP_C_ExecuteUbergraph_Fjordhawk_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
