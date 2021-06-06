// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjZiplineAnchor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjZiplineAnchor.ProjZiplineAnchor_C.CheckForInvisibleWall
// (NetReliable, Native, Event, Static, Public, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjZiplineAnchor_C::STATIC_CheckForInvisibleWall(const struct FVector& Start, const struct FVector& End, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.CheckForInvisibleWall");

	AProjZiplineAnchor_C_CheckForInvisibleWall_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.HitValidForAttachment
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjZiplineAnchor_C::HitValidForAttachment(struct FHitResult* Hit, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.HitValidForAttachment");

	AProjZiplineAnchor_C_HitValidForAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, NetServer, BlueprintCallable)

void AProjZiplineAnchor_C::SpawnBreakEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter");

	AProjZiplineAnchor_C_SpawnBreakEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.UserConstructionScript
// ()

void AProjZiplineAnchor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.UserConstructionScript");

	AProjZiplineAnchor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveBeginPlay
// ()

void AProjZiplineAnchor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveBeginPlay");

	AProjZiplineAnchor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjZiplineAnchor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveTick");

	AProjZiplineAnchor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjZiplineAnchor_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.OnExplode");

	AProjZiplineAnchor_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveDestroyed
// ()

void AProjZiplineAnchor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.ReceiveDestroyed");

	AProjZiplineAnchor_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter_Multicast
// ()

void AProjZiplineAnchor_C::SpawnBreakEmitter_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.SpawnBreakEmitter_Multicast");

	AProjZiplineAnchor_C_SpawnBreakEmitter_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjZiplineAnchor.ProjZiplineAnchor_C.ExecuteUbergraph_ProjZiplineAnchor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjZiplineAnchor_C::ExecuteUbergraph_ProjZiplineAnchor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjZiplineAnchor.ProjZiplineAnchor_C.ExecuteUbergraph_ProjZiplineAnchor");

	AProjZiplineAnchor_C_ExecuteUbergraph_ProjZiplineAnchor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
