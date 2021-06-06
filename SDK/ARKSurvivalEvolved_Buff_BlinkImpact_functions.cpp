// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BlinkImpact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BlinkImpact.Buff_BlinkImpact_C.UserConstructionScript
// ()

void ABuff_BlinkImpact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BlinkImpact.Buff_BlinkImpact_C.UserConstructionScript");

	ABuff_BlinkImpact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BlinkImpact.Buff_BlinkImpact_C.ExecuteUbergraph_Buff_BlinkImpact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BlinkImpact_C::ExecuteUbergraph_Buff_BlinkImpact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BlinkImpact.Buff_BlinkImpact_C.ExecuteUbergraph_Buff_BlinkImpact");

	ABuff_BlinkImpact_C_ExecuteUbergraph_Buff_BlinkImpact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
