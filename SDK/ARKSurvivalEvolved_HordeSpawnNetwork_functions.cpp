// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeSpawnNetwork_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetOriginSplinePoints
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHorde_Spline_Path_C*    LastSpline                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AHorde_Spline_Path_C*    SplineData                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DelayTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeSpawnNetwork_C::STATIC_GetOriginSplinePoints(class AHorde_Spline_Path_C* LastSpline, struct FVector* OutLoc, class AHorde_Spline_Path_C** SplineData, float* DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetOriginSplinePoints");

	AHordeSpawnNetwork_C_GetOriginSplinePoints_Params params;
	params.LastSpline = LastSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (SplineData != nullptr)
		*SplineData = params.SplineData;
	if (DelayTime != nullptr)
		*DelayTime = params.DelayTime;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.DoNodeLineTrace
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Begin                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFrontNode                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeSpawnNetwork_C::STATIC_DoNodeLineTrace(const struct FVector& Begin, const struct FVector& End, bool isFrontNode, bool* IsHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.DoNodeLineTrace");

	AHordeSpawnNetwork_C_DoNodeLineTrace_Params params;
	params.Begin = Begin;
	params.End = End;
	params.isFrontNode = isFrontNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHit != nullptr)
		*IsHit = params.IsHit;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetAngleBetweenVectors
// ()
// Parameters:
// struct FVector                 v1                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 v2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeSpawnNetwork_C::GetAngleBetweenVectors(const struct FVector& v1, const struct FVector& v2, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetAngleBetweenVectors");

	AHordeSpawnNetwork_C_GetAngleBetweenVectors_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.FindClosestNode
// (Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 MyLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExcludeExisitingNode          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnPointStruct       ExistingNode                   (Parm)
// struct FSpawnPointStruct       RetNode                        (Parm, OutParm)

void AHordeSpawnNetwork_C::FindClosestNode(const struct FVector& MyLocation, bool bExcludeExisitingNode, const struct FSpawnPointStruct& ExistingNode, struct FSpawnPointStruct* RetNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.FindClosestNode");

	AHordeSpawnNetwork_C_FindClosestNode_Params params;
	params.MyLocation = MyLocation;
	params.bExcludeExisitingNode = bExcludeExisitingNode;
	params.ExistingNode = ExistingNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetNode != nullptr)
		*RetNode = params.RetNode;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.CheckHitTolerance
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm)
// struct FVector                 OriginalVector                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SecondVector                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FrontNode                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitVector                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHordeSpawnNetwork_C::CheckHitTolerance(const struct FHitResult& Hit, const struct FVector& OriginalVector, const struct FVector& SecondVector, class AActor* HitActor, bool FrontNode, const struct FVector& HitVector, bool* IsHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.CheckHitTolerance");

	AHordeSpawnNetwork_C_CheckHitTolerance_Params params;
	params.Hit = Hit;
	params.OriginalVector = OriginalVector;
	params.SecondVector = SecondVector;
	params.HitActor = HitActor;
	params.FrontNode = FrontNode;
	params.HitVector = HitVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHit != nullptr)
		*IsHit = params.IsHit;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.DrawDebugLines
// ()
// Parameters:
// bool                           bIsBlocked                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 v1                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 v2                             (Parm, ZeroConstructor, IsPlainOldData)

void AHordeSpawnNetwork_C::DrawDebugLines(bool bIsBlocked, const struct FVector& v1, const struct FVector& v2)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.DrawDebugLines");

	AHordeSpawnNetwork_C_DrawDebugLines_Params params;
	params.bIsBlocked = bIsBlocked;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetNeighborPoints
// ()

void AHordeSpawnNetwork_C::GetNeighborPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetNeighborPoints");

	AHordeSpawnNetwork_C_GetNeighborPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetValidOriginPoints
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            RingIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnPointStruct       RetNodes                       (Parm, OutParm)

void AHordeSpawnNetwork_C::STATIC_GetValidOriginPoints(int RingIndex, struct FSpawnPointStruct* RetNodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetValidOriginPoints");

	AHordeSpawnNetwork_C_GetValidOriginPoints_Params params;
	params.RingIndex = RingIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetNodes != nullptr)
		*RetNodes = params.RetNodes;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.Evaluate Points
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)

void AHordeSpawnNetwork_C::Evaluate_Points()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.Evaluate Points");

	AHordeSpawnNetwork_C_Evaluate_Points_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetNearbyPoints
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSpawnPointStruct       In                             (Parm)
// int                            ArrayIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnPointStruct> Points                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AHordeSpawnNetwork_C::STATIC_GetNearbyPoints(const struct FSpawnPointStruct& In, int ArrayIndex, TArray<struct FSpawnPointStruct>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetNearbyPoints");

	AHordeSpawnNetwork_C_GetNearbyPoints_Params params;
	params.In = In;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.FindPaths
// (Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)

void AHordeSpawnNetwork_C::FindPaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.FindPaths");

	AHordeSpawnNetwork_C_FindPaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetPointsInRadius
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            RingNum                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnPointStruct> RetSpawnPoints                 (Parm, OutParm, ZeroConstructor)

void AHordeSpawnNetwork_C::GetPointsInRadius(int RingNum, TArray<struct FSpawnPointStruct>* RetSpawnPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetPointsInRadius");

	AHordeSpawnNetwork_C_GetPointsInRadius_Params params;
	params.RingNum = RingNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetSpawnPoints != nullptr)
		*RetSpawnPoints = params.RetSpawnPoints;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateRing
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          RadiusInput                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfPoints                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Radiuslevel                    (Parm, ZeroConstructor, IsPlainOldData)

void AHordeSpawnNetwork_C::GenerateRing(float RadiusInput, int NumOfPoints, int Radiuslevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateRing");

	AHordeSpawnNetwork_C_GenerateRing_Params params;
	params.RadiusInput = RadiusInput;
	params.NumOfPoints = NumOfPoints;
	params.Radiuslevel = Radiuslevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateSpawnPoints
// ()

void AHordeSpawnNetwork_C::GenerateSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateSpawnPoints");

	AHordeSpawnNetwork_C_GenerateSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.UserConstructionScript
// ()

void AHordeSpawnNetwork_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.UserConstructionScript");

	AHordeSpawnNetwork_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.ReceiveBeginPlay
// ()

void AHordeSpawnNetwork_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.ReceiveBeginPlay");

	AHordeSpawnNetwork_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateInitialSpawnPoints
// ()

void AHordeSpawnNetwork_C::GenerateInitialSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateInitialSpawnPoints");

	AHordeSpawnNetwork_C_GenerateInitialSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.ClearAllSpawnPoints
// ()

void AHordeSpawnNetwork_C::ClearAllSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.ClearAllSpawnPoints");

	AHordeSpawnNetwork_C_ClearAllSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.RegeneratePaths
// ()

void AHordeSpawnNetwork_C::RegeneratePaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.RegeneratePaths");

	AHordeSpawnNetwork_C_RegeneratePaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.EnablePostProcess
// ()

void AHordeSpawnNetwork_C::EnablePostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.EnablePostProcess");

	AHordeSpawnNetwork_C_EnablePostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSpawnNetwork.HordeSpawnNetwork_C.ExecuteUbergraph_HordeSpawnNetwork
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHordeSpawnNetwork_C::ExecuteUbergraph_HordeSpawnNetwork(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSpawnNetwork.HordeSpawnNetwork_C.ExecuteUbergraph_HordeSpawnNetwork");

	AHordeSpawnNetwork_C_ExecuteUbergraph_HordeSpawnNetwork_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
