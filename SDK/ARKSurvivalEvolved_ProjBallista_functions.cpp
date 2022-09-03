// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBallista_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBallista.ProjBallista_C.UserConstructionScript
// ()

void AProjBallista_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBallista.ProjBallista_C.UserConstructionScript");

	AProjBallista_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBallista.ProjBallista_C.ExecuteUbergraph_ProjBallista
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBallista_C::ExecuteUbergraph_ProjBallista(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBallista.ProjBallista_C.ExecuteUbergraph_ProjBallista");

	AProjBallista_C_ExecuteUbergraph_ProjBallista_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
