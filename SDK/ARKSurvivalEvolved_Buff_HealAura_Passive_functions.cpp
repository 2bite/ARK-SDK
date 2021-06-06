// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HealAura_Passive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.StartHealing
// ()

void ABuff_HealAura_Passive_C::StartHealing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.StartHealing");

	ABuff_HealAura_Passive_C_StartHealing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.Activate Healing
// ()

void ABuff_HealAura_Passive_C::Activate_Healing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.Activate Healing");

	ABuff_HealAura_Passive_C_Activate_Healing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.HealCharacter
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_Passive_C::HealCharacter(class APrimalCharacter** Character, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.HealCharacter");

	ABuff_HealAura_Passive_C_HealCharacter_Params params;
	params.Character = Character;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.UserConstructionScript
// ()

void ABuff_HealAura_Passive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.UserConstructionScript");

	ABuff_HealAura_Passive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ReceiveBeginPlay
// ()

void ABuff_HealAura_Passive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ReceiveBeginPlay");

	ABuff_HealAura_Passive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.TriggerDelayedHealing
// ()

void ABuff_HealAura_Passive_C::TriggerDelayedHealing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.TriggerDelayedHealing");

	ABuff_HealAura_Passive_C_TriggerDelayedHealing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ExecuteUbergraph_Buff_HealAura_Passive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_Passive_C::ExecuteUbergraph_Buff_HealAura_Passive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ExecuteUbergraph_Buff_HealAura_Passive");

	ABuff_HealAura_Passive_C_ExecuteUbergraph_Buff_HealAura_Passive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
