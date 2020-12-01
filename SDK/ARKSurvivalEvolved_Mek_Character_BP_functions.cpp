// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mek_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekHeat
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHeatLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ModifyMekHeat(float Delta, bool Subtract, float* NewHeatLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekHeat");

	AMek_Character_BP_C_ModifyMekHeat_Params params;
	params.Delta = Delta;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewHeatLevel != nullptr)
		*NewHeatLevel = params.NewHeatLevel;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekFuel
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewFuelLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ModifyMekFuel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ModifyMekFuel");

	AMek_Character_BP_C_ModifyMekFuel_Params params;
	params.Delta = Delta;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewFuelLevel != nullptr)
		*NewFuelLevel = params.NewFuelLevel;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetMekFuel
// ()
// Parameters:
// float                          CurrentFuel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxFuel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::GetMekFuel(float* CurrentFuel, float* MaxFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetMekFuel");

	AMek_Character_BP_C_GetMekFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentFuel != nullptr)
		*CurrentFuel = params.CurrentFuel;
	if (MaxFuel != nullptr)
		*MaxFuel = params.MaxFuel;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetMekHeat
// ()
// Parameters:
// float                          CurrentHeat                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxHeat                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::GetMekHeat(float* CurrentHeat, float* MaxHeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetMekHeat");

	AMek_Character_BP_C_GetMekHeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHeat != nullptr)
		*CurrentHeat = params.CurrentHeat;
	if (MaxHeat != nullptr)
		*MaxHeat = params.MaxHeat;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPDoAttack");

	AMek_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPCanBaseOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       BaseCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPCanBaseOnCharacter");

	AMek_Character_BP_C_BPCanBaseOnCharacter_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.SyncBackpackColorization
// ()

void AMek_Character_BP_C::SyncBackpackColorization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.SyncBackpackColorization");

	AMek_Character_BP_C_SyncBackpackColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideMoveToOrder
// ()
// Parameters:
// struct FVector*                MoveToLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      OrderingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideMoveToOrder");

	AMek_Character_BP_C_BPOverrideMoveToOrder_Params params;
	params.MoveToLocation = MoveToLocation;
	params.OrderingPlayer = OrderingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.Get Transform Key Name
// (Net, NetResponse, MulticastDelegate, Public, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// struct FText                   KeyName                        (Parm, OutParm)

void AMek_Character_BP_C::Get_Transform_Key_Name(struct FText* KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.Get Transform Key Name");

	AMek_Character_BP_C_Get_Transform_Key_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyName != nullptr)
		*KeyName = params.KeyName;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPPostLoadedFromSaveGame
// ()

void AMek_Character_BP_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPPostLoadedFromSaveGame");

	AMek_Character_BP_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPPreSerializeSaveGame
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Protected, BlueprintCallable, Const, NetValidate)

void AMek_Character_BP_C::STATIC_BPPreSerializeSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPPreSerializeSaveGame");

	AMek_Character_BP_C_BPPreSerializeSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustImpulseFromDamage
// ()
// Parameters:
// struct FVector*                DesiredImpulse                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMek_Character_BP_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustImpulseFromDamage");

	AMek_Character_BP_C_BPAdjustImpulseFromDamage_Params params;
	params.DesiredImpulse = DesiredImpulse;
	params.DamageTaken = DamageTaken;
	params.TheDamageEvent = TheDamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMek_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOnRefreshColorization");

	AMek_Character_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPDinoARKDownloadedEnd
// ()

void AMek_Character_BP_C::BPDinoARKDownloadedEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPDinoARKDownloadedEnd");

	AMek_Character_BP_C_BPDinoARKDownloadedEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPTimerServer
// ()

void AMek_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPTimerServer");

	AMek_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPHandlePoop");

	AMek_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFirstPerson");

	AMek_Character_BP_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.RepairedByScout
// ()

void AMek_Character_BP_C::RepairedByScout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.RepairedByScout");

	AMek_Character_BP_C_RepairedByScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOnLethalDamage
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOnLethalDamage");

	AMek_Character_BP_C_BPOnLethalDamage_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
	if (bPreventDeath != nullptr)
		*bPreventDeath = params.bPreventDeath;
}


// Function Mek_Character_BP.Mek_Character_BP_C.UpdateDepletedMeksList
// ()
// Parameters:
// bool                           ClearAllTargets                (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::UpdateDepletedMeksList(bool ClearAllTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.UpdateDepletedMeksList");

	AMek_Character_BP_C_UpdateDepletedMeksList_Params params;
	params.ClearAllTargets = ClearAllTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.IsRemoteMekValidForDepletion
