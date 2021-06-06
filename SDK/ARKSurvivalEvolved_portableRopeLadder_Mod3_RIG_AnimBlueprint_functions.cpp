// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_portableRopeLadder_Mod3_RIG_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UportableRopeLadder_Mod3_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");

	UportableRopeLadder_Mod3_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UportableRopeLadder_Mod3_RIG_AnimBlueprint_C::ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C.ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint");

	UportableRopeLadder_Mod3_RIG_AnimBlueprint_C_ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
