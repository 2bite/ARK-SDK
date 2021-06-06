// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PistolTPV_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UPistolTPV_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.BlueprintUpdateAnimation");

	UPistolTPV_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.ExecuteUbergraph_PistolTPV_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPistolTPV_AnimBlueprint_C::ExecuteUbergraph_PistolTPV_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C.ExecuteUbergraph_PistolTPV_AnimBlueprint");

	UPistolTPV_AnimBlueprint_C_ExecuteUbergraph_PistolTPV_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
