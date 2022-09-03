// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoisonGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPoisonGrenade.ProjPoisonGrenade_C.UserConstructionScript
// ()

void AProjPoisonGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonGrenade.ProjPoisonGrenade_C.UserConstructionScript");

	AProjPoisonGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoisonGrenade.ProjPoisonGrenade_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjPoisonGrenade_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonGrenade.ProjPoisonGrenade_C.OnExplode");

	AProjPoisonGrenade_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjPoisonGrenade.ProjPoisonGrenade_C.ExecuteUbergraph_ProjPoisonGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoisonGrenade_C::ExecuteUbergraph_ProjPoisonGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonGrenade.ProjPoisonGrenade_C.ExecuteUbergraph_ProjPoisonGrenade");

	AProjPoisonGrenade_C_ExecuteUbergraph_ProjPoisonGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
