// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoisonTreeSeed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.BPInitializedVelocity
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         CustomSpeed                    (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoisonTreeSeed_C::BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.BPInitializedVelocity");

	AProjPoisonTreeSeed_C_BPInitializedVelocity_Params params;
	params.CustomSpeed = CustomSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVelocity != nullptr)
		*InVelocity = params.InVelocity;
}


// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.UserConstructionScript
// ()

void AProjPoisonTreeSeed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.UserConstructionScript");

	AProjPoisonTreeSeed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjPoisonTreeSeed_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.OnExplode");

	AProjPoisonTreeSeed_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoisonTreeSeed_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveTick");

	AProjPoisonTreeSeed_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveBeginPlay
// ()

void AProjPoisonTreeSeed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveBeginPlay");

	AProjPoisonTreeSeed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.Multi_PlayLandingVFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoisonTreeSeed_C::Multi_PlayLandingVFX(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.Multi_PlayLandingVFX");

	AProjPoisonTreeSeed_C_Multi_PlayLandingVFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ExecuteUbergraph_ProjPoisonTreeSeed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoisonTreeSeed_C::ExecuteUbergraph_ProjPoisonTreeSeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ExecuteUbergraph_ProjPoisonTreeSeed");

	AProjPoisonTreeSeed_C_ExecuteUbergraph_ProjPoisonTreeSeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
