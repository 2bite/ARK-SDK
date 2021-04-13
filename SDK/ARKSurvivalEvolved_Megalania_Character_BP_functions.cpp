// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalania_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalania_Character_BP.Megalania_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes
// ()

void AMegalania_Character_BP_C::ClimbingIK_SetNewBlendspaceAxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes");

	AMegalania_Character_BP_C_ClimbingIK_SetNewBlendspaceAxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front
// ()
// Parameters:
// struct FVector2D               axes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalania_Character_BP_C::GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front");

	AMegalania_Character_BP_C_GetClimbingIK_BlendspaceAxes_Front_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (axes != nullptr)
		*axes = params.axes;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.GetCustomSurfaceTraceDistance
// ()
// Parameters:
// int*                           TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          customDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalania_Character_BP_C::GetCustomSurfaceTraceDistance(int* TraceIndex, float* customDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.GetCustomSurfaceTraceDistance");

	AMegalania_Character_BP_C_GetCustomSurfaceTraceDistance_Params params;
	params.TraceIndex = TraceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (customDistance != nullptr)
		*customDistance = params.customDistance;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.IsNormalClimbable
// ()
// Parameters:
// struct FVector*                Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isAverageNormal                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalania_Character_BP_C::IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.IsNormalClimbable");

	AMegalania_Character_BP_C_IsNormalClimbable_Params params;
	params.Normal = Normal;
	params.isAverageNormal = isAverageNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.Check For Prevent Stop Climbing
// ()
// Parameters:
// TArray<bool>                   traceHitsArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           numValidHits                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           numTraces                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           allowClimbing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalania_Character_BP_C::Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* allowClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.Check For Prevent Stop Climbing");

	AMegalania_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params params;
	params.numValidHits = numValidHits;
	params.numTraces = numTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceHitsArray != nullptr)
		*traceHitsArray = params.traceHitsArray;
	if (allowClimbing != nullptr)
		*allowClimbing = params.allowClimbing;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegalania_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanAttack");

	AMegalania_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegalania_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanRiderAttack");

	AMegalania_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.UserConstructionScript
// ()

void AMegalania_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.UserConstructionScript");

	AMegalania_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.ReceiveBeginPlay
// ()

void AMegalania_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.ReceiveBeginPlay");

	AMegalania_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalania_Character_BP.Megalania_Character_BP_C.ExecuteUbergraph_Megalania_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalania_Character_BP_C::ExecuteUbergraph_Megalania_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP.Megalania_Character_BP_C.ExecuteUbergraph_Megalania_Character_BP");

	AMegalania_Character_BP_C_ExecuteUbergraph_Megalania_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
