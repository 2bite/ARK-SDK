// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MjolnirShocked_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MjolnirShocked.Buff_MjolnirShocked_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MjolnirShocked_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MjolnirShocked.Buff_MjolnirShocked_C.ReceiveTick");

	ABuff_MjolnirShocked_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MjolnirShocked.Buff_MjolnirShocked_C.UserConstructionScript
// ()

void ABuff_MjolnirShocked_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MjolnirShocked.Buff_MjolnirShocked_C.UserConstructionScript");

	ABuff_MjolnirShocked_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MjolnirShocked.Buff_MjolnirShocked_C.ExecuteUbergraph_Buff_MjolnirShocked
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MjolnirShocked_C::ExecuteUbergraph_Buff_MjolnirShocked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MjolnirShocked.Buff_MjolnirShocked_C.ExecuteUbergraph_Buff_MjolnirShocked");

	ABuff_MjolnirShocked_C_ExecuteUbergraph_Buff_MjolnirShocked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
