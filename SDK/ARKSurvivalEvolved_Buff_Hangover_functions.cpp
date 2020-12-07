// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Hangover_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Hangover.Buff_Hangover_C.UserConstructionScript
// ()

void ABuff_Hangover_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hangover.Buff_Hangover_C.UserConstructionScript");

	ABuff_Hangover_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Hangover.Buff_Hangover_C.ExecuteUbergraph_Buff_Hangover
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Hangover_C::ExecuteUbergraph_Buff_Hangover(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Hangover.Buff_Hangover_C.ExecuteUbergraph_Buff_Hangover");

	ABuff_Hangover_C_ExecuteUbergraph_Buff_Hangover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
