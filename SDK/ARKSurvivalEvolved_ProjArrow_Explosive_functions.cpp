// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Explosive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjArrow_Explosive_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive.ProjArrow_Explosive_C.BPIgnoreRadialDamageVictim");

	AProjArrow_Explosive_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjArrow_Explosive.ProjArrow_Explosive_C.ReceiveBeginPlay
// ()

void AProjArrow_Explosive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive.ProjArrow_Explosive_C.ReceiveBeginPlay");

	AProjArrow_Explosive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


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


// Function ProjArrow_Explosive.ProjArrow_Explosive_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Explosive_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive.ProjArrow_Explosive_C.ReceiveAnyDamage");

	AProjArrow_Explosive_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

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
