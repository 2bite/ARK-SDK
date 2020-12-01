// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylaco_CanPounceOnTargetFromTree_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ReceiveConditionCheck
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasDefaults, NetClient)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UThylaco_CanPounceOnTargetFromTree_DK_C::STATIC_ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ReceiveConditionCheck");

	UThylaco_CanPounceOnTargetFromTree_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UThylaco_CanPounceOnTargetFromTree_DK_C::ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C.ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK");

	UThylaco_CanPounceOnTargetFromTree_DK_C_ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