// ()
// Parameters:
// class AMek_Character_BP_C*     Mek                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasDepletedBuff                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::IsRemoteMekValidForDepletion(class AMek_Character_BP_C* Mek, bool* IsValid, bool* HasDepletedBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.IsRemoteMekValidForDepletion");

	AMek_Character_BP_C_IsRemoteMekValidForDepletion_Params params;
	params.Mek = Mek;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (HasDepletedBuff != nullptr)
		*HasDepletedBuff = params.HasDepletedBuff;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPNotifySetRider");

	AMek_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPPreventInputType
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPPreventInputType");

	AMek_Character_BP_C_BPPreventInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ClientIsMegaMekTransformationAllowed
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           KingKaijuNearby                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FriendlyMeksNearby             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ClientIsMegaMekTransformationAllowed(bool* Allowed, bool* KingKaijuNearby, int* FriendlyMeksNearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ClientIsMegaMekTransformationAllowed");

	AMek_Character_BP_C_ClientIsMegaMekTransformationAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
	if (KingKaijuNearby != nullptr)
		*KingKaijuNearby = params.KingKaijuNearby;
	if (FriendlyMeksNearby != nullptr)
		*FriendlyMeksNearby = params.FriendlyMeksNearby;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MegaMekTransformation
// ()

void AMek_Character_BP_C::MegaMekTransformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MegaMekTransformation");

	AMek_Character_BP_C_MegaMekTransformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.AllowedToAutoRepair
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CooldownTimeRemaining          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::AllowedToAutoRepair(bool* Allowed, float* CooldownTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.AllowedToAutoRepair");

	AMek_Character_BP_C_AllowedToAutoRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
	if (CooldownTimeRemaining != nullptr)
		*CooldownTimeRemaining = params.CooldownTimeRemaining;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BlueprintDrawFloatingHUD
// (Net, Native, NetResponse, Static, MulticastDelegate, Public, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::STATIC_BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BlueprintDrawFloatingHUD");

	AMek_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPTryMultiUse");

	AMek_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Private, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AMek_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPGetMultiUseEntries");

	AMek_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetTurnInPlaceSpeed
// ()
// Parameters:
// float                          DefaultSpeed                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::GetTurnInPlaceSpeed(float DefaultSpeed, float* NewSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetTurnInPlaceSpeed");

	AMek_Character_BP_C_GetTurnInPlaceSpeed_Params params;
	params.DefaultSpeed = DefaultSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSpeed != nullptr)
		*NewSpeed = params.NewSpeed;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMek_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustDamage");

	AMek_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPHandleOnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopFire");

	AMek_Character_BP_C_BPHandleOnStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.HoverTrace
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// float                          TraceDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawDuration              (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)
// bool                           BlockingHit                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::STATIC_HoverTrace(float TraceDistance, bool DebugDraw, float DebugDrawDuration, struct FHitResult* HitResult, bool* BlockingHit, struct FVector* TraceStart, struct FVector* TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.HoverTrace");

	AMek_Character_BP_C_HoverTrace_Params params;
	params.TraceDistance = TraceDistance;
	params.DebugDraw = DebugDraw;
	params.DebugDrawDuration = DebugDrawDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (BlockingHit != nullptr)
		*BlockingHit = params.BlockingHit;
	if (TraceStart != nullptr)
		*TraceStart = params.TraceStart;
	if (TraceEnd != nullptr)
		*TraceEnd = params.TraceEnd;
}


// Function Mek_Character_BP.Mek_Character_BP_C.IsPlayingAttackAnim
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::STATIC_IsPlayingAttackAnim(int AttackIndex, bool* Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.IsPlayingAttackAnim");

	AMek_Character_BP_C_IsPlayingAttackAnim_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Playing != nullptr)
		*Playing = params.Playing;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	AMek_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideHurtAnim
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

class UAnimMontage* AMek_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideHurtAnim");

	AMek_Character_BP_C_BPOverrideHurtAnim_Params params;
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


// Function Mek_Character_BP.Mek_Character_BP_C.GetCurrentSwordStatus
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// bool                           IsSwingingSword                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            CurrentMontage                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AttackAnimIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AnimTimeRemaining              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::GetCurrentSwordStatus(bool* IsSwingingSword, class UAnimMontage** CurrentMontage, int* AttackAnimIndex, float* AnimTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetCurrentSwordStatus");

	AMek_Character_BP_C_GetCurrentSwordStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSwingingSword != nullptr)
		*IsSwingingSword = params.IsSwingingSword;
	if (CurrentMontage != nullptr)
		*CurrentMontage = params.CurrentMontage;
	if (AttackAnimIndex != nullptr)
		*AttackAnimIndex = params.AttackAnimIndex;
	if (AnimTimeRemaining != nullptr)
		*AnimTimeRemaining = params.AnimTimeRemaining;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    newMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 newCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* newCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BP_PreventMovementMode");

	AMek_Character_BP_C_BP_PreventMovementMode_Params params;
	params.newMovementMode = newMovementMode;
	params.newCustomMode = newCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMek_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AMek_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetHeatLevel
