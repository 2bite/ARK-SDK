// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_MissilePod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetBackpackSaveData
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// struct FMekBackpackData        Data                           (Parm, OutParm)

void ABuff_MekBackpack_MissilePod_C::STATIC_GetBackpackSaveData(struct FMekBackpackData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetBackpackSaveData");

	ABuff_MekBackpack_MissilePod_C_GetBackpackSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.RestoreBackpackSaveData
// ()
// Parameters:
// struct FMekBackpackData*       SaveData                       (Parm)

void ABuff_MekBackpack_MissilePod_C::RestoreBackpackSaveData(struct FMekBackpackData* SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.RestoreBackpackSaveData");

	ABuff_MekBackpack_MissilePod_C_RestoreBackpackSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyInventoryChange
// ()
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ItemAdded                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ItemEquipped                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::NotifyInventoryChange(class UPrimalItem** Item, bool* ItemAdded, bool* ItemEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyInventoryChange");

	ABuff_MekBackpack_MissilePod_C_NotifyInventoryChange_Params params;
	params.Item = Item;
	params.ItemAdded = ItemAdded;
	params.ItemEquipped = ItemEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetHUDProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_MekBackpack_MissilePod_C::GetHUDProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetHUDProgressBarPercent");

	ABuff_MekBackpack_MissilePod_C_GetHUDProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPActivated");

	ABuff_MekBackpack_MissilePod_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnRep_MissilePodMalfunctioned
// (Exec, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, Const)

void ABuff_MekBackpack_MissilePod_C::OnRep_MissilePodMalfunctioned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnRep_MissilePodMalfunctioned");

	ABuff_MekBackpack_MissilePod_C_OnRep_MissilePodMalfunctioned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPDrawBuffStatusHUD");

	ABuff_MekBackpack_MissilePod_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.TryUseAmmo
// ()
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::TryUseAmmo(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.TryUseAmmo");

	ABuff_MekBackpack_MissilePod_C_TryUseAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetCurrentAmmo
// ()
// Parameters:
// int                            AmmoQuantity                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::GetCurrentAmmo(int* AmmoQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetCurrentAmmo");

	ABuff_MekBackpack_MissilePod_C_GetCurrentAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoQuantity != nullptr)
		*AmmoQuantity = params.AmmoQuantity;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetFireDirection
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::GetFireDirection(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetFireDirection");

	ABuff_MekBackpack_MissilePod_C_GetFireDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.AllowMekHover
// ()
// Parameters:
// bool                           CanHover                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::AllowMekHover(bool* CanHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.AllowMekHover");

	ABuff_MekBackpack_MissilePod_C_AllowMekHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanHover != nullptr)
		*CanHover = params.CanHover;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BuffTickClient");

	ABuff_MekBackpack_MissilePod_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.IsBackpackActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::IsBackpackActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.IsBackpackActive");

	ABuff_MekBackpack_MissilePod_C_IsBackpackActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.UserConstructionScript
// ()

void ABuff_MekBackpack_MissilePod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.UserConstructionScript");

	ABuff_MekBackpack_MissilePod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStartTargeting
// ()

void ABuff_MekBackpack_MissilePod_C::NotifyStartTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStartTargeting");

	ABuff_MekBackpack_MissilePod_C_NotifyStartTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStopTargeting
// ()

void ABuff_MekBackpack_MissilePod_C::NotifyStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStopTargeting");

	ABuff_MekBackpack_MissilePod_C_NotifyStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ServerRequestAttack
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::ServerRequestAttack(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ServerRequestAttack");

	ABuff_MekBackpack_MissilePod_C_ServerRequestAttack_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyActivateBackpack
// ()

void ABuff_MekBackpack_MissilePod_C::NotifyActivateBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyActivateBackpack");

	ABuff_MekBackpack_MissilePod_C_NotifyActivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnAnimNotifyEvent
// ()
// Parameters:
// struct FName*                  EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::OnAnimNotifyEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnAnimNotifyEvent");

	ABuff_MekBackpack_MissilePod_C_OnAnimNotifyEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SetBackpackMalfunctioned
// ()
// Parameters:
// bool*                          IsBackpackDisabled             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::SetBackpackMalfunctioned(bool* IsBackpackDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SetBackpackMalfunctioned");

	ABuff_MekBackpack_MissilePod_C_SetBackpackMalfunctioned_Params params;
	params.IsBackpackDisabled = IsBackpackDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.MultiUpdateAmmoQuantity
// ()
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::MultiUpdateAmmoQuantity(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.MultiUpdateAmmoQuantity");

	ABuff_MekBackpack_MissilePod_C_MultiUpdateAmmoQuantity_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SyncClientAmmo
// ()

void ABuff_MekBackpack_MissilePod_C::SyncClientAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SyncClientAmmo");

	ABuff_MekBackpack_MissilePod_C_SyncClientAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ExecuteUbergraph_Buff_MekBackpack_MissilePod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_MissilePod_C::ExecuteUbergraph_Buff_MekBackpack_MissilePod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ExecuteUbergraph_Buff_MekBackpack_MissilePod");

	ABuff_MekBackpack_MissilePod_C_ExecuteUbergraph_Buff_MekBackpack_MissilePod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
