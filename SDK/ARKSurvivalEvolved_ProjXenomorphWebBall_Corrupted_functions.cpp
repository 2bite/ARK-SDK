// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjXenomorphWebBall_Corrupted_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjXenomorphWebBall_Corrupted.ProjXenomorphWebBall_Corrupted_C.UserConstructionScript
// ()

void AProjXenomorphWebBall_Corrupted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjXenomorphWebBall_Corrupted.ProjXenomorphWebBall_Corrupted_C.UserConstructionScript");

	AProjXenomorphWebBall_Corrupted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjXenomorphWebBall_Corrupted.ProjXenomorphWebBall_Corrupted_C.ExecuteUbergraph_ProjXenomorphWebBall_Corrupted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjXenomorphWebBall_Corrupted_C::ExecuteUbergraph_ProjXenomorphWebBall_Corrupted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjXenomorphWebBall_Corrupted.ProjXenomorphWebBall_Corrupted_C.ExecuteUbergraph_ProjXenomorphWebBall_Corrupted");

	AProjXenomorphWebBall_Corrupted_C_ExecuteUbergraph_ProjXenomorphWebBall_Corrupted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
