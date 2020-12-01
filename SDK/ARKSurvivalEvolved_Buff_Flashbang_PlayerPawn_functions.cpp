// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_PlayerPawn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Flashbang_PlayerPawn_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetBuffPostprocessIntensity");

	ABuff_Flashbang_PlayerPawn_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPSetupForInstigator");

	ABuff_Flashbang_PlayerPawn_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPPreSetupForInstigator");

	ABuff_Flashbang_PlayerPawn_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ShouldStartFading
// ()
// Parameters:
// bool                           ShouldFade                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::ShouldStartFading(bool* ShouldFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ShouldStartFading");

	ABuff_Flashbang_PlayerPawn_C_ShouldStartFading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFade != nullptr)
		*ShouldFade = params.ShouldFade;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.IsNearbyStructure
// (Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            CheckIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          IndexOffset                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StructureInBetween             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::IsNearbyStructure(int CheckIndex, float IndexOffset, bool* StructureInBetween)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.IsNearbyStructure");

	ABuff_Flashbang_PlayerPawn_C_IsNearbyStructure_Params params;
	params.CheckIndex = CheckIndex;
	params.IndexOffset = IndexOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StructureInBetween != nullptr)
		*StructureInBetween = params.StructureInBetween;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateIntensityAverage
// ()
// Parameters:
// float                          Exposure                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewingAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Average                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::CalculateIntensityAverage(float Exposure, float Distance, float ViewingAngle, float* Average)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateIntensityAverage");

	ABuff_Flashbang_PlayerPawn_C_CalculateIntensityAverage_Params params;
	params.Exposure = Exposure;
	params.Distance = Distance;
	params.ViewingAngle = ViewingAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Average != nullptr)
		*Average = params.Average;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateWeightedIntensityAverage
// ()
// Parameters:
// float                          Exposure                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewingAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Average                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::CalculateWeightedIntensityAverage(float Exposure, float Distance, float ViewingAngle, float* Average)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateWeightedIntensityAverage");

	ABuff_Flashbang_PlayerPawn_C_CalculateWeightedIntensityAverage_Params params;
	params.Exposure = Exposure;
	params.Distance = Distance;
	params.ViewingAngle = ViewingAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Average != nullptr)
		*Average = params.Average;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get Normalized Distance
// ()
// Parameters:
// class AActor*                  Actor1                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor2                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::Get_Normalized_Distance(class AActor* Actor1, class AActor* Actor2, float* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get Normalized Distance");

	ABuff_Flashbang_PlayerPawn_C_Get_Normalized_Distance_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get NormalizedViewing Angle
// ()
// Parameters:
// struct FVector                 v1                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 v2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          RetValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::Get_NormalizedViewing_Angle(const struct FVector& v1, const struct FVector& v2, float* RetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get NormalizedViewing Angle");

	ABuff_Flashbang_PlayerPawn_C_Get_NormalizedViewing_Angle_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetValue != nullptr)
		*RetValue = params.RetValue;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetNormalizedExposure
// ()
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::GetNormalizedExposure(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetNormalizedExposure");

	ABuff_Flashbang_PlayerPawn_C_GetNormalizedExposure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.UserConstructionScript
// ()

void ABuff_Flashbang_PlayerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.UserConstructionScript");

	ABuff_Flashbang_PlayerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BuffTickClient");

	ABuff_Flashbang_PlayerPawn_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ROS_CancelBuff
// ()

void ABuff_Flashbang_PlayerPawn_C::ROS_CancelBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ROS_CancelBuff");

	ABuff_Flashbang_PlayerPawn_C_ROS_CancelBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.FlashbangSetup
// ()

void ABuff_Flashbang_PlayerPawn_C::FlashbangSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.FlashbangSetup");

	ABuff_Flashbang_PlayerPawn_C_FlashbangSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Flashbang_PreInit
// ()

void ABuff_Flashbang_PlayerPawn_C::Flashbang_PreInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Flashbang_PreInit");

	ABuff_Flashbang_PlayerPawn_C_Flashbang_PreInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ExecuteUbergraph_Buff_Flashbang_PlayerPawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_PlayerPawn_C::ExecuteUbergraph_Buff_Flashbang_PlayerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ExecuteUbergraph_Buff_Flashbang_PlayerPawn");

	ABuff_Flashbang_PlayerPawn_C_ExecuteUbergraph_Buff_Flashbang_PlayerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
