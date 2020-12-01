// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ParaFrightenCooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.UserConstructionScript
// ()

void ABuff_ParaFrightenCooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.UserConstructionScript");

	ABuff_ParaFrightenCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.ExecuteUbergraph_Buff_ParaFrightenCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ParaFrightenCooldown_C::ExecuteUbergraph_Buff_ParaFrightenCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaFrightenCooldown.Buff_ParaFrightenCooldown_C.ExecuteUbergraph_Buff_ParaFrightenCooldown");

	ABuff_ParaFrightenCooldown_C_ExecuteUbergraph_Buff_ParaFrightenCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
