// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDrakeFireball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDrakeFireball.ProjDrakeFireball_C.CalculateFragmentVectors
// ()

void AProjDrakeFireball_C::CalculateFragmentVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.CalculateFragmentVectors");

	AProjDrakeFireball_C_CalculateFragmentVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveBeginPlay
// ()

void AProjDrakeFireball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveBeginPlay");

	AProjDrakeFireball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.UserConstructionScript
// ()

void AProjDrakeFireball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.UserConstructionScript");

	AProjDrakeFireball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjDrakeFireball_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.OnExplode");

	AProjDrakeFireball_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.ServerRequest_CreateFragment
// ()
// Parameters:
// class UClass*                  ProjectileClass                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)
// float                          OverrideInitialSpeed           (Parm, ZeroConstructor, IsPlainOldData)

void AProjDrakeFireball_C::ServerRequest_CreateFragment(class UClass* ProjectileClass, const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float OverrideInitialSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ServerRequest_CreateFragment");

	AProjDrakeFireball_C_ServerRequest_CreateFragment_Params params;
	params.ProjectileClass = ProjectileClass;
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.OverrideInitialSpeed = OverrideInitialSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.ClientHideProjectile
// ()

void AProjDrakeFireball_C::ClientHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ClientHideProjectile");

	AProjDrakeFireball_C_ClientHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjDrakeFireball_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveAnyDamage");

	AProjDrakeFireball_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.Multi_DeactivateFragments
// ()

void AProjDrakeFireball_C::Multi_DeactivateFragments()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.Multi_DeactivateFragments");

	AProjDrakeFireball_C_Multi_DeactivateFragments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDrakeFireball.ProjDrakeFireball_C.ExecuteUbergraph_ProjDrakeFireball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDrakeFireball_C::ExecuteUbergraph_ProjDrakeFireball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDrakeFireball.ProjDrakeFireball_C.ExecuteUbergraph_ProjDrakeFireball");

	AProjDrakeFireball_C_ExecuteUbergraph_ProjDrakeFireball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
