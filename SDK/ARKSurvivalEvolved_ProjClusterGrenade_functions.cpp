// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjClusterGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjClusterGrenade.ProjClusterGrenade_C.UserConstructionScript
// ()

void AProjClusterGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenade.ProjClusterGrenade_C.UserConstructionScript");

	AProjClusterGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjClusterGrenade.ProjClusterGrenade_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjClusterGrenade_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenade.ProjClusterGrenade_C.OnExplode");

	AProjClusterGrenade_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjClusterGrenade.ProjClusterGrenade_C.ExecuteUbergraph_ProjClusterGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjClusterGrenade_C::ExecuteUbergraph_ProjClusterGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenade.ProjClusterGrenade_C.ExecuteUbergraph_ProjClusterGrenade");

	AProjClusterGrenade_C_ExecuteUbergraph_ProjClusterGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
