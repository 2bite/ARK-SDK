// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnSyncColorization
// ()

void ABuff_MekBackpack_Base_C::OnSyncColorization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnSyncColorization");

	ABuff_MekBackpack_Base_C_OnSyncColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifySetRider
// ()
// Parameters:
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::NotifySetRider(class AShooterCharacter* Rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifySetRider");

	ABuff_MekBackpack_Base_C_NotifySetRider_Params params;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.RestoreBackpackSaveData
// ()
// Parameters:
// struct FMekBackpackData        SaveData                       (Parm)

void ABuff_MekBackpack_Base_C::RestoreBackpackSaveData(const struct FMekBackpackData& SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.RestoreBackpackSaveData");

	ABuff_MekBackpack_Base_C_RestoreBackpackSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetBackpackSaveData
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMekBackpackData        Data                           (Parm, OutParm)

void ABuff_MekBackpack_Base_C::STATIC_GetBackpackSaveData(struct FMekBackpackData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetBackpackSaveData");

	ABuff_MekBackpack_Base_C_GetBackpackSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyInventoryChange
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ItemAdded                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ItemEquipped                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::NotifyInventoryChange(class UPrimalItem* Item, bool ItemAdded, bool ItemEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyInventoryChange");

	ABuff_MekBackpack_Base_C_NotifyInventoryChange_Params params;
	params.Item = Item;
	params.ItemAdded = ItemAdded;
	params.ItemEquipped = ItemEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPActivated");

	ABuff_MekBackpack_Base_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.SetBackpackMalfunctioned
// ()
// Parameters:
// bool                           IsBackpackDisabled             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::SetBackpackMalfunctioned(bool IsBackpackDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.SetBackpackMalfunctioned");

	ABuff_MekBackpack_Base_C_SetBackpackMalfunctioned_Params params;
	params.IsBackpackDisabled = IsBackpackDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyActivateBackpack
// ()

void ABuff_MekBackpack_Base_C::NotifyActivateBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyActivateBackpack");

	ABuff_MekBackpack_Base_C_NotifyActivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OverrideTurnInPlaceSpeed
// ()
// Parameters:
// float                          DefaultSpeed                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          newSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::OverrideTurnInPlaceSpeed(float DefaultSpeed, float* newSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OverrideTurnInPlaceSpeed");

	ABuff_MekBackpack_Base_C_OverrideTurnInPlaceSpeed_Params params;
	params.DefaultSpeed = DefaultSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newSpeed != nullptr)
		*newSpeed = params.newSpeed;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopAttack
// ()

void ABuff_MekBackpack_Base_C::NotifyStopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopAttack");

	ABuff_MekBackpack_Base_C_NotifyStopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::NotifyStartAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartAttack");

	ABuff_MekBackpack_Base_C_NotifyStartAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowHurtAnim
// ()
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::AllowHurtAnim(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowHurtAnim");

	ABuff_MekBackpack_Base_C_AllowHurtAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowTargeting
// ()
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::AllowTargeting(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowTargeting");

	ABuff_MekBackpack_Base_C_AllowTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopHover
// ()

void ABuff_MekBackpack_Base_C::NotifyStopHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopHover");

	ABuff_MekBackpack_Base_C_NotifyStopHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartHover
// ()

void ABuff_MekBackpack_Base_C::NotifyStartHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartHover");

	ABuff_MekBackpack_Base_C_NotifyStartHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekHover
// ()
// Parameters:
// bool                           CanHover                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::AllowMekHover(bool* CanHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekHover");

	ABuff_MekBackpack_Base_C_AllowMekHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanHover != nullptr)
		*CanHover = params.CanHover;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopTargeting
// ()

void ABuff_MekBackpack_Base_C::NotifyStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopTargeting");

	ABuff_MekBackpack_Base_C_NotifyStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartTargeting
// ()

void ABuff_MekBackpack_Base_C::NotifyStartTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartTargeting");

	ABuff_MekBackpack_Base_C_NotifyStartTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnAnimNotifyEvent
// ()
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::OnAnimNotifyEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnAnimNotifyEvent");

	ABuff_MekBackpack_Base_C_OnAnimNotifyEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekPistol
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::AllowMekPistol(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekPistol");

	ABuff_MekBackpack_Base_C_AllowMekPistol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekSword
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::AllowMekSword(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekSword");

	ABuff_MekBackpack_Base_C_AllowMekSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackAttack
// ()

void ABuff_MekBackpack_Base_C::OnBackpackAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackAttack");

	ABuff_MekBackpack_Base_C_OnBackpackAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPDeactivated");

	ABuff_MekBackpack_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetMek
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AMek_Character_BP_C*     MekChar                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::GetMek(bool* IsValid, class AMek_Character_BP_C** MekChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetMek");

	ABuff_MekBackpack_Base_C_GetMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (MekChar != nullptr)
		*MekChar = params.MekChar;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.IsBackpackActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::IsBackpackActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.IsBackpackActive");

	ABuff_MekBackpack_Base_C_IsBackpackActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanDeactivateBackpack
// ()
// Parameters:
// bool                           CanDeactivate                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::CanDeactivateBackpack(bool* CanDeactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanDeactivateBackpack");

	ABuff_MekBackpack_Base_C_CanDeactivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDeactivate != nullptr)
		*CanDeactivate = params.CanDeactivate;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanActivateBackpack
// ()
// Parameters:
// bool                           CanActivate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  FailureMessage                 (Parm, OutParm, ZeroConstructor)

void ABuff_MekBackpack_Base_C::CanActivateBackpack(bool* CanActivate, class FString* FailureMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanActivateBackpack");

	ABuff_MekBackpack_Base_C_CanActivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanActivate != nullptr)
		*CanActivate = params.CanActivate;
	if (FailureMessage != nullptr)
		*FailureMessage = params.FailureMessage;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackDeactivated
// ()

void ABuff_MekBackpack_Base_C::OnBackpackDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackDeactivated");

	ABuff_MekBackpack_Base_C_OnBackpackDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackActivated
// ()

void ABuff_MekBackpack_Base_C::OnBackpackActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackActivated");

	ABuff_MekBackpack_Base_C_OnBackpackActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.UserConstructionScript
// ()

void ABuff_MekBackpack_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.UserConstructionScript");

	ABuff_MekBackpack_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.ExecuteUbergraph_Buff_MekBackpack_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Base_C::ExecuteUbergraph_Buff_MekBackpack_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.ExecuteUbergraph_Buff_MekBackpack_Base");

	ABuff_MekBackpack_Base_C_ExecuteUbergraph_Buff_MekBackpack_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
