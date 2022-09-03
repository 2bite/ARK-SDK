// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrapHook_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGrapHook.ProjGrapHook_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjGrapHook_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrapHook.ProjGrapHook_C.OnExplode");

	AProjGrapHook_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjGrapHook.ProjGrapHook_C.UserConstructionScript
// ()

void AProjGrapHook_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrapHook.ProjGrapHook_C.UserConstructionScript");

	AProjGrapHook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGrapHook.ProjGrapHook_C.ExecuteUbergraph_ProjGrapHook
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGrapHook_C::ExecuteUbergraph_ProjGrapHook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrapHook.ProjGrapHook_C.ExecuteUbergraph_ProjGrapHook");

	AProjGrapHook_C_ExecuteUbergraph_ProjGrapHook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
