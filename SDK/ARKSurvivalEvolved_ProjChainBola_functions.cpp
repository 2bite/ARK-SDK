// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjChainBola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjChainBola.ProjChainBola_C.UserConstructionScript
// ()

void AProjChainBola_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjChainBola.ProjChainBola_C.UserConstructionScript");

	AProjChainBola_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjChainBola.ProjChainBola_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjChainBola_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjChainBola.ProjChainBola_C.OnExplode");

	AProjChainBola_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjChainBola.ProjChainBola_C.ExecuteUbergraph_ProjChainBola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjChainBola_C::ExecuteUbergraph_ProjChainBola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjChainBola.ProjChainBola_C.ExecuteUbergraph_ProjChainBola");

	AProjChainBola_C_ExecuteUbergraph_ProjChainBola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
