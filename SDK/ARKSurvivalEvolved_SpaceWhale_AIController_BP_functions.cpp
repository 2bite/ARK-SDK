// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.BPOnFleeEvent
// ()

void ASpaceWhale_AIController_BP_C::BPOnFleeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.BPOnFleeEvent");

	ASpaceWhale_AIController_BP_C_BPOnFleeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.ReceiveTick
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.ReceiveTick");

	ASpaceWhale_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.UserConstructionScript
// ()

void ASpaceWhale_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.UserConstructionScript");

	ASpaceWhale_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.ExecuteUbergraph_SpaceWhale_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_AIController_BP_C::ExecuteUbergraph_SpaceWhale_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP.SpaceWhale_AIController_BP_C.ExecuteUbergraph_SpaceWhale_AIController_BP");

	ASpaceWhale_AIController_BP_C_ExecuteUbergraph_SpaceWhale_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
