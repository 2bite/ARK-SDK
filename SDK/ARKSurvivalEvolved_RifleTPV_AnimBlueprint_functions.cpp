// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RifleTPV_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RifleTPV_AnimBlueprint.RifleTPV_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void URifleTPV_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleTPV_AnimBlueprint.RifleTPV_AnimBlueprint_C.BlueprintUpdateAnimation");

	URifleTPV_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RifleTPV_AnimBlueprint.RifleTPV_AnimBlueprint_C.ExecuteUbergraph_RifleTPV_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URifleTPV_AnimBlueprint_C::ExecuteUbergraph_RifleTPV_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleTPV_AnimBlueprint.RifleTPV_AnimBlueprint_C.ExecuteUbergraph_RifleTPV_AnimBlueprint");

	URifleTPV_AnimBlueprint_C_ExecuteUbergraph_RifleTPV_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
