// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PointOfInterest_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.GetPointOfInterestData
// ()
// Parameters:
// struct FPointOfInterestData    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPointOfInterestData APointOfInterest_Base_BP_C::GetPointOfInterestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.GetPointOfInterestData");

	APointOfInterest_Base_BP_C_GetPointOfInterestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, Const)

void APointOfInterest_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.UserConstructionScript");

	APointOfInterest_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.ExecuteUbergraph_PointOfInterest_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterest_Base_BP_C::ExecuteUbergraph_PointOfInterest_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.ExecuteUbergraph_PointOfInterest_Base_BP");

	APointOfInterest_Base_BP_C_ExecuteUbergraph_PointOfInterest_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
