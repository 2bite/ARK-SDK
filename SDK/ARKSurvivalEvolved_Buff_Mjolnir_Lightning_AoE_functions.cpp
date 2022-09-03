// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Mjolnir_Lightning_AoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.IsActorInEffectiveRange
// (Native, Static, MulticastDelegate, Public, Private, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInRange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Mjolnir_Lightning_AoE_C::STATIC_IsActorInEffectiveRange(class AActor* Actor, bool* IsInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.IsActorInEffectiveRange");

	ABuff_Mjolnir_Lightning_AoE_C_IsActorInEffectiveRange_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInRange != nullptr)
		*IsInRange = params.IsInRange;
}


// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.InitializeAoE
// ()

void ABuff_Mjolnir_Lightning_AoE_C::InitializeAoE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.InitializeAoE");

	ABuff_Mjolnir_Lightning_AoE_C_InitializeAoE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.CanAffectCharacter
// ()
// Parameters:
// class APrimalCharacter*        characterToAffect              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canStun                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Mjolnir_Lightning_AoE_C::CanAffectCharacter(class APrimalCharacter* characterToAffect, bool* canStun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.CanAffectCharacter");

	ABuff_Mjolnir_Lightning_AoE_C_CanAffectCharacter_Params params;
	params.characterToAffect = characterToAffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canStun != nullptr)
		*canStun = params.canStun;
}


// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.BPExcludeAoEActor
// ()
// Parameters:
// class AActor**                 ActorToConsider                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Mjolnir_Lightning_AoE_C::BPExcludeAoEActor(class AActor** ActorToConsider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.BPExcludeAoEActor");

	ABuff_Mjolnir_Lightning_AoE_C_BPExcludeAoEActor_Params params;
	params.ActorToConsider = ActorToConsider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.UserConstructionScript
// ()

void ABuff_Mjolnir_Lightning_AoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.UserConstructionScript");

	ABuff_Mjolnir_Lightning_AoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mjolnir_Lightning_AoE_C::ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE");

	ABuff_Mjolnir_Lightning_AoE_C_ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.OnNewActorAdded__DelegateSignature
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mjolnir_Lightning_AoE_C::OnNewActorAdded__DelegateSignature(class AActor* forActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.OnNewActorAdded__DelegateSignature");

	ABuff_Mjolnir_Lightning_AoE_C_OnNewActorAdded__DelegateSignature_Params params;
	params.forActor = forActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
