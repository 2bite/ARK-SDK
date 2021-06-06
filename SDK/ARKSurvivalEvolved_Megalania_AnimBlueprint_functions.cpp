// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalania_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalania_AnimBlueprint.Megalania_AnimBlueprint_C.BlueprintInitializeAnimation
// ()

void UMegalania_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_AnimBlueprint.Megalania_AnimBlueprint_C.BlueprintInitializeAnimation");

	UMegalania_AnimBlueprint_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalania_AnimBlueprint.Megalania_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UMegalania_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_AnimBlueprint.Megalania_AnimBlueprint_C.BlueprintUpdateAnimation");

	UMegalania_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalania_AnimBlueprint.Megalania_AnimBlueprint_C.ExecuteUbergraph_Megalania_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMegalania_AnimBlueprint_C::ExecuteUbergraph_Megalania_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_AnimBlueprint.Megalania_AnimBlueprint_C.ExecuteUbergraph_Megalania_AnimBlueprint");

	UMegalania_AnimBlueprint_C_ExecuteUbergraph_Megalania_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
