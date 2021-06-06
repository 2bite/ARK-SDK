// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlugHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.GetHudData
// ()
// Parameters:
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAllowedToControlTarget       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  TargetValidationString         (Parm, OutParm, ZeroConstructor)
// class FString                  InvalidTargetString_PreventHUD (Parm, OutParm, ZeroConstructor)
// struct FHUDElement             HUDElementTemplate             (Parm, OutParm)
// float                          BrainJumpTargetCheckDistance   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBrainSlugHUD_Interface_C::GetHudData(class APrimalCharacter* TargetChar, bool* IsAllowedToControlTarget, class FString* TargetValidationString, class FString* InvalidTargetString_PreventHUD, struct FHUDElement* HUDElementTemplate, float* BrainJumpTargetCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.GetHudData");

	UBrainSlugHUD_Interface_C_GetHudData_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllowedToControlTarget != nullptr)
		*IsAllowedToControlTarget = params.IsAllowedToControlTarget;
	if (TargetValidationString != nullptr)
		*TargetValidationString = params.TargetValidationString;
	if (InvalidTargetString_PreventHUD != nullptr)
		*InvalidTargetString_PreventHUD = params.InvalidTargetString_PreventHUD;
	if (HUDElementTemplate != nullptr)
		*HUDElementTemplate = params.HUDElementTemplate;
	if (BrainJumpTargetCheckDistance != nullptr)
		*BrainJumpTargetCheckDistance = params.BrainJumpTargetCheckDistance;
}


// Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.Sync Crosshair Color
// ()
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            outColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBrainSlugHUD_Interface_C::Sync_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.Sync Crosshair Color");

	UBrainSlugHUD_Interface_C_Sync_Crosshair_Color_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outColor != nullptr)
		*outColor = params.outColor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
