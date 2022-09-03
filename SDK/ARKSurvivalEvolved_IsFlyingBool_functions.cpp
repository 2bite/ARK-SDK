// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsFlyingBool_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsFlyingBool.IsFlyingBool_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlyingBool_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlyingBool.IsFlyingBool_C.ReceiveConditionCheck");

	UIsFlyingBool_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsFlyingBool.IsFlyingBool_C.ExecuteUbergraph_IsFlyingBool
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlyingBool_C::ExecuteUbergraph_IsFlyingBool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlyingBool.IsFlyingBool_C.ExecuteUbergraph_IsFlyingBool");

	UIsFlyingBool_C_ExecuteUbergraph_IsFlyingBool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
