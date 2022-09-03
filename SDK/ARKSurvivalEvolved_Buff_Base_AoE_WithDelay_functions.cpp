// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_AoE_WithDelay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.UserConstructionScript
// ()

void ABuff_Base_AoE_WithDelay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.UserConstructionScript");

	ABuff_Base_AoE_WithDelay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ReceiveBeginPlay
// ()

void ABuff_Base_AoE_WithDelay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ReceiveBeginPlay");

	ABuff_Base_AoE_WithDelay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.SetFinalAoE
// ()

void ABuff_Base_AoE_WithDelay_C::SetFinalAoE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.SetFinalAoE");

	ABuff_Base_AoE_WithDelay_C_SetFinalAoE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ExecuteUbergraph_Buff_Base_AoE_WithDelay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_AoE_WithDelay_C::ExecuteUbergraph_Buff_Base_AoE_WithDelay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ExecuteUbergraph_Buff_Base_AoE_WithDelay");

	ABuff_Base_AoE_WithDelay_C_ExecuteUbergraph_Buff_Base_AoE_WithDelay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
