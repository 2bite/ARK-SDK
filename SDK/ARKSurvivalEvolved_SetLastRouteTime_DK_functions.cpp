// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SetLastRouteTime_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetLastRouteTime_DK.SetLastRouteTime_DK_C.ReceiveExecutionStart
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USetLastRouteTime_DK_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetLastRouteTime_DK.SetLastRouteTime_DK_C.ReceiveExecutionStart");

	USetLastRouteTime_DK_C_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetLastRouteTime_DK.SetLastRouteTime_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USetLastRouteTime_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetLastRouteTime_DK.SetLastRouteTime_DK_C.ReceiveConditionCheck");

	USetLastRouteTime_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetLastRouteTime_DK.SetLastRouteTime_DK_C.ExecuteUbergraph_SetLastRouteTime_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetLastRouteTime_DK_C::ExecuteUbergraph_SetLastRouteTime_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetLastRouteTime_DK.SetLastRouteTime_DK_C.ExecuteUbergraph_SetLastRouteTime_DK");

	USetLastRouteTime_DK_C_ExecuteUbergraph_SetLastRouteTime_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
