// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_TekHandBlades_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPV_TekHandBlades_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.BlueprintUpdateAnimation");

	UFPV_TekHandBlades_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.ExecuteUbergraph_FPV_TekHandBlades_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPV_TekHandBlades_AnimBP_C::ExecuteUbergraph_FPV_TekHandBlades_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C.ExecuteUbergraph_FPV_TekHandBlades_AnimBP");

	UFPV_TekHandBlades_AnimBP_C_ExecuteUbergraph_FPV_TekHandBlades_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
