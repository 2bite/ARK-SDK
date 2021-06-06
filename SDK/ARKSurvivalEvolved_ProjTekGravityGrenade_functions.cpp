// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekGravityGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.UserConstructionScript
// ()

void AProjTekGravityGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.UserConstructionScript");

	AProjTekGravityGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjTekGravityGrenade_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.OnExplode");

	AProjTekGravityGrenade_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ApplyImpulseToDroppedItems
// ()
// Parameters:
// TArray<class ADroppedItem*>    Items                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 EffectOrigin                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekGravityGrenade_C::ApplyImpulseToDroppedItems(const struct FVector& EffectOrigin, TArray<class ADroppedItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ApplyImpulseToDroppedItems");

	AProjTekGravityGrenade_C_ApplyImpulseToDroppedItems_Params params;
	params.EffectOrigin = EffectOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ReceiveBeginPlay
// ()

void AProjTekGravityGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ReceiveBeginPlay");

	AProjTekGravityGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ExecuteUbergraph_ProjTekGravityGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekGravityGrenade_C::ExecuteUbergraph_ProjTekGravityGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade.ProjTekGravityGrenade_C.ExecuteUbergraph_ProjTekGravityGrenade");

	AProjTekGravityGrenade_C_ExecuteUbergraph_ProjTekGravityGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
