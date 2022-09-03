// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_PointOfInterest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.CanBeViewed
// ()
// Parameters:
// class AActor*                  ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Base_PointOfInterest_C::CanBeViewed(class AActor* ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.CanBeViewed");

	ABuff_Base_PointOfInterest_C_CanBeViewed_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointCustomData
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABuff_Base_PointOfInterest_C::GetPointCustomData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointCustomData");

	ABuff_Base_PointOfInterest_C_GetPointCustomData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointOfInterestData
// ()
// Parameters:
// struct FPointOfInterestData    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPointOfInterestData ABuff_Base_PointOfInterest_C::GetPointOfInterestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointOfInterestData");

	ABuff_Base_PointOfInterest_C_GetPointOfInterestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.InititalizePointOfInterest
// ()

void ABuff_Base_PointOfInterest_C::InititalizePointOfInterest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.InititalizePointOfInterest");

	ABuff_Base_PointOfInterest_C_InititalizePointOfInterest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UserConstructionScript
// ()

void ABuff_Base_PointOfInterest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UserConstructionScript");

	ABuff_Base_PointOfInterest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.SetPointTagUniqueState
// ()
// Parameters:
// bool                           bNewUniqueState                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_PointOfInterest_C::SetPointTagUniqueState(bool bNewUniqueState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.SetPointTagUniqueState");

	ABuff_Base_PointOfInterest_C_SetPointTagUniqueState_Params params;
	params.bNewUniqueState = bNewUniqueState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UnviewPoint
// ()
// Parameters:
// class AActor*                  UnviewedByActor                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_PointOfInterest_C::UnviewPoint(class AActor* UnviewedByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UnviewPoint");

	ABuff_Base_PointOfInterest_C_UnviewPoint_Params params;
	params.UnviewedByActor = UnviewedByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ViewPoint
// ()
// Parameters:
// class AActor*                  ViewedByActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_PointOfInterest_C::ViewPoint(class AActor* ViewedByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ViewPoint");

	ABuff_Base_PointOfInterest_C_ViewPoint_Params params;
	params.ViewedByActor = ViewedByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ExecuteUbergraph_Buff_Base_PointOfInterest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_PointOfInterest_C::ExecuteUbergraph_Buff_Base_PointOfInterest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ExecuteUbergraph_Buff_Base_PointOfInterest");

	ABuff_Base_PointOfInterest_C_ExecuteUbergraph_Buff_Base_PointOfInterest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
