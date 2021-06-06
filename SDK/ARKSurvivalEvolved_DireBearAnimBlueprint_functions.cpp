// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DireBearAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DireBearAnimBlueprint.DireBearAnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UDireBearAnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function DireBearAnimBlueprint.DireBearAnimBlueprint_C.BlueprintUpdateAnimation");

	UDireBearAnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DireBearAnimBlueprint.DireBearAnimBlueprint_C.ExecuteUbergraph_DireBearAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDireBearAnimBlueprint_C::ExecuteUbergraph_DireBearAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DireBearAnimBlueprint.DireBearAnimBlueprint_C.ExecuteUbergraph_DireBearAnimBlueprint");

	UDireBearAnimBlueprint_C_ExecuteUbergraph_DireBearAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
