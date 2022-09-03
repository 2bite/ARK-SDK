// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsFlyingPhysics_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsFlyingPhysics.IsFlyingPhysics_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlyingPhysics_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlyingPhysics.IsFlyingPhysics_C.ReceiveConditionCheck");

	UIsFlyingPhysics_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsFlyingPhysics.IsFlyingPhysics_C.ExecuteUbergraph_IsFlyingPhysics
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsFlyingPhysics_C::ExecuteUbergraph_IsFlyingPhysics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsFlyingPhysics.IsFlyingPhysics_C.ExecuteUbergraph_IsFlyingPhysics");

	UIsFlyingPhysics_C_ExecuteUbergraph_IsFlyingPhysics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
