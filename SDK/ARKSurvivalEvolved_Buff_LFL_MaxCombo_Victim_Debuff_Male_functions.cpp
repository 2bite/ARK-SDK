// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFL_MaxCombo_Victim_Debuff_Male_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LFL_MaxCombo_Victim_Debuff_Male.Buff_LFL_MaxCombo_Victim_Debuff_Male_C.UserConstructionScript
// ()

void ABuff_LFL_MaxCombo_Victim_Debuff_Male_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Male.Buff_LFL_MaxCombo_Victim_Debuff_Male_C.UserConstructionScript");

	ABuff_LFL_MaxCombo_Victim_Debuff_Male_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFL_MaxCombo_Victim_Debuff_Male.Buff_LFL_MaxCombo_Victim_Debuff_Male_C.ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Male
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LFL_MaxCombo_Victim_Debuff_Male_C::ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_MaxCombo_Victim_Debuff_Male.Buff_LFL_MaxCombo_Victim_Debuff_Male_C.ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Male");

	ABuff_LFL_MaxCombo_Victim_Debuff_Male_C_ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
