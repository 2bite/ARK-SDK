// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjWebBall_Queen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjWebBall_Queen.ProjWebBall_Queen_C.UserConstructionScript
// ()

void AProjWebBall_Queen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall_Queen.ProjWebBall_Queen_C.UserConstructionScript");

	AProjWebBall_Queen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjWebBall_Queen.ProjWebBall_Queen_C.ExecuteUbergraph_ProjWebBall_Queen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjWebBall_Queen_C::ExecuteUbergraph_ProjWebBall_Queen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall_Queen.ProjWebBall_Queen_C.ExecuteUbergraph_ProjWebBall_Queen");

	AProjWebBall_Queen_C_ExecuteUbergraph_ProjWebBall_Queen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
