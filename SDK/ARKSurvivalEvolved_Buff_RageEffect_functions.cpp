// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RageEffect.Buff_RageEffect_C.CanEnrageActor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canEnrage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_RageEffect_C::CanEnrageActor(class AActor* Actor, bool* canEnrage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect.Buff_RageEffect_C.CanEnrageActor");

	ABuff_RageEffect_C_CanEnrageActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEnrage != nullptr)
		*canEnrage = params.canEnrage;
}


// Function Buff_RageEffect.Buff_RageEffect_C.BPExcludeAoEActor
// ()
// Parameters:
// class AActor**                 ActorToConsider                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RageEffect_C::BPExcludeAoEActor(class AActor** ActorToConsider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect.Buff_RageEffect_C.BPExcludeAoEActor");

	ABuff_RageEffect_C_BPExcludeAoEActor_Params params;
	params.ActorToConsider = ActorToConsider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RageEffect.Buff_RageEffect_C.UserConstructionScript
// ()

void ABuff_RageEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect.Buff_RageEffect_C.UserConstructionScript");

	ABuff_RageEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RageEffect.Buff_RageEffect_C.ReceiveBeginPlay
// ()

void ABuff_RageEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect.Buff_RageEffect_C.ReceiveBeginPlay");

	ABuff_RageEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RageEffect.Buff_RageEffect_C.ExecuteUbergraph_Buff_RageEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RageEffect_C::ExecuteUbergraph_Buff_RageEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect.Buff_RageEffect_C.ExecuteUbergraph_Buff_RageEffect");

	ABuff_RageEffect_C_ExecuteUbergraph_Buff_RageEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
