// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.Find Emergency Wander Point Actor
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, DLLImport, Const, NetValidate)
// Parameters:
// class AActor*                  navPointToVisit                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::STATIC_Find_Emergency_Wander_Point_Actor(class AActor** navPointToVisit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.Find Emergency Wander Point Actor");

	AEndBoss_AIController_BP_C_Find_Emergency_Wander_Point_Actor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (navPointToVisit != nullptr)
		*navPointToVisit = params.navPointToVisit;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.Find Next Wander Point Actor
// (NetResponse, Protected, Delegate, NetServer, HasOutParms, DLLImport, Const, NetValidate)
// Parameters:
// class AActor*                  navPointToVisit                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::Find_Next_Wander_Point_Actor(class AActor** navPointToVisit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.Find Next Wander Point Actor");

	AEndBoss_AIController_BP_C_Find_Next_Wander_Point_Actor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (navPointToVisit != nullptr)
		*navPointToVisit = params.navPointToVisit;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.InitializeNavigation
// ()

void AEndBoss_AIController_BP_C::InitializeNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.InitializeNavigation");

	AEndBoss_AIController_BP_C_InitializeNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.OnWanderingPointReached
// ()

void AEndBoss_AIController_BP_C::OnWanderingPointReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.OnWanderingPointReached");

	AEndBoss_AIController_BP_C_OnWanderingPointReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.GetPointFromIndex
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Points                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::GetPointFromIndex(int index, TArray<class AActor*>* Points, class AActor** Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.GetPointFromIndex");

	AEndBoss_AIController_BP_C_GetPointFromIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
	if (Point != nullptr)
		*Point = params.Point;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.HasReachedDestination
// ()
// Parameters:
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           hasReached                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::HasReachedDestination(float AcceptanceRadius, bool* hasReached)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.HasReachedDestination");

	AEndBoss_AIController_BP_C_HasReachedDestination_Params params;
	params.AcceptanceRadius = AcceptanceRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasReached != nullptr)
		*hasReached = params.hasReached;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.UserConstructionScript
// ()

void AEndBoss_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.UserConstructionScript");

	AEndBoss_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.ReceiveBeginPlay
// ()

void AEndBoss_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.ReceiveBeginPlay");

	AEndBoss_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugWanderDestination_Multicast
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::DebugWanderDestination_Multicast(const struct FVector& Location, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugWanderDestination_Multicast");

	AEndBoss_AIController_BP_C_DebugWanderDestination_Multicast_Params params;
	params.Location = Location;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugWanderDestination_Server
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::DebugWanderDestination_Server(const struct FVector& Origin, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugWanderDestination_Server");

	AEndBoss_AIController_BP_C_DebugWanderDestination_Server_Params params;
	params.Origin = Origin;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugLineTrace_Server
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::DebugLineTrace_Server(const struct FVector& Origin, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugLineTrace_Server");

	AEndBoss_AIController_BP_C_DebugLineTrace_Server_Params params;
	params.Origin = Origin;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.ExecuteUbergraph_EndBoss_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_AIController_BP_C::ExecuteUbergraph_EndBoss_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.ExecuteUbergraph_EndBoss_AIController_BP");

	AEndBoss_AIController_BP_C_ExecuteUbergraph_EndBoss_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
