// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceWhaleBomb_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjSpaceWhaleBomb_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.OnExplode");

	AProjSpaceWhaleBomb_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjSpaceWhaleBomb_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.BPIgnoreRadialDamageVictim");

	AProjSpaceWhaleBomb_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.UserConstructionScript
// ()

void AProjSpaceWhaleBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.UserConstructionScript");

	AProjSpaceWhaleBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceWhaleBomb_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveTick");

	AProjSpaceWhaleBomb_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveBeginPlay
// ()

void AProjSpaceWhaleBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveBeginPlay");

	AProjSpaceWhaleBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ExecuteUbergraph_ProjSpaceWhaleBomb
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceWhaleBomb_C::ExecuteUbergraph_ProjSpaceWhaleBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ExecuteUbergraph_ProjSpaceWhaleBomb");

	AProjSpaceWhaleBomb_C_ExecuteUbergraph_ProjSpaceWhaleBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
