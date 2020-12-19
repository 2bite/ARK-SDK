// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Gnashed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Gnashed.Buff_Gnashed_C.UserConstructionScript
// ()

void ABuff_Gnashed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Gnashed.Buff_Gnashed_C.UserConstructionScript");

	ABuff_Gnashed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Gnashed.Buff_Gnashed_C.ExecuteUbergraph_Buff_Gnashed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Gnashed_C::ExecuteUbergraph_Buff_Gnashed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Gnashed.Buff_Gnashed_C.ExecuteUbergraph_Buff_Gnashed");

	ABuff_Gnashed_C_ExecuteUbergraph_Buff_Gnashed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
