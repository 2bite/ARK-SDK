// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_MiningDrill_HM_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UTPV_MiningDrill_HM_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.BlueprintUpdateAnimation");

	UTPV_MiningDrill_HM_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTPV_MiningDrill_HM_AnimBP_C::ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP");

	UTPV_MiningDrill_HM_AnimBP_C_ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
