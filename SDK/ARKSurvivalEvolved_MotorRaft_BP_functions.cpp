// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MotorRaft_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MotorRaft_BP.MotorRaft_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMotorRaft_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPCanCryo");

	AMotorRaft_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPPlayDying
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMotorRaft_BP_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPPlayDying");

	AMotorRaft_BP_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPAllowMovementSound
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMotorRaft_BP_C::BPAllowMovementSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPAllowMovementSound");

	AMotorRaft_BP_C_BPAllowMovementSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPUnstasis
// ()

void AMotorRaft_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPUnstasis");

	AMotorRaft_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMotorRaft_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPTryMultiUse");

	AMotorRaft_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AMotorRaft_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPGetMultiUseEntries");

	AMotorRaft_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function MotorRaft_BP.MotorRaft_BP_C.ReceiveBeginPlay
// ()

void AMotorRaft_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.ReceiveBeginPlay");

	AMotorRaft_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.LoadFuel
// ()

void AMotorRaft_BP_C::LoadFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.LoadFuel");

	AMotorRaft_BP_C_LoadFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.TurnOff
// ()

void AMotorRaft_BP_C::TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.TurnOff");

	AMotorRaft_BP_C_TurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.TurnOn
// ()

void AMotorRaft_BP_C::TurnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.TurnOn");

	AMotorRaft_BP_C_TurnOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPTimerNonDedicated
// ()

void AMotorRaft_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPTimerNonDedicated");

	AMotorRaft_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.ConsumeFuel
// ()
// Parameters:
// float                          AmountPercent                  (Parm, ZeroConstructor, IsPlainOldData)

void AMotorRaft_BP_C::ConsumeFuel(float AmountPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.ConsumeFuel");

	AMotorRaft_BP_C_ConsumeFuel_Params params;
	params.AmountPercent = AmountPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.CheckForIdleFuelConsumption
// ()

void AMotorRaft_BP_C::CheckForIdleFuelConsumption()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.CheckForIdleFuelConsumption");

	AMotorRaft_BP_C_CheckForIdleFuelConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPTimerServer
// ()

void AMotorRaft_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPTimerServer");

	AMotorRaft_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AMotorRaft_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BPNotifyInventoryItemChange");

	AMotorRaft_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.BlueprintDrawFloatingHUD
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AMotorRaft_BP_C::STATIC_BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.BlueprintDrawFloatingHUD");

	AMotorRaft_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMotorRaft_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.ReceiveAnyDamage");

	AMotorRaft_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.UserConstructionScript
// ()

void AMotorRaft_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.UserConstructionScript");

	AMotorRaft_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.DoPlayKnockAnimation
// ()
// Parameters:
// int                            KnockDirectionIndex            (Parm, ZeroConstructor, IsPlainOldData)

void AMotorRaft_BP_C::DoPlayKnockAnimation(int KnockDirectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.DoPlayKnockAnimation");

	AMotorRaft_BP_C_DoPlayKnockAnimation_Params params;
	params.KnockDirectionIndex = KnockDirectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOn
// ()

void AMotorRaft_BP_C::NetDoTurnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOn");

	AMotorRaft_BP_C_NetDoTurnOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOff
// ()

void AMotorRaft_BP_C::NetDoTurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOff");

	AMotorRaft_BP_C_NetDoTurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotorRaft_BP.MotorRaft_BP_C.ExecuteUbergraph_MotorRaft_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMotorRaft_BP_C::ExecuteUbergraph_MotorRaft_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotorRaft_BP.MotorRaft_BP_C.ExecuteUbergraph_MotorRaft_BP");

	AMotorRaft_BP_C_ExecuteUbergraph_MotorRaft_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
