// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.BPDinoTooltipCustomTamingProgressBar
// ()
// Parameters:
// bool                           overrideTamingProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_Character_BP_Summoned_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.BPDinoTooltipCustomTamingProgressBar");

	ALionfishLion_Character_BP_Summoned_C_BPDinoTooltipCustomTamingProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTamingProgressBarIfActive != nullptr)
		*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.UserConstructionScript
// ()

void ALionfishLion_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.UserConstructionScript");

	ALionfishLion_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.ExecuteUbergraph_LionfishLion_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_Summoned_C::ExecuteUbergraph_LionfishLion_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.ExecuteUbergraph_LionfishLion_Character_BP_Summoned");

	ALionfishLion_Character_BP_Summoned_C_ExecuteUbergraph_LionfishLion_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
