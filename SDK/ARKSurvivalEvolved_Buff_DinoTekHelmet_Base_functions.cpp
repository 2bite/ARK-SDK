// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsElectricalStormActive
// ()
// Parameters:
// bool                           _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::IsElectricalStormActive(bool* _return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsElectricalStormActive");

	ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
// ()
// Parameters:
// float                          OutSocketClampDelta            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::GetSocketClampDelta(float* OutSocketClampDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta");

	ABuff_DinoTekHelmet_Base_C_GetSocketClampDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketClampDelta != nullptr)
		*OutSocketClampDelta = params.OutSocketClampDelta;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator");

	ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD");

	ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, BlueprintEvent, Const)
// Parameters:
// struct FVector                 AimAtLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerSpawnAtLoc               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::STATIC_IsAllowedToFire(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc, bool* bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire");

	ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params params;
	params.AimAtLoc = AimAtLoc;
	params.ServerSpawnAtLoc = ServerSpawnAtLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowed != nullptr)
		*bAllowed = params.bAllowed;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DinoTekHelmet_Base_C::HideBuffFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD");

	ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
// ()
// Parameters:
// bool                           bTargetingEnabled              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::SetTargeting(bool bTargetingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting");

	ABuff_DinoTekHelmet_Base_C_SetTargeting_Params params;
	params.bTargetingEnabled = bTargetingEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient");

	ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, BlueprintEvent, Const)
// Parameters:
// bool                           bDidAttack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::LocalDoAttack(bool* bDidAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack");

	ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDidAttack != nullptr)
		*bDidAttack = params.bDidAttack;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim
// ()
// Parameters:
// class UAnimMontage*            PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::PlayItemAnim(class UAnimMontage* PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim");

	ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
// ()
// Parameters:
// class UPrimalItem*             TekSaddleItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::GetTekSaddleItem(class UPrimalItem** TekSaddleItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem");

	ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TekSaddleItem != nullptr)
		*TekSaddleItem = params.TekSaddleItem;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.UserConstructionScript
// ()

void ABuff_DinoTekHelmet_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.UserConstructionScript");

	ABuff_DinoTekHelmet_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ActivateHelmet
// ()

void ABuff_DinoTekHelmet_Base_C::ActivateHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ActivateHelmet");

	ABuff_DinoTekHelmet_Base_C_ActivateHelmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DeactivateHelmet
// ()

void ABuff_DinoTekHelmet_Base_C::DeactivateHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DeactivateHelmet");

	ABuff_DinoTekHelmet_Base_C_DeactivateHelmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PressedAltFire
// ()

void ABuff_DinoTekHelmet_Base_C::PressedAltFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PressedAltFire");

	ABuff_DinoTekHelmet_Base_C_PressedAltFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerActivateHelmet
// ()

void ABuff_DinoTekHelmet_Base_C::DoServerActivateHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerActivateHelmet");

	ABuff_DinoTekHelmet_Base_C_DoServerActivateHelmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerDeactivateHelmet
// ()

void ABuff_DinoTekHelmet_Base_C::DoServerDeactivateHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerDeactivateHelmet");

	ABuff_DinoTekHelmet_Base_C_DoServerDeactivateHelmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
// ()
// Parameters:
// struct FVector                 AimAtLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerSpawnAtLoc               (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::ServerDoAttack(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack");

	ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params params;
	params.AimAtLoc = AimAtLoc;
	params.ServerSpawnAtLoc = ServerSpawnAtLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
// ()
// Parameters:
// struct FVector                 AimAtLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLeftSide                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerSpawnAtLoc               (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::DoAttack(const struct FVector& AimAtLoc, bool bLeftSide, const struct FVector& ServerSpawnAtLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack");

	ABuff_DinoTekHelmet_Base_C_DoAttack_Params params;
	params.AimAtLoc = AimAtLoc;
	params.bLeftSide = bLeftSide;
	params.ServerSpawnAtLoc = ServerSpawnAtLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.CheckForItem
// ()

void ABuff_DinoTekHelmet_Base_C::CheckForItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.CheckForItem");

	ABuff_DinoTekHelmet_Base_C_CheckForItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ExecuteUbergraph_Buff_DinoTekHelmet_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Base_C::ExecuteUbergraph_Buff_DinoTekHelmet_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ExecuteUbergraph_Buff_DinoTekHelmet_Base");

	ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
