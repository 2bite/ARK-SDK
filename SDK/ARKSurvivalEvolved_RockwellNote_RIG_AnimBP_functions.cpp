// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockwellNote_RIG_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockwellNote_RIG_AnimBP.RockwellNote_RIG_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void URockwellNote_RIG_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockwellNote_RIG_AnimBP.RockwellNote_RIG_AnimBP_C.BlueprintUpdateAnimation");

	URockwellNote_RIG_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockwellNote_RIG_AnimBP.RockwellNote_RIG_AnimBP_C.ExecuteUbergraph_RockwellNote_RIG_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URockwellNote_RIG_AnimBP_C::ExecuteUbergraph_RockwellNote_RIG_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockwellNote_RIG_AnimBP.RockwellNote_RIG_AnimBP_C.ExecuteUbergraph_RockwellNote_RIG_AnimBP");

	URockwellNote_RIG_AnimBP_C_ExecuteUbergraph_RockwellNote_RIG_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
