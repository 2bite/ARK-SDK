// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PortableRope_Ladder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PortableRope_Ladder.PortableRope_Ladder_C.AllowManualMultiUseActivation
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APortableRope_Ladder_C::AllowManualMultiUseActivation(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.AllowManualMultiUseActivation");

	APortableRope_Ladder_C_AllowManualMultiUseActivation_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PortableRope_Ladder.PortableRope_Ladder_C.BPAttachedRootComponent
// ()

void APortableRope_Ladder_C::BPAttachedRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.BPAttachedRootComponent");

	APortableRope_Ladder_C_BPAttachedRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortableRope_Ladder.PortableRope_Ladder_C.BuildLadder
// (Exec, Native, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void APortableRope_Ladder_C::BuildLadder()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.BuildLadder");

	APortableRope_Ladder_C_BuildLadder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortableRope_Ladder.PortableRope_Ladder_C.UpdateBoxCollitionForRetraction
// ()

void APortableRope_Ladder_C::UpdateBoxCollitionForRetraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.UpdateBoxCollitionForRetraction");

	APortableRope_Ladder_C_UpdateBoxCollitionForRetraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortableRope_Ladder.PortableRope_Ladder_C.UserConstructionScript
// ()

void APortableRope_Ladder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.UserConstructionScript");

	APortableRope_Ladder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortableRope_Ladder.PortableRope_Ladder_C.ExecuteUbergraph_PortableRope_Ladder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APortableRope_Ladder_C::ExecuteUbergraph_PortableRope_Ladder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder.PortableRope_Ladder_C.ExecuteUbergraph_PortableRope_Ladder");

	APortableRope_Ladder_C_ExecuteUbergraph_PortableRope_Ladder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
