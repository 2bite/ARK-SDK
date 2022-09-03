// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBola.ProjBola_C.UserConstructionScript
// ()

void AProjBola_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBola.ProjBola_C.UserConstructionScript");

	AProjBola_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBola.ProjBola_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjBola_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBola.ProjBola_C.OnExplode");

	AProjBola_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjBola.ProjBola_C.ExecuteUbergraph_ProjBola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBola_C::ExecuteUbergraph_ProjBola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBola.ProjBola_C.ExecuteUbergraph_ProjBola");

	AProjBola_C_ExecuteUbergraph_ProjBola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
