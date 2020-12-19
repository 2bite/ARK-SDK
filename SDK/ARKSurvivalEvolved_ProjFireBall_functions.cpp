// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFireBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjFireBall.ProjFireBall_C.UserConstructionScript
// ()

void AProjFireBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFireBall.ProjFireBall_C.UserConstructionScript");

	AProjFireBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFireBall.ProjFireBall_C.ExecuteUbergraph_ProjFireBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFireBall_C::ExecuteUbergraph_ProjFireBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFireBall.ProjFireBall_C.ExecuteUbergraph_ProjFireBall");

	AProjFireBall_C_ExecuteUbergraph_ProjFireBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
