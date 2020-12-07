// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_ZombieLightning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWyvern_Character_BP_ZombieLightning_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C.BPModifyAimOffsetTargetLocation");

	AWyvern_Character_BP_ZombieLightning_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C.UserConstructionScript
// ()

void AWyvern_Character_BP_ZombieLightning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C.UserConstructionScript");

	AWyvern_Character_BP_ZombieLightning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieLightning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_ZombieLightning_C::ExecuteUbergraph_Wyvern_Character_BP_ZombieLightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieLightning");

	AWyvern_Character_BP_ZombieLightning_C_ExecuteUbergraph_Wyvern_Character_BP_ZombieLightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
