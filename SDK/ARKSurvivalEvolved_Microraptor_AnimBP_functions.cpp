// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Microraptor_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Microraptor_AnimBP.Microraptor_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UMicroraptor_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_AnimBP.Microraptor_AnimBP_C.BlueprintUpdateAnimation");

	UMicroraptor_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_AnimBP.Microraptor_AnimBP_C.ExecuteUbergraph_Microraptor_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMicroraptor_AnimBP_C::ExecuteUbergraph_Microraptor_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_AnimBP.Microraptor_AnimBP_C.ExecuteUbergraph_Microraptor_AnimBP");

	UMicroraptor_AnimBP_C_ExecuteUbergraph_Microraptor_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
