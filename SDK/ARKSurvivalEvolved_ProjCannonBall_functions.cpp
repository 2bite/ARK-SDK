// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCannonBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCannonBall.ProjCannonBall_C.UserConstructionScript
// ()

void AProjCannonBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCannonBall.ProjCannonBall_C.UserConstructionScript");

	AProjCannonBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCannonBall.ProjCannonBall_C.ExecuteUbergraph_ProjCannonBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCannonBall_C::ExecuteUbergraph_ProjCannonBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCannonBall.ProjCannonBall_C.ExecuteUbergraph_ProjCannonBall");

	AProjCannonBall_C_ExecuteUbergraph_ProjCannonBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
