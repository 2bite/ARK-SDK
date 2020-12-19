// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToStealing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImmuneToStealing_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.BPPreSetupForInstigator");

	ABuff_ImmuneToStealing_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.UserConstructionScript
// ()

void ABuff_ImmuneToStealing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.UserConstructionScript");

	ABuff_ImmuneToStealing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.ReceiveBeginPlay
// ()

void ABuff_ImmuneToStealing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.ReceiveBeginPlay");

	ABuff_ImmuneToStealing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.ExecuteUbergraph_Buff_ImmuneToStealing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImmuneToStealing_C::ExecuteUbergraph_Buff_ImmuneToStealing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToStealing.Buff_ImmuneToStealing_C.ExecuteUbergraph_Buff_ImmuneToStealing");

	ABuff_ImmuneToStealing_C_ExecuteUbergraph_Buff_ImmuneToStealing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
