// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjClusterGrenadeFragment_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript
// ()

void AProjClusterGrenadeFragment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript");

	AProjClusterGrenadeFragment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.BPSpawnedFragments
// ()
// Parameters:
// TArray<class AShooterProjectile*> FragmentArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AProjClusterGrenadeFragment_C::BPSpawnedFragments(TArray<class AShooterProjectile*>* FragmentArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.BPSpawnedFragments");

	AProjClusterGrenadeFragment_C_BPSpawnedFragments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FragmentArray != nullptr)
		*FragmentArray = params.FragmentArray;
}


// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjClusterGrenadeFragment_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ReceiveAnyDamage");

	AProjClusterGrenadeFragment_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjClusterGrenadeFragment_C::ExecuteUbergraph_ProjClusterGrenadeFragment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment");

	AProjClusterGrenadeFragment_C_ExecuteUbergraph_ProjClusterGrenadeFragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
