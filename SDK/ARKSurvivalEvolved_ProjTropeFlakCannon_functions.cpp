// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTropeFlakCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveBeginPlay
// ()

void AProjTropeFlakCannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveBeginPlay");

	AProjTropeFlakCannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveTick
// (NetReliable, NetRequest, Exec, NetResponse, Public, Private, HasDefaults, DLLImport, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjTropeFlakCannon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveTick");

	AProjTropeFlakCannon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.UserConstructionScript
// ()

void AProjTropeFlakCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.UserConstructionScript");

	AProjTropeFlakCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjTropeFlakCannon_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.OnExplode");

	AProjTropeFlakCannon_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ExecuteUbergraph_ProjTropeFlakCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTropeFlakCannon_C::ExecuteUbergraph_ProjTropeFlakCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ExecuteUbergraph_ProjTropeFlakCannon");

	AProjTropeFlakCannon_C_ExecuteUbergraph_ProjTropeFlakCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
