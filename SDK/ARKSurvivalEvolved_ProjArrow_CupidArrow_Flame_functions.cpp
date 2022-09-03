// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_CupidArrow_Flame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjArrow_CupidArrow_Flame_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C.OnExplode");

	AProjArrow_CupidArrow_Flame_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C.UserConstructionScript
// ()

void AProjArrow_CupidArrow_Flame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C.UserConstructionScript");

	AProjArrow_CupidArrow_Flame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C.ExecuteUbergraph_ProjArrow_CupidArrow_Flame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_CupidArrow_Flame_C::ExecuteUbergraph_ProjArrow_CupidArrow_Flame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C.ExecuteUbergraph_ProjArrow_CupidArrow_Flame");

	AProjArrow_CupidArrow_Flame_C_ExecuteUbergraph_ProjArrow_CupidArrow_Flame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
