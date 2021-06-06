// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjScoutLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjScoutLauncher.ProjScoutLauncher_C.UserConstructionScript
// ()

void AProjScoutLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutLauncher.ProjScoutLauncher_C.UserConstructionScript");

	AProjScoutLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutLauncher.ProjScoutLauncher_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjScoutLauncher_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutLauncher.ProjScoutLauncher_C.OnExplode");

	AProjScoutLauncher_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjScoutLauncher.ProjScoutLauncher_C.ReceiveBeginPlay
// ()

void AProjScoutLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutLauncher.ProjScoutLauncher_C.ReceiveBeginPlay");

	AProjScoutLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjScoutLauncher.ProjScoutLauncher_C.ExecuteUbergraph_ProjScoutLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjScoutLauncher_C::ExecuteUbergraph_ProjScoutLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjScoutLauncher.ProjScoutLauncher_C.ExecuteUbergraph_ProjScoutLauncher");

	AProjScoutLauncher_C_ExecuteUbergraph_ProjScoutLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
