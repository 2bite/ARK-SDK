// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjWebBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjWebBall.ProjWebBall_C.UserConstructionScript
// ()

void AProjWebBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall.ProjWebBall_C.UserConstructionScript");

	AProjWebBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjWebBall.ProjWebBall_C.ExecuteUbergraph_ProjWebBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjWebBall_C::ExecuteUbergraph_ProjWebBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall.ProjWebBall_C.ExecuteUbergraph_ProjWebBall");

	AProjWebBall_C_ExecuteUbergraph_ProjWebBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
