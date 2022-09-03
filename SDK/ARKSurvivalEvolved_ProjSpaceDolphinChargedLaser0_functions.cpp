// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceDolphinChargedLaser0_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.GetExtraTriggerExplosionOffsetForTarget
// ()
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjSpaceDolphinChargedLaser0_C::GetExtraTriggerExplosionOffsetForTarget(float* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.GetExtraTriggerExplosionOffsetForTarget");

	AProjSpaceDolphinChargedLaser0_C_GetExtraTriggerExplosionOffsetForTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveDestroyed
// ()

void AProjSpaceDolphinChargedLaser0_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveDestroyed");

	AProjSpaceDolphinChargedLaser0_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjSpaceDolphinChargedLaser0_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.OnExplode");

	AProjSpaceDolphinChargedLaser0_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjSpaceDolphinChargedLaser0_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.BPIgnoreRadialDamageVictim");

	AProjSpaceDolphinChargedLaser0_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.UserConstructionScript
// ()

void AProjSpaceDolphinChargedLaser0_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.UserConstructionScript");

	AProjSpaceDolphinChargedLaser0_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceDolphinChargedLaser0_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveTick");

	AProjSpaceDolphinChargedLaser0_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveBeginPlay
// ()

void AProjSpaceDolphinChargedLaser0_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveBeginPlay");

	AProjSpaceDolphinChargedLaser0_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser0
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpaceDolphinChargedLaser0_C::ExecuteUbergraph_ProjSpaceDolphinChargedLaser0(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser0");

	AProjSpaceDolphinChargedLaser0_C_ExecuteUbergraph_ProjSpaceDolphinChargedLaser0_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
