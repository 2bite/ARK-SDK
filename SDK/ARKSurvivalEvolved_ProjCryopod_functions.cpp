// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCryopod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCryopod.ProjCryopod_C.UserConstructionScript
// ()

void AProjCryopod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCryopod.ProjCryopod_C.UserConstructionScript");

	AProjCryopod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCryopod.ProjCryopod_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjCryopod_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCryopod.ProjCryopod_C.OnExplode");

	AProjCryopod_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjCryopod.ProjCryopod_C.ExecuteUbergraph_ProjCryopod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCryopod_C::ExecuteUbergraph_ProjCryopod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCryopod.ProjCryopod_C.ExecuteUbergraph_ProjCryopod");

	AProjCryopod_C_ExecuteUbergraph_ProjCryopod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
