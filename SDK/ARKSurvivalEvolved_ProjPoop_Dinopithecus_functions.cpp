// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoop_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoop_Dinopithecus_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ReceiveTick");

	AProjPoop_Dinopithecus_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.PreventExplosionEmitter
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjPoop_Dinopithecus_C::PreventExplosionEmitter(struct FHitResult* Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.PreventExplosionEmitter");

	AProjPoop_Dinopithecus_C_PreventExplosionEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impact != nullptr)
		*Impact = params.Impact;

	return params.ReturnValue;
}


// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.UserConstructionScript
// ()

void AProjPoop_Dinopithecus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.UserConstructionScript");

	AProjPoop_Dinopithecus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ExecuteUbergraph_ProjPoop_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoop_Dinopithecus_C::ExecuteUbergraph_ProjPoop_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C.ExecuteUbergraph_ProjPoop_Dinopithecus");

	AProjPoop_Dinopithecus_C_ExecuteUbergraph_ProjPoop_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
