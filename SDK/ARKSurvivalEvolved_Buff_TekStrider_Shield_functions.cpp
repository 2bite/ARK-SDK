// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Shield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Deactivate
// ()

void ABuff_TekStrider_Shield_C::Restrict_Doubletap_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Deactivate");

	ABuff_TekStrider_Shield_C_Restrict_Doubletap_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Activate
// ()

void ABuff_TekStrider_Shield_C::Restrict_Doubletap_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Activate");

	ABuff_TekStrider_Shield_C_Restrict_Doubletap_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Is Ai Controlled
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::Is_Ai_Controlled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Is Ai Controlled");

	ABuff_TekStrider_Shield_C_Is_Ai_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.toggle active on ai
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::toggle_active_on_ai(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.toggle active on ai");

	ABuff_TekStrider_Shield_C_toggle_active_on_ai_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BuffTickServer");

	ABuff_TekStrider_Shield_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPGetHUDElements
// (NetReliable, NetRequest, Exec, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekStrider_Shield_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPGetHUDElements");

	ABuff_TekStrider_Shield_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.can activate
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::can_activate(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.can activate");

	ABuff_TekStrider_Shield_C_can_activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Get Dynamic Mat
// ()
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ABuff_TekStrider_Shield_C::Get_Dynamic_Mat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Get Dynamic Mat");

	ABuff_TekStrider_Shield_C_Get_Dynamic_Mat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceivePointDamage
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

void ABuff_TekStrider_Shield_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceivePointDamage");

	ABuff_TekStrider_Shield_C_ReceivePointDamage_Params params;
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


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield
// ()

void ABuff_TekStrider_Shield_C::deactivate_shield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield");

	ABuff_TekStrider_Shield_C_deactivate_shield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Trigger
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABuff_TekStrider_Shield_C::STATIC_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Trigger");

	ABuff_TekStrider_Shield_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveAnyDamage
// (Net, NetReliable, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveAnyDamage");

	ABuff_TekStrider_Shield_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPDeactivated");

	ABuff_TekStrider_Shield_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UpdateShieldedCharacters
// ()

void ABuff_TekStrider_Shield_C::UpdateShieldedCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UpdateShieldedCharacters");

	ABuff_TekStrider_Shield_C_UpdateShieldedCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPSetupForInstigator
// (Static, NetMulticast, MulticastDelegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPSetupForInstigator");

	ABuff_TekStrider_Shield_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UserConstructionScript
// ()

void ABuff_TekStrider_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UserConstructionScript");

	ABuff_TekStrider_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__FinishedFunc
// ()

void ABuff_TekStrider_Shield_C::forward_activate_shield_vfx__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__FinishedFunc");

	ABuff_TekStrider_Shield_C_forward_activate_shield_vfx__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__UpdateFunc
// ()

void ABuff_TekStrider_Shield_C::forward_activate_shield_vfx__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__UpdateFunc");

	ABuff_TekStrider_Shield_C_forward_activate_shield_vfx__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__FinishedFunc
// ()

void ABuff_TekStrider_Shield_C::reverse_activate_shield_vfx__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__FinishedFunc");

	ABuff_TekStrider_Shield_C_reverse_activate_shield_vfx__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__UpdateFunc
// ()

void ABuff_TekStrider_Shield_C::reverse_activate_shield_vfx__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__UpdateFunc");

	ABuff_TekStrider_Shield_C_reverse_activate_shield_vfx__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_ActivateShield
// ()
// Parameters:
// float                          durability                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::Multicast_ActivateShield(float durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_ActivateShield");

	ABuff_TekStrider_Shield_C_Multicast_ActivateShield_Params params;
	params.durability = durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_DeactivateShield
// ()
// Parameters:
// bool                           ForceDeactivate                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::Multicast_DeactivateShield(bool ForceDeactivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_DeactivateShield");

	ABuff_TekStrider_Shield_C_Multicast_DeactivateShield_Params params;
	params.ForceDeactivate = ForceDeactivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Activate Shield VFX
// ()

void ABuff_TekStrider_Shield_C::Activate_Shield_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Activate Shield VFX");

	ABuff_TekStrider_Shield_C_Activate_Shield_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield vfx
// ()

void ABuff_TekStrider_Shield_C::deactivate_shield_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield vfx");

	ABuff_TekStrider_Shield_C_deactivate_shield_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Spawn Particle At Hit Point
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hit_normal                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::Spawn_Particle_At_Hit_Point(const struct FVector& Location, const struct FVector& hit_normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Spawn Particle At Hit Point");

	ABuff_TekStrider_Shield_C_Spawn_Particle_At_Hit_Point_Params params;
	params.Location = Location;
	params.hit_normal = hit_normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.adjust shield color
// ()
// Parameters:
// float                          durability                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::adjust_shield_color(float durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.adjust shield color");

	ABuff_TekStrider_Shield_C_adjust_shield_color_Params params;
	params.durability = durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveBeginPlay
// ()

void ABuff_TekStrider_Shield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveBeginPlay");

	ABuff_TekStrider_Shield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ExecuteUbergraph_Buff_TekStrider_Shield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Shield_C::ExecuteUbergraph_Buff_TekStrider_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ExecuteUbergraph_Buff_TekStrider_Shield");

	ABuff_TekStrider_Shield_C_ExecuteUbergraph_Buff_TekStrider_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
