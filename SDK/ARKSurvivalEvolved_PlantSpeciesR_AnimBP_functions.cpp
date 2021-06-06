// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantSpeciesR_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintPlayAnimationEvent
// ()
// Parameters:
// class UAnimMontage**           AnimationMontage               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          playedAnimLength               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlantSpeciesR_AnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintPlayAnimationEvent");

	UPlantSpeciesR_AnimBP_C_BlueprintPlayAnimationEvent_Params params;
	params.AnimationMontage = AnimationMontage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playedAnimLength != nullptr)
		*playedAnimLength = params.playedAnimLength;
}


// Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_2658
// ()

void UPlantSpeciesR_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_2658()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_2658");

	UPlantSpeciesR_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_2658_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_ModifyBone_600
// ()

void UPlantSpeciesR_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_ModifyBone_600()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_ModifyBone_600");

	UPlantSpeciesR_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_ModifyBone_600_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlantSpeciesR_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.BlueprintUpdateAnimation");

	UPlantSpeciesR_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.ExecuteUbergraph_PlantSpeciesR_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlantSpeciesR_AnimBP_C::ExecuteUbergraph_PlantSpeciesR_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C.ExecuteUbergraph_PlantSpeciesR_AnimBP");

	UPlantSpeciesR_AnimBP_C_ExecuteUbergraph_PlantSpeciesR_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
