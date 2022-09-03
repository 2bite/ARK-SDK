// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndyEndSlideSpeedBoost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.UserConstructionScript
// ()

void ABuff_AndyEndSlideSpeedBoost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.UserConstructionScript");

	ABuff_AndyEndSlideSpeedBoost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyEndSlideSpeedBoost_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPSetupForInstigator");

	ABuff_AndyEndSlideSpeedBoost_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyEndSlideSpeedBoost_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ReceiveTick");

	ABuff_AndyEndSlideSpeedBoost_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyEndSlideSpeedBoost_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.BPDeactivated");

	ABuff_AndyEndSlideSpeedBoost_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyEndSlideSpeedBoost_C::ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyEndSlideSpeedBoost.Buff_AndyEndSlideSpeedBoost_C.ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost");

	ABuff_AndyEndSlideSpeedBoost_C_ExecuteUbergraph_Buff_AndyEndSlideSpeedBoost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
