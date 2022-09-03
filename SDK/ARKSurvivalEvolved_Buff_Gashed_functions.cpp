// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Gashed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Gashed.Buff_Gashed_C.UserConstructionScript
// ()

void ABuff_Gashed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Gashed.Buff_Gashed_C.UserConstructionScript");

	ABuff_Gashed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Gashed.Buff_Gashed_C.ExecuteUbergraph_Buff_Gashed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Gashed_C::ExecuteUbergraph_Buff_Gashed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Gashed.Buff_Gashed_C.ExecuteUbergraph_Buff_Gashed");

	ABuff_Gashed_C_ExecuteUbergraph_Buff_Gashed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
