// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Foliage_FlashBang_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.GetActorsToIgnoreOnRaycast
// ()
// Parameters:
// class AActor**                 emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)

void ABuff_ChargeEmitter_Foliage_FlashBang_C::GetActorsToIgnoreOnRaycast(class AActor** emitterActor, TArray<class AActor*>* ActorsToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.GetActorsToIgnoreOnRaycast");

	ABuff_ChargeEmitter_Foliage_FlashBang_C_GetActorsToIgnoreOnRaycast_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.CanEmitCharge
// ()
// Parameters:
// bool                           canEmit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_Foliage_FlashBang_C::CanEmitCharge(bool* canEmit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.CanEmitCharge");

	ABuff_ChargeEmitter_Foliage_FlashBang_C_CanEmitCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEmit != nullptr)
		*canEmit = params.canEmit;
}


// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.UserConstructionScript
// ()

void ABuff_ChargeEmitter_Foliage_FlashBang_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.UserConstructionScript");

	ABuff_ChargeEmitter_Foliage_FlashBang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_Foliage_FlashBang_C::ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang");

	ABuff_ChargeEmitter_Foliage_FlashBang_C_ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
