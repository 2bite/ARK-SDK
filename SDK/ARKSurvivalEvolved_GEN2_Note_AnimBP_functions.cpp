// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GEN2_Note_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GEN2_Note_AnimBP.GEN2_Note_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UGEN2_Note_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function GEN2_Note_AnimBP.GEN2_Note_AnimBP_C.BlueprintUpdateAnimation");

	UGEN2_Note_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GEN2_Note_AnimBP.GEN2_Note_AnimBP_C.ExecuteUbergraph_GEN2_Note_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGEN2_Note_AnimBP_C::ExecuteUbergraph_GEN2_Note_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GEN2_Note_AnimBP.GEN2_Note_AnimBP_C.ExecuteUbergraph_GEN2_Note_AnimBP");

	UGEN2_Note_AnimBP_C_ExecuteUbergraph_GEN2_Note_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
