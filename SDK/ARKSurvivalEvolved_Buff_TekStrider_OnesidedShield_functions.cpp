// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_OnesidedShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get activation charge cost
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekStrider_OnesidedShield_C::get_activation_charge_cost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get activation charge cost");

	ABuff_TekStrider_OnesidedShield_C_get_activation_charge_cost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.
// ()
// Parameters:
// float                          _1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          _2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::(float _1, float _2, float* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.");

	ABuff_TekStrider_OnesidedShield_C__Params params;
	params._1 = _1;
	params._2 = _2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.inverse map range
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeA                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeB                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Mapped_range_A__inverse_       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Mapped_range_B__inverse_       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::inverse_map_range(float Value, float InRangeA, float InRangeB, float Mapped_range_A__inverse_, float Mapped_range_B__inverse_, float* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.inverse map range");

	ABuff_TekStrider_OnesidedShield_C_inverse_map_range_Params params;
	params.Value = Value;
	params.InRangeA = InRangeA;
	params.InRangeB = InRangeB;
	params.Mapped_range_A__inverse_ = Mapped_range_A__inverse_;
	params.Mapped_range_B__inverse_ = Mapped_range_B__inverse_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Activate
// ()

void ABuff_TekStrider_OnesidedShield_C::Restrict_Doubletap_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Activate");

	ABuff_TekStrider_OnesidedShield_C_Restrict_Doubletap_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Toggle Active On Ai
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::STATIC_Toggle_Active_On_Ai(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Toggle Active On Ai");

	ABuff_TekStrider_OnesidedShield_C_Toggle_Active_On_Ai_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Ai Controlled
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::Is_Ai_Controlled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Ai Controlled");

	ABuff_TekStrider_OnesidedShield_C_Is_Ai_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BuffTickServer");

	ABuff_TekStrider_OnesidedShield_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.can activate
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::can_activate(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.can activate");

	ABuff_TekStrider_OnesidedShield_C_can_activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield loc to aiming direction
// ()

void ABuff_TekStrider_OnesidedShield_C::adjust_shield_loc_to_aiming_direction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield loc to aiming direction");

	ABuff_TekStrider_OnesidedShield_C_adjust_shield_loc_to_aiming_direction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Deactivating
// ()

void ABuff_TekStrider_OnesidedShield_C::Is_Deactivating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Deactivating");

	ABuff_TekStrider_OnesidedShield_C_Is_Deactivating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Deactivate
// ()

void ABuff_TekStrider_OnesidedShield_C::Restrict_Doubletap_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Deactivate");

	ABuff_TekStrider_OnesidedShield_C_Restrict_Doubletap_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerDoubletapped
// ()

void ABuff_TekStrider_OnesidedShield_C::TriggerDoubletapped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerDoubletapped");

	ABuff_TekStrider_OnesidedShield_C_TriggerDoubletapped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceivePointDamage");

	ABuff_TekStrider_OnesidedShield_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Dynamic Material
// ()
// Parameters:
// class UMaterialInstanceDynamic* Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::Get_Dynamic_Material(class UMaterialInstanceDynamic** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Dynamic Material");

	ABuff_TekStrider_OnesidedShield_C_Get_Dynamic_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerReleased
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ABuff_TekStrider_OnesidedShield_C::TriggerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerReleased");

	ABuff_TekStrider_OnesidedShield_C_TriggerReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get local yaw and roll
// ()
// Parameters:
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::get_local_yaw_and_roll(float* Yaw, float* Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get local yaw and roll");

	ABuff_TekStrider_OnesidedShield_C_get_local_yaw_and_roll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
	if (Roll != nullptr)
		*Roll = params.Roll;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield location
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::adjust_shield_location(class APlayerController* PC, float Yaw, float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield location");

	ABuff_TekStrider_OnesidedShield_C_adjust_shield_location_Params params;
	params.PC = PC;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPGetHUDElements
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekStrider_OnesidedShield_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPGetHUDElements");

	ABuff_TekStrider_OnesidedShield_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.timeout cancel shield
// ()

void ABuff_TekStrider_OnesidedShield_C::timeout_cancel_shield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.timeout cancel shield");

	ABuff_TekStrider_OnesidedShield_C_timeout_cancel_shield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Held Direction
// ()
// Parameters:
// struct FVector                 Held_Direction                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::Get_Held_Direction(struct FVector* Held_Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Held Direction");

	ABuff_TekStrider_OnesidedShield_C_Get_Held_Direction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Held_Direction != nullptr)
		*Held_Direction = params.Held_Direction;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_OnesidedShield_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPServerHandleNetExecCommand");

	ABuff_TekStrider_OnesidedShield_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPClientHandleNetExecCommand
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_OnesidedShield_C::STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPClientHandleNetExecCommand");

	ABuff_TekStrider_OnesidedShield_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield
// ()

void ABuff_TekStrider_OnesidedShield_C::deactivate_shield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield");

	ABuff_TekStrider_OnesidedShield_C_deactivate_shield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Trigger
// ()

void ABuff_TekStrider_OnesidedShield_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Trigger");

	ABuff_TekStrider_OnesidedShield_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceiveAnyDamage
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::STATIC_ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceiveAnyDamage");

	ABuff_TekStrider_OnesidedShield_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPDeactivated");

	ABuff_TekStrider_OnesidedShield_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPSetupForInstigator
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPSetupForInstigator");

	ABuff_TekStrider_OnesidedShield_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.UserConstructionScript
// ()

void ABuff_TekStrider_OnesidedShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.UserConstructionScript");

	ABuff_TekStrider_OnesidedShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__FinishedFunc
// ()

void ABuff_TekStrider_OnesidedShield_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__FinishedFunc");

	ABuff_TekStrider_OnesidedShield_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__UpdateFunc
// ()

void ABuff_TekStrider_OnesidedShield_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__UpdateFunc");

	ABuff_TekStrider_OnesidedShield_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__FinishedFunc
// ()

void ABuff_TekStrider_OnesidedShield_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__FinishedFunc");

	ABuff_TekStrider_OnesidedShield_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__UpdateFunc
// ()

void ABuff_TekStrider_OnesidedShield_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__UpdateFunc");

	ABuff_TekStrider_OnesidedShield_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__FinishedFunc
// ()

void ABuff_TekStrider_OnesidedShield_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__FinishedFunc");

	ABuff_TekStrider_OnesidedShield_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__UpdateFunc
// ()

void ABuff_TekStrider_OnesidedShield_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__UpdateFunc");

	ABuff_TekStrider_OnesidedShield_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_ActivateShield
// ()
// Parameters:
// float                          shield_durability              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::Multicast_ActivateShield(float shield_durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_ActivateShield");

	ABuff_TekStrider_OnesidedShield_C_Multicast_ActivateShield_Params params;
	params.shield_durability = shield_durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_DeactivateShield
// ()

void ABuff_TekStrider_OnesidedShield_C::Multicast_DeactivateShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_DeactivateShield");

	ABuff_TekStrider_OnesidedShield_C_Multicast_DeactivateShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.SetShieldRotation
// ()
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::SetShieldRotation(float Yaw, float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.SetShieldRotation");

	ABuff_TekStrider_OnesidedShield_C_SetShieldRotation_Params params;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Activate Shield VFX
// ()

void ABuff_TekStrider_OnesidedShield_C::Activate_Shield_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Activate Shield VFX");

	ABuff_TekStrider_OnesidedShield_C_Activate_Shield_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield vfx
// ()

void ABuff_TekStrider_OnesidedShield_C::deactivate_shield_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield vfx");

	ABuff_TekStrider_OnesidedShield_C_deactivate_shield_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield color
// ()
// Parameters:
// float                          durability                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::adjust_shield_color(float durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield color");

	ABuff_TekStrider_OnesidedShield_C_adjust_shield_color_Params params;
	params.durability = durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Spawn Particle At Hit Point
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Hit                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::Spawn_Particle_At_Hit_Point(const struct FVector& Location, const struct FVector& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Spawn Particle At Hit Point");

	ABuff_TekStrider_OnesidedShield_C_Spawn_Particle_At_Hit_Point_Params params;
	params.Location = Location;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ExecuteUbergraph_Buff_TekStrider_OnesidedShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_OnesidedShield_C::ExecuteUbergraph_Buff_TekStrider_OnesidedShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ExecuteUbergraph_Buff_TekStrider_OnesidedShield");

	ABuff_TekStrider_OnesidedShield_C_ExecuteUbergraph_Buff_TekStrider_OnesidedShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
