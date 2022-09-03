// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Thornmail_Poison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.CalculateDoTDamage
// ()
// Parameters:
// float*                         TimeSinceLastDoT               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Poison_C::CalculateDoTDamage(float* TimeSinceLastDoT, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.CalculateDoTDamage");

	ABuff_Thornmail_Poison_C_CalculateDoTDamage_Params params;
	params.TimeSinceLastDoT = TimeSinceLastDoT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.UserConstructionScript
// ()

void ABuff_Thornmail_Poison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.UserConstructionScript");

	ABuff_Thornmail_Poison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.ExecuteUbergraph_Buff_Thornmail_Poison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Poison_C::ExecuteUbergraph_Buff_Thornmail_Poison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.ExecuteUbergraph_Buff_Thornmail_Poison");

	ABuff_Thornmail_Poison_C_ExecuteUbergraph_Buff_Thornmail_Poison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
