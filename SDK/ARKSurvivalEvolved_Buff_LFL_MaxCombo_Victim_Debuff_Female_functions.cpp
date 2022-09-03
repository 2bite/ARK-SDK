// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFL_MaxCombo_Victim_Debuff_Female_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.CalculateDoTDamage
// ()
// Parameters:
// float*                         TimeSinceLastDoT               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_LFL_MaxCombo_Victim_Debuff_Female_C::CalculateDoTDamage(float* TimeSinceLastDoT, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.CalculateDoTDamage");

	ABuff_LFL_MaxCombo_Victim_Debuff_Female_C_CalculateDoTDamage_Params params;
	params.TimeSinceLastDoT = TimeSinceLastDoT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.UserConstructionScript
// ()

void ABuff_LFL_MaxCombo_Victim_Debuff_Female_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.UserConstructionScript");

	ABuff_LFL_MaxCombo_Victim_Debuff_Female_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LFL_MaxCombo_Victim_Debuff_Female_C::ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C.ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female");

	ABuff_LFL_MaxCombo_Victim_Debuff_Female_C_ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
