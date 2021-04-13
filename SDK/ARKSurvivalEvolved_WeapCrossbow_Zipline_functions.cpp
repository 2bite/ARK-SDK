// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Zipline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ZiplineObstructionTrace
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Zipline_C::STATIC_ZiplineObstructionTrace(const struct FVector& Start, bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ZiplineObstructionTrace");

	AWeapCrossbow_Zipline_C_ZiplineObstructionTrace_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPHandleMeleeAttack
// ()

void AWeapCrossbow_Zipline_C::BPHandleMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPHandleMeleeAttack");

	AWeapCrossbow_Zipline_C_BPHandleMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.IsValidHitLocationForAttachment
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)
// bool                           IsValidHit                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Zipline_C::IsValidHitLocationForAttachment(struct FHitResult* Hit, bool* IsValidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.IsValidHitLocationForAttachment");

	AWeapCrossbow_Zipline_C_IsValidHitLocationForAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (IsValidHit != nullptr)
		*IsValidHit = params.IsValidHit;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapCrossbow_Zipline_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPWeaponCanFire");

	AWeapCrossbow_Zipline_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Get ZipProjectile Default Object
// ()
// Parameters:
// class AProjZiplineAnchor_C*    AsProjArrow_Zipline_Bolt_C     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Zipline_C::Get_ZipProjectile_Default_Object(class AProjZiplineAnchor_C** AsProjArrow_Zipline_Bolt_C)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Get ZipProjectile Default Object");

	AWeapCrossbow_Zipline_C_Get_ZipProjectile_Default_Object_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsProjArrow_Zipline_Bolt_C != nullptr)
		*AsProjArrow_Zipline_Bolt_C = params.AsProjArrow_Zipline_Bolt_C;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Update Preview Cable
// (Exec, Native, NetResponse, Public, HasOutParms, HasDefaults, BlueprintCallable, Const, NetValidate)

void AWeapCrossbow_Zipline_C::Update_Preview_Cable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Update Preview Cable");

	AWeapCrossbow_Zipline_C_Update_Preview_Cable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Zipline_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveTick");

	AWeapCrossbow_Zipline_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveDestroyed
// ()

void AWeapCrossbow_Zipline_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveDestroyed");

	AWeapCrossbow_Zipline_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.UserConstructionScript
// ()

void AWeapCrossbow_Zipline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.UserConstructionScript");

	AWeapCrossbow_Zipline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReloadNow
// ()

void AWeapCrossbow_Zipline_C::ReloadNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReloadNow");

	AWeapCrossbow_Zipline_C_ReloadNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ResetReload
// ()

void AWeapCrossbow_Zipline_C::ResetReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ResetReload");

	AWeapCrossbow_Zipline_C_ResetReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.NoPlacementNoti
// ()

void AWeapCrossbow_Zipline_C::NoPlacementNoti()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.NoPlacementNoti");

	AWeapCrossbow_Zipline_C_NoPlacementNoti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPFiredWeapon
// ()

void AWeapCrossbow_Zipline_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPFiredWeapon");

	AWeapCrossbow_Zipline_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ExecuteUbergraph_WeapCrossbow_Zipline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Zipline_C::ExecuteUbergraph_WeapCrossbow_Zipline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ExecuteUbergraph_WeapCrossbow_Zipline");

	AWeapCrossbow_Zipline_C_ExecuteUbergraph_WeapCrossbow_Zipline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
