// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ClientExplodingProjectile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClientExplodingProjectile.ClientExplodingProjectile_C.UserConstructionScript
// ()

void AClientExplodingProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClientExplodingProjectile.ClientExplodingProjectile_C.UserConstructionScript");

	AClientExplodingProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClientExplodingProjectile.ClientExplodingProjectile_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AClientExplodingProjectile_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClientExplodingProjectile.ClientExplodingProjectile_C.OnExplode");

	AClientExplodingProjectile_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ClientExplodingProjectile.ClientExplodingProjectile_C.ExecuteUbergraph_ClientExplodingProjectile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AClientExplodingProjectile_C::ExecuteUbergraph_ClientExplodingProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClientExplodingProjectile.ClientExplodingProjectile_C.ExecuteUbergraph_ClientExplodingProjectile");

	AClientExplodingProjectile_C_ExecuteUbergraph_ClientExplodingProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
