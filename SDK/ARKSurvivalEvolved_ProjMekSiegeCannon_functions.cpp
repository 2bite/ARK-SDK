// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekSiegeCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.UserConstructionScript
// ()

void AProjMekSiegeCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.UserConstructionScript");

	AProjMekSiegeCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjMekSiegeCannon_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.OnExplode");

	AProjMekSiegeCannon_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.ExecuteUbergraph_ProjMekSiegeCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMekSiegeCannon_C::ExecuteUbergraph_ProjMekSiegeCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.ExecuteUbergraph_ProjMekSiegeCannon");

	AProjMekSiegeCannon_C_ExecuteUbergraph_ProjMekSiegeCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
