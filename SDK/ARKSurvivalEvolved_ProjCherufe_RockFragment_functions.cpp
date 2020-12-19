// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCherufe_RockFragment_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.ReceiveBeginPlay
// ()

void AProjCherufe_RockFragment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.ReceiveBeginPlay");

	AProjCherufe_RockFragment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.UserConstructionScript
// ()

void AProjCherufe_RockFragment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.UserConstructionScript");

	AProjCherufe_RockFragment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjCherufe_RockFragment_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.OnExplode");

	AProjCherufe_RockFragment_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.ExecuteUbergraph_ProjCherufe_RockFragment
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCherufe_RockFragment_C::ExecuteUbergraph_ProjCherufe_RockFragment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_RockFragment.ProjCherufe_RockFragment_C.ExecuteUbergraph_ProjCherufe_RockFragment");

	AProjCherufe_RockFragment_C_ExecuteUbergraph_ProjCherufe_RockFragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
