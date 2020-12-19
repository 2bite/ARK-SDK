// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterWeapon_ChargeLantern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.IsWeaponFiring
// ()
// Parameters:
// bool                           IsFiring                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_ChargeLantern_C::IsWeaponFiring(bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.IsWeaponFiring");

	ABuff_ChargeEmitterWeapon_ChargeLantern_C_IsWeaponFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFiring != nullptr)
		*IsFiring = params.IsFiring;
}


// Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.InitializeEmitter
// ()

void ABuff_ChargeEmitterWeapon_ChargeLantern_C::InitializeEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.InitializeEmitter");

	ABuff_ChargeEmitterWeapon_ChargeLantern_C_InitializeEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.UserConstructionScript
// ()

void ABuff_ChargeEmitterWeapon_ChargeLantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.UserConstructionScript");

	ABuff_ChargeEmitterWeapon_ChargeLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterWeapon_ChargeLantern_C::ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern");

	ABuff_ChargeEmitterWeapon_ChargeLantern_C_ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
