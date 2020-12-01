// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FindRouteWaypoint_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UFindRouteWaypoint_SRV_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ReceiveTick");

	UFindRouteWaypoint_SRV_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UFindRouteWaypoint_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ReceiveActivation");

	UFindRouteWaypoint_SRV_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ReceiveDeactivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UFindRouteWaypoint_SRV_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ReceiveDeactivation");

	UFindRouteWaypoint_SRV_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ExecuteUbergraph_FindRouteWaypoint_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFindRouteWaypoint_SRV_C::ExecuteUbergraph_FindRouteWaypoint_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindRouteWaypoint_SRV.FindRouteWaypoint_SRV_C.ExecuteUbergraph_FindRouteWaypoint_SRV");

	UFindRouteWaypoint_SRV_C_ExecuteUbergraph_FindRouteWaypoint_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
