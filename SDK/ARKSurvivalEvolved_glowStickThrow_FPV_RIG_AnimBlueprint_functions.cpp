// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_glowStickThrow_FPV_RIG_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function glowStickThrow_FPV_RIG_AnimBlueprint.glowStickThrow_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UglowStickThrow_FPV_RIG_AnimBlueprint_C::ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function glowStickThrow_FPV_RIG_AnimBlueprint.glowStickThrow_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint");

	UglowStickThrow_FPV_RIG_AnimBlueprint_C_ExecuteUbergraph_glowStickThrow_FPV_RIG_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
