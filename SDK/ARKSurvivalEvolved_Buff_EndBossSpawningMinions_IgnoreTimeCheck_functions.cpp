// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossSpawningMinions_IgnoreTimeCheck_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_IgnoreTimeCheck_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C.BPDeactivated");

	ABuff_EndBossSpawningMinions_IgnoreTimeCheck_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C.UserConstructionScript
// ()

void ABuff_EndBossSpawningMinions_IgnoreTimeCheck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C.UserConstructionScript");

	ABuff_EndBossSpawningMinions_IgnoreTimeCheck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C.ExecuteUbergraph_Buff_EndBossSpawningMinions_IgnoreTimeCheck
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_IgnoreTimeCheck_C::ExecuteUbergraph_Buff_EndBossSpawningMinions_IgnoreTimeCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions_IgnoreTimeCheck.Buff_EndBossSpawningMinions_IgnoreTimeCheck_C.ExecuteUbergraph_Buff_EndBossSpawningMinions_IgnoreTimeCheck");

	ABuff_EndBossSpawningMinions_IgnoreTimeCheck_C_ExecuteUbergraph_Buff_EndBossSpawningMinions_IgnoreTimeCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
