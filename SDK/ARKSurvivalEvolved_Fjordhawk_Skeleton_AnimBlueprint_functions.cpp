// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Skeleton_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UFjordhawk_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	UFjordhawk_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFjordhawk_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint");

	UFjordhawk_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
