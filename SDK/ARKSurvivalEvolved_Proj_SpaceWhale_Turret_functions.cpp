// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_SpaceWhale_Turret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProj_SpaceWhale_Turret_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.BPIgnoreRadialDamageVictim");

	AProj_SpaceWhale_Turret_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.UserConstructionScript
// ()

void AProj_SpaceWhale_Turret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.UserConstructionScript");

	AProj_SpaceWhale_Turret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ReceiveBeginPlay
// ()

void AProj_SpaceWhale_Turret_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ReceiveBeginPlay");

	AProj_SpaceWhale_Turret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProj_SpaceWhale_Turret_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.OnExplode");

	AProj_SpaceWhale_Turret_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ExecuteUbergraph_Proj_SpaceWhale_Turret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_SpaceWhale_Turret_C::ExecuteUbergraph_Proj_SpaceWhale_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ExecuteUbergraph_Proj_SpaceWhale_Turret");

	AProj_SpaceWhale_Turret_C_ExecuteUbergraph_Proj_SpaceWhale_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
