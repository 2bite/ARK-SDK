// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekRifle.ProjTekRifle_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjTekRifle_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekRifle.ProjTekRifle_C.BPIgnoreRadialDamageVictim");

	AProjTekRifle_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjTekRifle.ProjTekRifle_C.UserConstructionScript
// ()

void AProjTekRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekRifle.ProjTekRifle_C.UserConstructionScript");

	AProjTekRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekRifle.ProjTekRifle_C.ReceiveBeginPlay
// ()

void AProjTekRifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekRifle.ProjTekRifle_C.ReceiveBeginPlay");

	AProjTekRifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekRifle.ProjTekRifle_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjTekRifle_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekRifle.ProjTekRifle_C.OnExplode");

	AProjTekRifle_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjTekRifle.ProjTekRifle_C.ExecuteUbergraph_ProjTekRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekRifle_C::ExecuteUbergraph_ProjTekRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekRifle.ProjTekRifle_C.ExecuteUbergraph_ProjTekRifle");

	AProjTekRifle_C_ExecuteUbergraph_ProjTekRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
