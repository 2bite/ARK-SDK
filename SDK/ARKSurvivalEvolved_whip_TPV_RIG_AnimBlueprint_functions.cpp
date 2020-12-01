// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_whip_TPV_RIG_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function whip_TPV_RIG_AnimBlueprint.whip_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void Uwhip_TPV_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function whip_TPV_RIG_AnimBlueprint.whip_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");

	Uwhip_TPV_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function whip_TPV_RIG_AnimBlueprint.whip_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_whip_TPV_RIG_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Uwhip_TPV_RIG_AnimBlueprint_C::ExecuteUbergraph_whip_TPV_RIG_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function whip_TPV_RIG_AnimBlueprint.whip_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_whip_TPV_RIG_AnimBlueprint");

	Uwhip_TPV_RIG_AnimBlueprint_C_ExecuteUbergraph_whip_TPV_RIG_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
