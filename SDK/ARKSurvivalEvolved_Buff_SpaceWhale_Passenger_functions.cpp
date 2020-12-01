// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceWhale_Passenger_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ReceiveBeginPlay
// ()

void ABuff_SpaceWhale_Passenger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ReceiveBeginPlay");

	ABuff_SpaceWhale_Passenger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStopFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::BPHandleOnStopFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStopFire");

	ABuff_SpaceWhale_Passenger_C_BPHandleOnStopFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStartFire");

	ABuff_SpaceWhale_Passenger_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickClient");

	ABuff_SpaceWhale_Passenger_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SpaceWhale_Passenger_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPCheckPreventInput");

	ABuff_SpaceWhale_Passenger_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetFireTransform
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Heading                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FireLeft                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::GetFireTransform(struct FVector* Location, struct FVector* Heading, bool* FireLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetFireTransform");

	ABuff_SpaceWhale_Passenger_C_GetFireTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Heading != nullptr)
		*Heading = params.Heading;
	if (FireLeft != nullptr)
		*FireLeft = params.FireLeft;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsElectricalStormActive
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::IsElectricalStormActive(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsElectricalStormActive");

	ABuff_SpaceWhale_Passenger_C_IsElectricalStormActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetSocketClampDelta
// ()
// Parameters:
// float                          OutSocketClampDelta            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::GetSocketClampDelta(float* OutSocketClampDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetSocketClampDelta");

	ABuff_SpaceWhale_Passenger_C_GetSocketClampDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketClampDelta != nullptr)
		*OutSocketClampDelta = params.OutSocketClampDelta;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPSetupForInstigator");

	ABuff_SpaceWhale_Passenger_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPDrawBuffStatusHUD");

	ABuff_SpaceWhale_Passenger_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsAllowedToFire
// (NetReliable, Exec, Native, NetResponse, Protected, Delegate, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           bAllowed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::IsAllowedToFire(bool* bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsAllowedToFire");

	ABuff_SpaceWhale_Passenger_C_IsAllowedToFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowed != nullptr)
		*bAllowed = params.bAllowed;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.SetTargeting
// ()
// Parameters:
// bool                           bTargetingEnabled              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::SetTargeting(bool bTargetingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.SetTargeting");

	ABuff_SpaceWhale_Passenger_C_SetTargeting_Params params;
	params.bTargetingEnabled = bTargetingEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.LocalDoAttack
// (NetReliable, Static, Protected, Delegate, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           bDidFire                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::STATIC_LocalDoAttack(bool* bDidFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.LocalDoAttack");

	ABuff_SpaceWhale_Passenger_C_LocalDoAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDidFire != nullptr)
		*bDidFire = params.bDidFire;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetTekSaddleItem
// ()
// Parameters:
// class UPrimalItem*             TekSaddleItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::GetTekSaddleItem(class UPrimalItem** TekSaddleItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetTekSaddleItem");

	ABuff_SpaceWhale_Passenger_C_GetTekSaddleItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TekSaddleItem != nullptr)
		*TekSaddleItem = params.TekSaddleItem;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.UserConstructionScript
// ()

void ABuff_SpaceWhale_Passenger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.UserConstructionScript");

	ABuff_SpaceWhale_Passenger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerDoAttack
// ()
// Parameters:
// struct FVector                 AimAtLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerSpawnAtLoc               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FireLeft                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::ServerDoAttack(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc, bool FireLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerDoAttack");

	ABuff_SpaceWhale_Passenger_C_ServerDoAttack_Params params;
	params.AimAtLoc = AimAtLoc;
	params.ServerSpawnAtLoc = ServerSpawnAtLoc;
	params.FireLeft = FireLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.DoAttack
// ()
// Parameters:
// struct FVector                 AimAtLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ServerSpawnAtLoc               (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Shooter                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FireLeft                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::DoAttack(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc, class AShooterCharacter* Shooter, bool FireLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.DoAttack");

	ABuff_SpaceWhale_Passenger_C_DoAttack_Params params;
	params.AimAtLoc = AimAtLoc;
	params.ServerSpawnAtLoc = ServerSpawnAtLoc;
	params.Shooter = Shooter;
	params.FireLeft = FireLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.CheckForItem
// ()

void ABuff_SpaceWhale_Passenger_C::CheckForItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.CheckForItem");

	ABuff_SpaceWhale_Passenger_C_CheckForItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerNotifyCurrentAimRotation
// ()
// Parameters:
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::ServerNotifyCurrentAimRotation(const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerNotifyCurrentAimRotation");

	ABuff_SpaceWhale_Passenger_C_ServerNotifyCurrentAimRotation_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ExecuteUbergraph_Buff_SpaceWhale_Passenger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhale_Passenger_C::ExecuteUbergraph_Buff_SpaceWhale_Passenger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ExecuteUbergraph_Buff_SpaceWhale_Passenger");

	ABuff_SpaceWhale_Passenger_C_ExecuteUbergraph_Buff_SpaceWhale_Passenger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
