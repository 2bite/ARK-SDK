// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_Summoner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Summoner.Projectile_Summoner_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjectile_Summoner_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Summoner.Projectile_Summoner_C.OnExplode");

	AProjectile_Summoner_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Projectile_Summoner.Projectile_Summoner_C.UserConstructionScript
// ()

void AProjectile_Summoner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Summoner.Projectile_Summoner_C.UserConstructionScript");

	AProjectile_Summoner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Summoner.Projectile_Summoner_C.ExecuteUbergraph_Projectile_Summoner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Summoner_C::ExecuteUbergraph_Projectile_Summoner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Summoner.Projectile_Summoner_C.ExecuteUbergraph_Projectile_Summoner");

	AProjectile_Summoner_C_ExecuteUbergraph_Projectile_Summoner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
