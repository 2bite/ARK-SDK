// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SheWhoWaits_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SheWhoWaits_AnimBP.SheWhoWaits_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USheWhoWaits_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SheWhoWaits_AnimBP.SheWhoWaits_AnimBP_C.BlueprintUpdateAnimation");

	USheWhoWaits_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SheWhoWaits_AnimBP.SheWhoWaits_AnimBP_C.ExecuteUbergraph_SheWhoWaits_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USheWhoWaits_AnimBP_C::ExecuteUbergraph_SheWhoWaits_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SheWhoWaits_AnimBP.SheWhoWaits_AnimBP_C.ExecuteUbergraph_SheWhoWaits_AnimBP");

	USheWhoWaits_AnimBP_C_ExecuteUbergraph_SheWhoWaits_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
