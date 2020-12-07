// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_CupidArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjArrow_CupidArrow_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.OnExplode");

	AProjArrow_CupidArrow_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.UserConstructionScript
// ()

void AProjArrow_CupidArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.UserConstructionScript");

	AProjArrow_CupidArrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.ExecuteUbergraph_ProjArrow_CupidArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_CupidArrow_C::ExecuteUbergraph_ProjArrow_CupidArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.ExecuteUbergraph_ProjArrow_CupidArrow");

	AProjArrow_CupidArrow_C_ExecuteUbergraph_ProjArrow_CupidArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