// ()
// Parameters:
// float                          Heat                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxHeat                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::GetHeatLevel(float* Heat, float* MaxHeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetHeatLevel");

	AMek_Character_BP_C_GetHeatLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Heat != nullptr)
		*Heat = params.Heat;
	if (MaxHeat != nullptr)
		*MaxHeat = params.MaxHeat;
}


// Function Mek_Character_BP.Mek_Character_BP_C.IsBackpackActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::IsBackpackActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.IsBackpackActive");

	AMek_Character_BP_C_IsBackpackActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function Mek_Character_BP.Mek_Character_BP_C.HasEquippedBackpack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::HasEquippedBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.HasEquippedBackpack");

	AMek_Character_BP_C_HasEquippedBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AMek_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetEquippedBackpack
// ()
// Parameters:
// bool                           HasBackpack                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABuff_MekBackpack_Base_C* BackpackBuff                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BackpackType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::GetEquippedBackpack(bool* HasBackpack, class ABuff_MekBackpack_Base_C** BackpackBuff, struct FName* BackpackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetEquippedBackpack");

	AMek_Character_BP_C_GetEquippedBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasBackpack != nullptr)
		*HasBackpack = params.HasBackpack;
	if (BackpackBuff != nullptr)
		*BackpackBuff = params.BackpackBuff;
	if (BackpackType != nullptr)
		*BackpackType = params.BackpackType;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyInventoryItemChange");

	AMek_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPDinoPostBeginPlay
// ()

void AMek_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPDinoPostBeginPlay");

	AMek_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ModifyHeatLevel
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHeatLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ModifyHeatLevel(float Delta, bool Subtract, float* NewHeatLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ModifyHeatLevel");

	AMek_Character_BP_C_ModifyHeatLevel_Params params;
	params.Delta = Delta;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewHeatLevel != nullptr)
		*NewHeatLevel = params.NewHeatLevel;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetPistolMuzzleInfo
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// struct FVector                 MuzzleLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MuzzleDirection                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::GetPistolMuzzleInfo(struct FVector* MuzzleLocation, struct FVector* MuzzleDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetPistolMuzzleInfo");

	AMek_Character_BP_C_GetPistolMuzzleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = params.MuzzleLocation;
	if (MuzzleDirection != nullptr)
		*MuzzleDirection = params.MuzzleDirection;
}


// Function Mek_Character_BP.Mek_Character_BP_C.UpdateTargetingMode
// ()
// Parameters:
// bool                           NewTargetingState              (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::UpdateTargetingMode(bool NewTargetingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.UpdateTargetingMode");

	AMek_Character_BP_C_UpdateTargetingMode_Params params;
	params.NewTargetingState = NewTargetingState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ReceiveTick
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ReceiveTick");

	AMek_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMek_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPAdjustAttackIndex");

	AMek_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.IsCurrentlyTargeting
// ()
// Parameters:
// bool                           IsTargeting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::IsCurrentlyTargeting(bool* IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.IsCurrentlyTargeting");

	AMek_Character_BP_C_IsCurrentlyTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTargeting != nullptr)
		*IsTargeting = params.IsTargeting;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPHandleControllerInitiatedAttack");

	AMek_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPHandleOnStopTargeting");

	AMek_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.Set Camera Offset Multipliers
// ()
// Parameters:
// float                          HorizMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          VertMultiplier                 (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::Set_Camera_Offset_Multipliers(float HorizMultiplier, float VertMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.Set Camera Offset Multipliers");

	AMek_Character_BP_C_Set_Camera_Offset_Multipliers_Params params;
	params.HorizMultiplier = HorizMultiplier;
	params.VertMultiplier = VertMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.UpdateHoverJetsVFX
// ()

