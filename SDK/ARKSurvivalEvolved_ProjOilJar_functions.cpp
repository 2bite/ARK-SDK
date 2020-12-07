// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjOilJar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjOilJar.ProjOilJar_C.UserConstructionScript
// ()

void AProjOilJar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjOilJar.ProjOilJar_C.UserConstructionScript");

	AProjOilJar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjOilJar.ProjOilJar_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjOilJar_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjOilJar.ProjOilJar_C.OnExplode");

	AProjOilJar_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjOilJar.ProjOilJar_C.ExecuteUbergraph_ProjOilJar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjOilJar_C::ExecuteUbergraph_ProjOilJar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjOilJar.ProjOilJar_C.ExecuteUbergraph_ProjOilJar");

	AProjOilJar_C_ExecuteUbergraph_ProjOilJar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
