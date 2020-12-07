// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaMek_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaMek_AnimBlueprint.MegaMek_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UMegaMek_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_AnimBlueprint.MegaMek_AnimBlueprint_C.BlueprintUpdateAnimation");

	UMegaMek_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_AnimBlueprint.MegaMek_AnimBlueprint_C.ExecuteUbergraph_MegaMek_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMegaMek_AnimBlueprint_C::ExecuteUbergraph_MegaMek_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_AnimBlueprint.MegaMek_AnimBlueprint_C.ExecuteUbergraph_MegaMek_AnimBlueprint");

	UMegaMek_AnimBlueprint_C_ExecuteUbergraph_MegaMek_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
