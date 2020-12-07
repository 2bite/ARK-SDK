// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaijuAppendage_Actor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaijuAppendage_Actor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveTick");

	AForestKaijuAppendage_Actor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveBeginPlay
// ()

void AForestKaijuAppendage_Actor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ReceiveBeginPlay");

	AForestKaijuAppendage_Actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.UserConstructionScript
// ()

void AForestKaijuAppendage_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.UserConstructionScript");

	AForestKaijuAppendage_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ExecuteUbergraph_ForestKaijuAppendage_Actor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AForestKaijuAppendage_Actor_C::ExecuteUbergraph_ForestKaijuAppendage_Actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C.ExecuteUbergraph_ForestKaijuAppendage_Actor");

	AForestKaijuAppendage_Actor_C_ExecuteUbergraph_ForestKaijuAppendage_Actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
