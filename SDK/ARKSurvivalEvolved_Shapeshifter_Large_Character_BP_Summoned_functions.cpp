// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Large_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.Initialize
// ()

void AShapeshifter_Large_Character_BP_Summoned_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.Initialize");

	AShapeshifter_Large_Character_BP_Summoned_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.BPOverrideTamingDescriptionLabel
// ()
// Parameters:
// struct FSlateColor             TextColor                      (Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShapeshifter_Large_Character_BP_Summoned_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.BPOverrideTamingDescriptionLabel");

	AShapeshifter_Large_Character_BP_Summoned_C_BPOverrideTamingDescriptionLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.TrySet Collision
// ()
// Parameters:
// bool*                          Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_Summoned_C::TrySet_Collision(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.TrySet Collision");

	AShapeshifter_Large_Character_BP_Summoned_C_TrySet_Collision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.UserConstructionScript
// ()

void AShapeshifter_Large_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.UserConstructionScript");

	AShapeshifter_Large_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_Summoned_C::ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned");

	AShapeshifter_Large_Character_BP_Summoned_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
