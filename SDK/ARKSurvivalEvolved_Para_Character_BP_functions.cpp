// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Para_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Para_Character_BP.Para_Character_BP_C.CanUseAlertPulse
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::CanUseAlertPulse(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.CanUseAlertPulse");

	APara_Character_BP_C_CanUseAlertPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Para_Character_BP.Para_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.ReceiveTick");

	APara_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.GetNearbyEnemies
// ()
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor)

void APara_Character_BP_C::GetNearbyEnemies(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.GetNearbyEnemies");

	APara_Character_BP_C_GetNearbyEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function Para_Character_BP.Para_Character_BP_C.NotifyPlayerAboutAlert
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::STATIC_NotifyPlayerAboutAlert(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.NotifyPlayerAboutAlert");

	APara_Character_BP_C_NotifyPlayerAboutAlert_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.SetHighFoodConsumption
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::SetHighFoodConsumption(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.SetHighFoodConsumption");

	APara_Character_BP_C_SetHighFoodConsumption_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BPNotifyClearRider");

	APara_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BPNotifySetRider");

	APara_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APara_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BPHandleControllerInitiatedAttack");

	APara_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Para_Character_BP.Para_Character_BP_C.ClassifyScanningTarget
// ()
// Parameters:
// class AActor*                  ScanTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPara_WarningMode> WarningMode                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FleeingCountsAsHostile         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsSmallCreature                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::ClassifyScanningTarget(class AActor* ScanTarget, TEnumAsByte<EPara_WarningMode> WarningMode, bool FleeingCountsAsHostile, bool* IsEnemy, bool* IsSmallCreature)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.ClassifyScanningTarget");

	APara_Character_BP_C_ClassifyScanningTarget_Params params;
	params.ScanTarget = ScanTarget;
	params.WarningMode = WarningMode;
	params.FleeingCountsAsHostile = FleeingCountsAsHostile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnemy != nullptr)
		*IsEnemy = params.IsEnemy;
	if (IsSmallCreature != nullptr)
		*IsSmallCreature = params.IsSmallCreature;
}


// Function Para_Character_BP.Para_Character_BP_C.BP_OnSetDeath
// ()

void APara_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BP_OnSetDeath");

	APara_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.OnRep_IsAlertActive
// ()

void APara_Character_BP_C::OnRep_IsAlertActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.OnRep_IsAlertActive");

	APara_Character_BP_C_OnRep_IsAlertActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APara_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BlueprintCanAttack");

	APara_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Para_Character_BP.Para_Character_BP_C.Is Small Creature
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSmall                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::Is_Small_Creature(class APrimalCharacter* Character, bool* IsSmall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.Is Small Creature");

	APara_Character_BP_C_Is_Small_Creature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSmall != nullptr)
		*IsSmall = params.IsSmall;
}


// Function Para_Character_BP.Para_Character_BP_C.Is Frighten On Cooldown
// ()
// Parameters:
// bool                           OnCooldown                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::Is_Frighten_On_Cooldown(bool* OnCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.Is Frighten On Cooldown");

	APara_Character_BP_C_Is_Frighten_On_Cooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnCooldown != nullptr)
		*OnCooldown = params.OnCooldown;
}


// Function Para_Character_BP.Para_Character_BP_C.Find Nearby Small Creatures
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> Creatures                      (Parm, OutParm, ZeroConstructor)

void APara_Character_BP_C::Find_Nearby_Small_Creatures(TArray<class APrimalDinoCharacter*>* Creatures)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.Find Nearby Small Creatures");

	APara_Character_BP_C_Find_Nearby_Small_Creatures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Creatures != nullptr)
		*Creatures = params.Creatures;
}