void AMek_Character_BP_C::UpdateHoverJetsVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.UpdateHoverJetsVFX");

	AMek_Character_BP_C_UpdateHoverJetsVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPNotifyClearRider");

	AMek_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMek_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	AMek_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Mek_Character_BP.Mek_Character_BP_C.ModifyFuelLevel
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewFuelLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ModifyFuelLevel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ModifyFuelLevel");

	AMek_Character_BP_C_ModifyFuelLevel_Params params;
	params.Delta = Delta;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewFuelLevel != nullptr)
		*NewFuelLevel = params.NewFuelLevel;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function Mek_Character_BP.Mek_Character_BP_C.HasEnoughResourcesToHover
// ()
// Parameters:
// bool                           CanHover                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::HasEnoughResourcesToHover(bool* CanHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.HasEnoughResourcesToHover");

	AMek_Character_BP_C_HasEnoughResourcesToHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanHover != nullptr)
		*CanHover = params.CanHover;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOnDinoCheat");

	AMek_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPOnMovementModeChangedNotify");

	AMek_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AMek_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPGetHUDElements");

	AMek_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpReleased
// ()

void AMek_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpReleased");

	AMek_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpPressed
// ()

void AMek_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BP_OnJumpPressed");

	AMek_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMek_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPGetGravityZScale");

	AMek_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFallDamage
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)
// float*                         FallDamageAmount               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPPreventFallDamage");

	AMek_Character_BP_C_BPPreventFallDamage_Params params;
	params.FallDamageAmount = FallDamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.RidingTick
// (Net, NetRequest, Exec, Event, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::STATIC_RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.RidingTick");

	AMek_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BPGetRiderUnboardLocation
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, Const, NetValidate)
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMek_Character_BP_C::STATIC_BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BPGetRiderUnboardLocation");

	AMek_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMek_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.BlueprintCanRiderAttack");

	AMek_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mek_Character_BP.Mek_Character_BP_C.UserConstructionScript
// ()

void AMek_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.UserConstructionScript");

	AMek_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStartHover
// ()

void AMek_Character_BP_C::ServerRequestStartHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStartHover");

	AMek_Character_BP_C_ServerRequestStartHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStopHover
// ()

void AMek_Character_BP_C::ServerRequestStopHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestStopHover");

	AMek_Character_BP_C_ServerRequestStopHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiStartHover
// ()

void AMek_Character_BP_C::MultiStartHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiStartHover");

	AMek_Character_BP_C_MultiStartHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiStopHover
// ()

void AMek_Character_BP_C::MultiStopHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiStopHover");

	AMek_Character_BP_C_MultiStopHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.PlayHoverStartVFX
// ()

