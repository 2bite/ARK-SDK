// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeManager_Xenomorph_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.AddChargeSource
// ()
// Parameters:
// class ABuff_ChargeEmitter_C**  Source                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Xenomorph_C::AddChargeSource(class ABuff_ChargeEmitter_C** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.AddChargeSource");

	ABuff_ChargeManager_Xenomorph_C_AddChargeSource_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.OnChargeEvent
// ()

void ABuff_ChargeManager_Xenomorph_C::OnChargeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.OnChargeEvent");

	ABuff_ChargeManager_Xenomorph_C_OnChargeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.CanReceive Charge
// ()
// Parameters:
// bool                           canReceive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Xenomorph_C::CanReceive_Charge(bool* canReceive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.CanReceive Charge");

	ABuff_ChargeManager_Xenomorph_C_CanReceive_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canReceive != nullptr)
		*canReceive = params.canReceive;
}


// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.UserConstructionScript
// ()

void ABuff_ChargeManager_Xenomorph_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.UserConstructionScript");

	ABuff_ChargeManager_Xenomorph_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.ExecuteUbergraph_Buff_ChargeManager_Xenomorph
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Xenomorph_C::ExecuteUbergraph_Buff_ChargeManager_Xenomorph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.ExecuteUbergraph_Buff_ChargeManager_Xenomorph");

	ABuff_ChargeManager_Xenomorph_C_ExecuteUbergraph_Buff_ChargeManager_Xenomorph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
