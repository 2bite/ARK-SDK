// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StandingTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandingTorch.StandingTorch_C.UserConstructionScript
// ()

void AStandingTorch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandingTorch.StandingTorch_C.UserConstructionScript");

	AStandingTorch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandingTorch.StandingTorch_C.ExecuteUbergraph_StandingTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStandingTorch_C::ExecuteUbergraph_StandingTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandingTorch.StandingTorch_C.ExecuteUbergraph_StandingTorch");

	AStandingTorch_C_ExecuteUbergraph_StandingTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