void AMek_Character_BP_C::PlayHoverStartVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.PlayHoverStartVFX");

	AMek_Character_BP_C_PlayHoverStartVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawDirectionVector
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          VertOffset                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiDebugDrawDirectionVector(const struct FVector& Direction, float VertOffset, const struct FLinearColor& Color, float Length, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawDirectionVector");

	AMek_Character_BP_C_MultiDebugDrawDirectionVector_Params params;
	params.Direction = Direction;
	params.VertOffset = VertOffset;
	params.Color = Color;
	params.Length = Length;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdateInputDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ServerUpdateInputDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdateInputDirection");

	AMek_Character_BP_C_ServerUpdateInputDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ForceStopHover
// ()

void AMek_Character_BP_C::ForceStopHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ForceStopHover");

	AMek_Character_BP_C_ForceStopHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateHoverParams
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasHoverTarget                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HoverTarget                    (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiUpdateHoverParams(const struct FVector& Velocity, bool HasHoverTarget, const struct FVector& HoverTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateHoverParams");

	AMek_Character_BP_C_MultiUpdateHoverParams_Params params;
	params.Velocity = Velocity;
	params.HasHoverTarget = HasHoverTarget;
	params.HoverTarget = HoverTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawLine
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiDebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float Duration, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawLine");

	AMek_Character_BP_C_MultiDebugDrawLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawHitResult
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm)
// struct FLinearColor            NoHitColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            CollisionColor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitSize                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiDebugDrawHitResult(const struct FHitResult& Hit, const struct FLinearColor& NoHitColor, const struct FLinearColor& CollisionColor, float Duration, float Thickness, float HitSize, const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiDebugDrawHitResult");

	AMek_Character_BP_C_MultiDebugDrawHitResult_Params params;
	params.Hit = Hit;
	params.NoHitColor = NoHitColor;
	params.CollisionColor = CollisionColor;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.HitSize = HitSize;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerSetTargetingMode
// ()
// Parameters:
// bool                           IsTargeting                    (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ServerSetTargetingMode(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerSetTargetingMode");

	AMek_Character_BP_C_ServerSetTargetingMode_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateTargetingMode
// ()
// Parameters:
// bool                           IsTargeting                    (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiUpdateTargetingMode(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdateTargetingMode");

	AMek_Character_BP_C_MultiUpdateTargetingMode_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.OnSwordHit
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm)
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::OnSwordHit(const struct FHitResult& Hit, const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.OnSwordHit");

	AMek_Character_BP_C_OnSwordHit_Params params;
	params.Hit = Hit;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiOnSwordHit
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiOnSwordHit(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiOnSwordHit");

	AMek_Character_BP_C_MultiOnSwordHit_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiHoverJetsDamagedTarget
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiHoverJetsDamagedTarget(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiHoverJetsDamagedTarget");

	AMek_Character_BP_C_MultiHoverJetsDamagedTarget_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerActivateBackpack
// ()

void AMek_Character_BP_C::ServerActivateBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerActivateBackpack");

	AMek_Character_BP_C_ServerActivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdatePistolAimDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ServerUpdatePistolAimDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerUpdatePistolAimDirection");

	AMek_Character_BP_C_ServerUpdatePistolAimDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestSwordAttackCombo
// ()

void AMek_Character_BP_C::ServerRequestSwordAttackCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestSwordAttackCombo");

	AMek_Character_BP_C_ServerRequestSwordAttackCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.DoDelayedSwordCombo
// ()

void AMek_Character_BP_C::DoDelayedSwordCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.DoDelayedSwordCombo");

	AMek_Character_BP_C_DoDelayedSwordCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiOnMekDestroyed
// ()

void AMek_Character_BP_C::MultiOnMekDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiOnMekDestroyed");

	AMek_Character_BP_C_MultiOnMekDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestTransform
// ()

void AMek_Character_BP_C::ServerRequestTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestTransform");

	AMek_Character_BP_C_ServerRequestTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdatePistolAimDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::MultiUpdatePistolAimDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiUpdatePistolAimDirection");

	AMek_Character_BP_C_MultiUpdatePistolAimDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.OnPistolFiredProjectile
// ()

void AMek_Character_BP_C::OnPistolFiredProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.OnPistolFiredProjectile");

	AMek_Character_BP_C_OnPistolFiredProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ClientShowHUDNotification
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ClientShowHUDNotification(const class FString& Message, float Duration, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ClientShowHUDNotification");

	AMek_Character_BP_C_ClientShowHUDNotification_Params params;
	params.Message = Message;
	params.Duration = Duration;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieMulti
// ()

void AMek_Character_BP_C::GetReadyToDieMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieMulti");

	AMek_Character_BP_C_GetReadyToDieMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.EnableInputMulti
// ()
// Parameters:
// bool                           NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::EnableInputMulti(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.EnableInputMulti");

	AMek_Character_BP_C_EnableInputMulti_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelMegaMekTransform
// ()

void AMek_Character_BP_C::ServerRequestCancelMegaMekTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelMegaMekTransform");

	AMek_Character_BP_C_ServerRequestCancelMegaMekTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.SetBackpackMalfunction
// ()
// Parameters:
// bool                           DisableBackpack                (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::SetBackpackMalfunction(bool DisableBackpack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.SetBackpackMalfunction");

	AMek_Character_BP_C_SetBackpackMalfunction_Params params;
	params.DisableBackpack = DisableBackpack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ReceiveBeginPlay
// ()

void AMek_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ReceiveBeginPlay");

	AMek_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.CancelSwordCombo
// ()

void AMek_Character_BP_C::CancelSwordCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.CancelSwordCombo");

	AMek_Character_BP_C_CancelSwordCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelCombo
// ()

void AMek_Character_BP_C::ServerRequestCancelCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ServerRequestCancelCombo");

	AMek_Character_BP_C_ServerRequestCancelCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ClientShowEmptyFuelNotification
// ()

void AMek_Character_BP_C::ClientShowEmptyFuelNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ClientShowEmptyFuelNotification");

	AMek_Character_BP_C_ClientShowEmptyFuelNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieSkip
// ()

void AMek_Character_BP_C::GetReadyToDieSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.GetReadyToDieSkip");

	AMek_Character_BP_C_GetReadyToDieSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.MultiSyncBackpackColorization
// ()

void AMek_Character_BP_C::MultiSyncBackpackColorization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.MultiSyncBackpackColorization");

	AMek_Character_BP_C_MultiSyncBackpackColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mek_Character_BP.Mek_Character_BP_C.ExecuteUbergraph_Mek_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMek_Character_BP_C::ExecuteUbergraph_Mek_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP.Mek_Character_BP_C.ExecuteUbergraph_Mek_Character_BP");

	AMek_Character_BP_C_ExecuteUbergraph_Mek_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
