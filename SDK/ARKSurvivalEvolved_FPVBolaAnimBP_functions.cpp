// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVBolaAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FPVBolaAnimBP.FPVBolaAnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPVBolaAnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPVBolaAnimBP.FPVBolaAnimBP_C.BlueprintUpdateAnimation");

	UFPVBolaAnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FPVBolaAnimBP.FPVBolaAnimBP_C.ExecuteUbergraph_FPVBolaAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPVBolaAnimBP_C::ExecuteUbergraph_FPVBolaAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPVBolaAnimBP.FPVBolaAnimBP_C.ExecuteUbergraph_FPVBolaAnimBP");

	UFPVBolaAnimBP_C_ExecuteUbergraph_FPVBolaAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
