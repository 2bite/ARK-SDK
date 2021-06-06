// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Explosive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjArrow_Explosive_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive.ProjArrow_Explosive_C.OnExplode");

	AProjArrow_Explosive_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjArrow_Explosive.ProjArrow_Explosive_C.UserConstructionScript
// ()

void AProjArrow_Explosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive.ProjArrow_Explosive_C.UserConstructionScript");

	AProjArrow_Explosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Explosive.ProjArrow_Explosive_C.ExecuteUbergraph_ProjArrow_Explosive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Explosive_C::ExecuteUbergraph_ProjArrow_Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive.ProjArrow_Explosive_C.ExecuteUbergraph_ProjArrow_Explosive");

	AProjArrow_Explosive_C_ExecuteUbergraph_ProjArrow_Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
