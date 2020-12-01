// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekShoulderCannon_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjTekShoulderCannon_Base_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.BPIgnoreRadialDamageVictim");

	AProjTekShoulderCannon_Base_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.UserConstructionScript
// ()

void AProjTekShoulderCannon_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.UserConstructionScript");

	AProjTekShoulderCannon_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ReceiveBeginPlay
// ()

void AProjTekShoulderCannon_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ReceiveBeginPlay");

	AProjTekShoulderCannon_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjTekShoulderCannon_Base_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.OnExplode");

	AProjTekShoulderCannon_Base_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ExecuteUbergraph_ProjTekShoulderCannon_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekShoulderCannon_Base_C::ExecuteUbergraph_ProjTekShoulderCannon_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ExecuteUbergraph_ProjTekShoulderCannon_Base");

	AProjTekShoulderCannon_Base_C_ExecuteUbergraph_ProjTekShoulderCannon_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
