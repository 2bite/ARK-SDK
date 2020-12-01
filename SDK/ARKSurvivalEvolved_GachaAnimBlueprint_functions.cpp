// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GachaAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GachaAnimBlueprint.GachaAnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UGachaAnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function GachaAnimBlueprint.GachaAnimBlueprint_C.BlueprintUpdateAnimation");

	UGachaAnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GachaAnimBlueprint.GachaAnimBlueprint_C.ExecuteUbergraph_GachaAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGachaAnimBlueprint_C::ExecuteUbergraph_GachaAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GachaAnimBlueprint.GachaAnimBlueprint_C.ExecuteUbergraph_GachaAnimBlueprint");

	UGachaAnimBlueprint_C_ExecuteUbergraph_GachaAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