// Function Para_Character_BP.Para_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APara_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BlueprintCanRiderAttack");

	APara_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Para_Character_BP.Para_Character_BP_C.IsDinoHostile
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FleeingCountsAsHostile         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHostile                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::IsDinoHostile(class APrimalDinoCharacter* Dino, bool FleeingCountsAsHostile, bool* IsHostile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.IsDinoHostile");

	APara_Character_BP_C_IsDinoHostile_Params params;
	params.Dino = Dino;
	params.FleeingCountsAsHostile = FleeingCountsAsHostile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHostile != nullptr)
		*IsHostile = params.IsHostile;
}


// Function Para_Character_BP.Para_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BPClientDoMultiUse");

	APara_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.Octree Warning Scan
// ()
// Parameters:
// TEnumAsByte<EPara_WarningMode> Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludeFleeing                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalCharacter*> FoundEnemies                   (Parm, OutParm, ZeroConstructor)
// bool                           FoundSmallCreature             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> FoundPlayers                   (Parm, OutParm, ZeroConstructor)

void APara_Character_BP_C::Octree_Warning_Scan(TEnumAsByte<EPara_WarningMode> Mode, bool IncludeFleeing, TArray<class APrimalCharacter*>* FoundEnemies, bool* FoundSmallCreature, TArray<class AShooterCharacter*>* FoundPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.Octree Warning Scan");

	APara_Character_BP_C_Octree_Warning_Scan_Params params;
	params.Mode = Mode;
	params.IncludeFleeing = IncludeFleeing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundEnemies != nullptr)
		*FoundEnemies = params.FoundEnemies;
	if (FoundSmallCreature != nullptr)
		*FoundSmallCreature = params.FoundSmallCreature;
	if (FoundPlayers != nullptr)
		*FoundPlayers = params.FoundPlayers;
}


// Function Para_Character_BP.Para_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APara_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BPTryMultiUse");

	APara_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Para_Character_BP.Para_Character_BP_C.BPGetMultiUseEntries
// (Event, NetMulticast, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APara_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.BPGetMultiUseEntries");

	APara_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Para_Character_BP.Para_Character_BP_C.SetTurretMode
// ()
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APara_Character_BP_C::SetTurretMode(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.SetTurretMode");

	APara_Character_BP_C_SetTurretMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Para_Character_BP.Para_Character_BP_C.UserConstructionScript
// ()

void APara_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.UserConstructionScript");

	APara_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.MulticastUpdateWarningMode
// ()
// Parameters:
// bool                           WarningModeEnabled             (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::MulticastUpdateWarningMode(bool WarningModeEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.MulticastUpdateWarningMode");

	APara_Character_BP_C_MulticastUpdateWarningMode_Params params;
	params.WarningModeEnabled = WarningModeEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.AlertTick
// ()

void APara_Character_BP_C::AlertTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.AlertTick");

	APara_Character_BP_C_AlertTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.StartAlertTick
// ()

void APara_Character_BP_C::StartAlertTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.StartAlertTick");

	APara_Character_BP_C_StartAlertTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.StopAlertTick
// ()

void APara_Character_BP_C::StopAlertTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.StopAlertTick");

	APara_Character_BP_C_StopAlertTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.UpdateWarningMode
// ()
// Parameters:
// bool                           WarningModeEnabled             (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::UpdateWarningMode(bool WarningModeEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.UpdateWarningMode");

	APara_Character_BP_C_UpdateWarningMode_Params params;
	params.WarningModeEnabled = WarningModeEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.ServerRequestAlertPulse
// ()

void APara_Character_BP_C::ServerRequestAlertPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.ServerRequestAlertPulse");

	APara_Character_BP_C_ServerRequestAlertPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.DoAlertPulse
// ()

void APara_Character_BP_C::DoAlertPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.DoAlertPulse");

	APara_Character_BP_C_DoAlertPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_Character_BP.Para_Character_BP_C.ExecuteUbergraph_Para_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APara_Character_BP_C::ExecuteUbergraph_Para_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Character_BP.Para_Character_BP_C.ExecuteUbergraph_Para_Character_BP");

	APara_Character_BP_C_ExecuteUbergraph_Para_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
