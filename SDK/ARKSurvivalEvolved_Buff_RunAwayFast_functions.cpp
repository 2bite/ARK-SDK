// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RunAwayFast_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RunAwayFast.Buff_RunAwayFast_C.UserConstructionScript
// ()

void ABuff_RunAwayFast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RunAwayFast.Buff_RunAwayFast_C.UserConstructionScript");

	ABuff_RunAwayFast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RunAwayFast.Buff_RunAwayFast_C.ExecuteUbergraph_Buff_RunAwayFast
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RunAwayFast_C::ExecuteUbergraph_Buff_RunAwayFast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RunAwayFast.Buff_RunAwayFast_C.ExecuteUbergraph_Buff_RunAwayFast");

	ABuff_RunAwayFast_C_ExecuteUbergraph_Buff_RunAwayFast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
