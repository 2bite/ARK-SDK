// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjLasso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjLasso.ProjLasso_C.ReceiveTick
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjLasso_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLasso.ProjLasso_C.ReceiveTick");

	AProjLasso_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjLasso.ProjLasso_C.ReceiveBeginPlay
// ()

void AProjLasso_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLasso.ProjLasso_C.ReceiveBeginPlay");

	AProjLasso_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjLasso.ProjLasso_C.BPInitializedVelocity
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         CustomSpeed                    (Parm, ZeroConstructor, IsPlainOldData)

void AProjLasso_C::BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLasso.ProjLasso_C.BPInitializedVelocity");

	AProjLasso_C_BPInitializedVelocity_Params params;
	params.CustomSpeed = CustomSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVelocity != nullptr)
		*InVelocity = params.InVelocity;
}


// Function ProjLasso.ProjLasso_C.UserConstructionScript
// ()

void AProjLasso_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLasso.ProjLasso_C.UserConstructionScript");

	AProjLasso_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjLasso.ProjLasso_C.ExecuteUbergraph_ProjLasso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjLasso_C::ExecuteUbergraph_ProjLasso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjLasso.ProjLasso_C.ExecuteUbergraph_ProjLasso");

	AProjLasso_C_ExecuteUbergraph_ProjLasso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
