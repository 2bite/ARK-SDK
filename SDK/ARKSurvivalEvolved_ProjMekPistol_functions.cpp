// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMekPistol.ProjMekPistol_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjMekPistol_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekPistol.ProjMekPistol_C.BPIgnoreRadialDamageVictim");

	AProjMekPistol_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjMekPistol.ProjMekPistol_C.UserConstructionScript
// ()

void AProjMekPistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekPistol.ProjMekPistol_C.UserConstructionScript");

	AProjMekPistol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMekPistol.ProjMekPistol_C.ReceiveBeginPlay
// ()

void AProjMekPistol_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekPistol.ProjMekPistol_C.ReceiveBeginPlay");

	AProjMekPistol_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMekPistol.ProjMekPistol_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjMekPistol_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekPistol.ProjMekPistol_C.OnExplode");

	AProjMekPistol_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjMekPistol.ProjMekPistol_C.ExecuteUbergraph_ProjMekPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMekPistol_C::ExecuteUbergraph_ProjMekPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekPistol.ProjMekPistol_C.ExecuteUbergraph_ProjMekPistol");

	AProjMekPistol_C_ExecuteUbergraph_ProjMekPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
