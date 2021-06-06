// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Parachute_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Parachute.Buff_Parachute_C.UserConstructionScript
// ()

void ABuff_Parachute_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Parachute.Buff_Parachute_C.UserConstructionScript");

	ABuff_Parachute_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Parachute.Buff_Parachute_C.ExecuteUbergraph_Buff_Parachute
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Parachute_C::ExecuteUbergraph_Buff_Parachute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Parachute.Buff_Parachute_C.ExecuteUbergraph_Buff_Parachute");

	ABuff_Parachute_C_ExecuteUbergraph_Buff_Parachute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
