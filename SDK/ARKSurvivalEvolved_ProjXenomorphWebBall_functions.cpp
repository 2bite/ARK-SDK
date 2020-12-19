// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjXenomorphWebBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.UserConstructionScript
// ()

void AProjXenomorphWebBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.UserConstructionScript");

	AProjXenomorphWebBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.ExecuteUbergraph_ProjXenomorphWebBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjXenomorphWebBall_C::ExecuteUbergraph_ProjXenomorphWebBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjXenomorphWebBall.ProjXenomorphWebBall_C.ExecuteUbergraph_ProjXenomorphWebBall");

	AProjXenomorphWebBall_C_ExecuteUbergraph_ProjXenomorphWebBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
