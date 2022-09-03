// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_SummonerEyeball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.AttemptSpawnTentacles
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, Const, NetValidate)
// Parameters:
// struct FVector                 HitLoc                         (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_SummonerEyeball_C::AttemptSpawnTentacles(const struct FVector& HitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.AttemptSpawnTentacles");

	AProjectile_SummonerEyeball_C_AttemptSpawnTentacles_Params params;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.UserConstructionScript
// ()

void AProjectile_SummonerEyeball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.UserConstructionScript");

	AProjectile_SummonerEyeball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjectile_SummonerEyeball_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.OnExplode");

	AProjectile_SummonerEyeball_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.ExecuteUbergraph_Projectile_SummonerEyeball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_SummonerEyeball_C::ExecuteUbergraph_Projectile_SummonerEyeball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.ExecuteUbergraph_Projectile_SummonerEyeball");

	AProjectile_SummonerEyeball_C_ExecuteUbergraph_Projectile_SummonerEyeball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
