// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HM_Hoversail_Riding_AnimBP_HF_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HM_Hoversail_Riding_AnimBP_HF.HM_Hoversail_Riding_AnimBP_HF_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UHM_Hoversail_Riding_AnimBP_HF_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function HM_Hoversail_Riding_AnimBP_HF.HM_Hoversail_Riding_AnimBP_HF_C.BlueprintUpdateAnimation");

	UHM_Hoversail_Riding_AnimBP_HF_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HM_Hoversail_Riding_AnimBP_HF.HM_Hoversail_Riding_AnimBP_HF_C.ExecuteUbergraph_HM_Hoversail_Riding_AnimBP_HF
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHM_Hoversail_Riding_AnimBP_HF_C::ExecuteUbergraph_HM_Hoversail_Riding_AnimBP_HF(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HM_Hoversail_Riding_AnimBP_HF.HM_Hoversail_Riding_AnimBP_HF_C.ExecuteUbergraph_HM_Hoversail_Riding_AnimBP_HF");

	UHM_Hoversail_Riding_AnimBP_HF_C_ExecuteUbergraph_HM_Hoversail_Riding_AnimBP_HF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
