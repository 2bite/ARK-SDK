// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrenadeTek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGrenadeTek.ProjGrenadeTek_C.BPProjectileBounced
// (NetResponse, Static, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult              ImpactResult                   (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpactVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AProjGrenadeTek_C::STATIC_BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenadeTek.ProjGrenadeTek_C.BPProjectileBounced");

	AProjGrenadeTek_C_BPProjectileBounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactResult != nullptr)
		*ImpactResult = params.ImpactResult;
	if (ImpactVelocity != nullptr)
		*ImpactVelocity = params.ImpactVelocity;
}


// Function ProjGrenadeTek.ProjGrenadeTek_C.BPAttachedRootComponent
// ()

void AProjGrenadeTek_C::BPAttachedRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenadeTek.ProjGrenadeTek_C.BPAttachedRootComponent");

	AProjGrenadeTek_C_BPAttachedRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGrenadeTek.ProjGrenadeTek_C.UserConstructionScript
// ()

void AProjGrenadeTek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenadeTek.ProjGrenadeTek_C.UserConstructionScript");

	AProjGrenadeTek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGrenadeTek.ProjGrenadeTek_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjGrenadeTek_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenadeTek.ProjGrenadeTek_C.OnExplode");

	AProjGrenadeTek_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjGrenadeTek.ProjGrenadeTek_C.ExecuteUbergraph_ProjGrenadeTek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGrenadeTek_C::ExecuteUbergraph_ProjGrenadeTek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenadeTek.ProjGrenadeTek_C.ExecuteUbergraph_ProjGrenadeTek");

	AProjGrenadeTek_C_ExecuteUbergraph_ProjGrenadeTek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
