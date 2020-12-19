// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjWebBall_small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjWebBall_small.ProjWebBall_small_C.UserConstructionScript
// ()

void AProjWebBall_small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall_small.ProjWebBall_small_C.UserConstructionScript");

	AProjWebBall_small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjWebBall_small.ProjWebBall_small_C.ExecuteUbergraph_ProjWebBall_small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjWebBall_small_C::ExecuteUbergraph_ProjWebBall_small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall_small.ProjWebBall_small_C.ExecuteUbergraph_ProjWebBall_small");

	AProjWebBall_small_C_ExecuteUbergraph_ProjWebBall_small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
