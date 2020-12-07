// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HordeRouteManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ActivateLostParticle
// ()

void ABuff_HordeRouteManager_C::ActivateLostParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ActivateLostParticle");

	ABuff_HordeRouteManager_C_ActivateLostParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckForBlockades
// ()

void ABuff_HordeRouteManager_C::CheckForBlockades()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckForBlockades");

	ABuff_HordeRouteManager_C_CheckForBlockades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.FlyerInterval Attack
// ()

void ABuff_HordeRouteManager_C::FlyerInterval_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.FlyerInterval Attack");

	ABuff_HordeRouteManager_C_FlyerInterval_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.OnFinishedRouting
// ()

void ABuff_HordeRouteManager_C::OnFinishedRouting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.OnFinishedRouting");

	ABuff_HordeRouteManager_C_OnFinishedRouting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.RemoveRoutingLogic
// ()

void ABuff_HordeRouteManager_C::RemoveRoutingLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.RemoveRoutingLogic");

	ABuff_HordeRouteManager_C_RemoveRoutingLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsValidRoutePath
// ()
// Parameters:
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::IsValidRoutePath(bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsValidRoutePath");

	ABuff_HordeRouteManager_C_IsValidRoutePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckForValidNPCs
// ()

void ABuff_HordeRouteManager_C::CheckForValidNPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckForValidNPCs");

	ABuff_HordeRouteManager_C_CheckForValidNPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ReceiveDestroyed
// ()

void ABuff_HordeRouteManager_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ReceiveDestroyed");

	ABuff_HordeRouteManager_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.GetAiController
// ()
// Parameters:
// class APrimalDinoAIController* Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::GetAiController(class APrimalDinoAIController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.GetAiController");

	ABuff_HordeRouteManager_C_GetAiController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.BuffTickServer");

	ABuff_HordeRouteManager_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.RouteToPoint
// ()

void ABuff_HordeRouteManager_C::RouteToPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.RouteToPoint");

	ABuff_HordeRouteManager_C_RouteToPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.AreVectorsNearlyEqual
// ()
// Parameters:
// struct FVector                 v1                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 v2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ErrorTolerance                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AreEqual                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::AreVectorsNearlyEqual(const struct FVector& v1, const struct FVector& v2, float ErrorTolerance, bool* AreEqual)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.AreVectorsNearlyEqual");

	ABuff_HordeRouteManager_C_AreVectorsNearlyEqual_Params params;
	params.v1 = v1;
	params.v2 = v2;
	params.ErrorTolerance = ErrorTolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreEqual != nullptr)
		*AreEqual = params.AreEqual;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsReady for Next Point
// ()
// Parameters:
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::IsReady_for_Next_Point(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsReady for Next Point");

	ABuff_HordeRouteManager_C_IsReady_for_Next_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.Set Route to Pos
// (NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, Const, NetValidate)
// Parameters:
// struct FSpawnPointStruct       SpawnPoint                     (Parm)
// struct FSpawnPointStruct       Node                           (Parm, OutParm)
// bool                           IsLastPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::STATIC_Set_Route_to_Pos(const struct FSpawnPointStruct& SpawnPoint, struct FSpawnPointStruct* Node, bool* IsLastPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.Set Route to Pos");

	ABuff_HordeRouteManager_C_Set_Route_to_Pos_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
	if (IsLastPoint != nullptr)
		*IsLastPoint = params.IsLastPoint;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.InitiateRoute
// (NetReliable, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, Const, NetValidate)

void ABuff_HordeRouteManager_C::InitiateRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.InitiateRoute");

	ABuff_HordeRouteManager_C_InitiateRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.UserConstructionScript
// ()

void ABuff_HordeRouteManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.UserConstructionScript");

	ABuff_HordeRouteManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.StartRoutingLogic
// ()

void ABuff_HordeRouteManager_C::StartRoutingLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.StartRoutingLogic");

	ABuff_HordeRouteManager_C_StartRoutingLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsStuckDetection
// ()

void ABuff_HordeRouteManager_C::IsStuckDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsStuckDetection");

	ABuff_HordeRouteManager_C_IsStuckDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ResumeStuckDetection
// ()

void ABuff_HordeRouteManager_C::ResumeStuckDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ResumeStuckDetection");

	ABuff_HordeRouteManager_C_ResumeStuckDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckFlyerAttackInterval
// ()

void ABuff_HordeRouteManager_C::CheckFlyerAttackInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckFlyerAttackInterval");

	ABuff_HordeRouteManager_C_CheckFlyerAttackInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.DelayedTeleportAndInitiateRoute
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::DelayedTeleportAndInitiateRoute(class AActor* Target, const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.DelayedTeleportAndInitiateRoute");

	ABuff_HordeRouteManager_C_DelayedTeleportAndInitiateRoute_Params params;
	params.Target = Target;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ExecuteUbergraph_Buff_HordeRouteManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HordeRouteManager_C::ExecuteUbergraph_Buff_HordeRouteManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ExecuteUbergraph_Buff_HordeRouteManager");

	ABuff_HordeRouteManager_C_ExecuteUbergraph_Buff_HordeRouteManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
