// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tek_JumpPad_AnimBluePrint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_870
// ()

void UTek_JumpPad_AnimBluePrint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_870()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_870");

	UTek_JumpPad_AnimBluePrint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_870_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UTek_JumpPad_AnimBluePrint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.BlueprintUpdateAnimation");

	UTek_JumpPad_AnimBluePrint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.ExecuteUbergraph_Tek_JumpPad_AnimBluePrint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTek_JumpPad_AnimBluePrint_C::ExecuteUbergraph_Tek_JumpPad_AnimBluePrint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.ExecuteUbergraph_Tek_JumpPad_AnimBluePrint");

	UTek_JumpPad_AnimBluePrint_C_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
