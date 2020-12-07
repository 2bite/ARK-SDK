// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsCrateObject_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsCrateObject.IsCrateObject_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsCrateObject_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsCrateObject.IsCrateObject_C.ReceiveConditionCheck");

	UIsCrateObject_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsCrateObject.IsCrateObject_C.ExecuteUbergraph_IsCrateObject
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsCrateObject_C::ExecuteUbergraph_IsCrateObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsCrateObject.IsCrateObject_C.ExecuteUbergraph_IsCrateObject");

	UIsCrateObject_C_ExecuteUbergraph_IsCrateObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
