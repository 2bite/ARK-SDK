// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFireBallDodoRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjFireBallDodoRex.ProjFireBallDodoRex_C.UserConstructionScript
// ()

void AProjFireBallDodoRex_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFireBallDodoRex.ProjFireBallDodoRex_C.UserConstructionScript");

	AProjFireBallDodoRex_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFireBallDodoRex.ProjFireBallDodoRex_C.ExecuteUbergraph_ProjFireBallDodoRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFireBallDodoRex_C::ExecuteUbergraph_ProjFireBallDodoRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFireBallDodoRex.ProjFireBallDodoRex_C.ExecuteUbergraph_ProjFireBallDodoRex");

	AProjFireBallDodoRex_C_ExecuteUbergraph_ProjFireBallDodoRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
