// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SummonerTumor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SummonerTumor_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPDeactivated");

	ABuff_SummonerTumor_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SummonerTumor.Buff_SummonerTumor_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SummonerTumor_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SummonerTumor.Buff_SummonerTumor_C.BuffTickServer");

	ABuff_SummonerTumor_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPExcludeAoEActor
// ()
// Parameters:
// class AActor**                 ActorToConsider                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SummonerTumor_C::BPExcludeAoEActor(class AActor** ActorToConsider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SummonerTumor.Buff_SummonerTumor_C.BPExcludeAoEActor");

	ABuff_SummonerTumor_C_BPExcludeAoEActor_Params params;
	params.ActorToConsider = ActorToConsider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SummonerTumor.Buff_SummonerTumor_C.UserConstructionScript
// ()

void ABuff_SummonerTumor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SummonerTumor.Buff_SummonerTumor_C.UserConstructionScript");

	ABuff_SummonerTumor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SummonerTumor.Buff_SummonerTumor_C.ExecuteUbergraph_Buff_SummonerTumor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SummonerTumor_C::ExecuteUbergraph_Buff_SummonerTumor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SummonerTumor.Buff_SummonerTumor_C.ExecuteUbergraph_Buff_SummonerTumor");

	ABuff_SummonerTumor_C_ExecuteUbergraph_Buff_SummonerTumor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
