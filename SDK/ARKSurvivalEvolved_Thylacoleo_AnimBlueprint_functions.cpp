// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylacoleo_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thylacoleo_AnimBlueprint.Thylacoleo_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UThylacoleo_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_AnimBlueprint.Thylacoleo_AnimBlueprint_C.BlueprintUpdateAnimation");

	UThylacoleo_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_AnimBlueprint.Thylacoleo_AnimBlueprint_C.ExecuteUbergraph_Thylacoleo_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UThylacoleo_AnimBlueprint_C::ExecuteUbergraph_Thylacoleo_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_AnimBlueprint.Thylacoleo_AnimBlueprint_C.ExecuteUbergraph_Thylacoleo_AnimBlueprint");

	UThylacoleo_AnimBlueprint_C_ExecuteUbergraph_Thylacoleo_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
