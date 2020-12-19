// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DKFlockTargetMessage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DKFlockTargetMessage.Buff_DKFlockTargetMessage_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKFlockTargetMessage_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKFlockTargetMessage.Buff_DKFlockTargetMessage_C.BPSetupForInstigator");

	ABuff_DKFlockTargetMessage_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKFlockTargetMessage.Buff_DKFlockTargetMessage_C.UserConstructionScript
// ()

void ABuff_DKFlockTargetMessage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKFlockTargetMessage.Buff_DKFlockTargetMessage_C.UserConstructionScript");

	ABuff_DKFlockTargetMessage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKFlockTargetMessage.Buff_DKFlockTargetMessage_C.ExecuteUbergraph_Buff_DKFlockTargetMessage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKFlockTargetMessage_C::ExecuteUbergraph_Buff_DKFlockTargetMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKFlockTargetMessage.Buff_DKFlockTargetMessage_C.ExecuteUbergraph_Buff_DKFlockTargetMessage");

	ABuff_DKFlockTargetMessage_C_ExecuteUbergraph_Buff_DKFlockTargetMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
