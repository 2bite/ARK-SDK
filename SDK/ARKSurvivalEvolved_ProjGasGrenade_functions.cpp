// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGasGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGasGrenade.ProjGasGrenade_C.UserConstructionScript
// ()

void AProjGasGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGasGrenade.ProjGasGrenade_C.UserConstructionScript");

	AProjGasGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGasGrenade.ProjGasGrenade_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjGasGrenade_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGasGrenade.ProjGasGrenade_C.OnExplode");

	AProjGasGrenade_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjGasGrenade.ProjGasGrenade_C.ExecuteUbergraph_ProjGasGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGasGrenade_C::ExecuteUbergraph_ProjGasGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGasGrenade.ProjGasGrenade_C.ExecuteUbergraph_ProjGasGrenade");

	AProjGasGrenade_C_ExecuteUbergraph_ProjGasGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
