// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockGolemThrowRockState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockGolemThrowRockState.RockGolemThrowRockState_C.ExecuteUbergraph_RockGolemThrowRockState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URockGolemThrowRockState_C::ExecuteUbergraph_RockGolemThrowRockState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolemThrowRockState.RockGolemThrowRockState_C.ExecuteUbergraph_RockGolemThrowRockState");

	URockGolemThrowRockState_C_ExecuteUbergraph_RockGolemThrowRockState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
