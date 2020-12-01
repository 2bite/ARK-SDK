// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterWeapon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.IsWeaponFiring
// ()
// Parameters:
// bool                           IsFiring                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_C::IsWeaponFiring(bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.IsWeaponFiring");

	ABuff_ChargeEmitterWeapon_C_IsWeaponFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFiring != nullptr)
		*IsFiring = params.IsFiring;
}


// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.InitializeEmitter
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, Const, NetValidate)

void ABuff_ChargeEmitterWeapon_C::InitializeEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.InitializeEmitter");

	ABuff_ChargeEmitterWeapon_C_InitializeEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.GetEmitterForwardVector
// ()
// Parameters:
// struct FVector                 ForwardVector                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_C::GetEmitterForwardVector(struct FVector* ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.GetEmitterForwardVector");

	ABuff_ChargeEmitterWeapon_C_GetEmitterForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
}


// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.CanEmitCharge
// ()
// Parameters:
// bool                           canEmit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_C::CanEmitCharge(bool* canEmit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.CanEmitCharge");

	ABuff_ChargeEmitterWeapon_C_CanEmitCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEmit != nullptr)
		*canEmit = params.canEmit;
}


// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.UserConstructionScript
// ()

void ABuff_ChargeEmitterWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.UserConstructionScript");

	ABuff_ChargeEmitterWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugVector
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_C::DebugVector(const struct FVector& NewParam, const struct FVector& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugVector");

	ABuff_ChargeEmitterWeapon_C_DebugVector_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugSphere
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_C::DebugSphere(const struct FVector& NewParam, const struct FLinearColor& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugSphere");

	ABuff_ChargeEmitterWeapon_C_DebugSphere_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_C::ExecuteUbergraph_Buff_ChargeEmitterWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon");

	ABuff_ChargeEmitterWeapon_C_ExecuteUbergraph_Buff_ChargeEmitterWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
