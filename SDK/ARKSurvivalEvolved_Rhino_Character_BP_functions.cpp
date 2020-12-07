// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rhino_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rhino_Character_BP.Rhino_Character_BP_C.GetBestExtraRunSpeedModifier
// ()
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARhino_Character_BP_C::GetBestExtraRunSpeedModifier(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.GetBestExtraRunSpeedModifier");

	ARhino_Character_BP_C_GetBestExtraRunSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetExtraMeleeDamageModifier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARhino_Character_BP_C::BPGetExtraMeleeDamageModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetExtraMeleeDamageModifier");

	ARhino_Character_BP_C_BPGetExtraMeleeDamageModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARhino_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");

	ARhino_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rhino_Character_BP.Rhino_Character_BP_C.GetExtraRunSpeedModifierPercent
// ()
// Parameters:
// float                          PercentVal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARhino_Character_BP_C::GetExtraRunSpeedModifierPercent(float* PercentVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.GetExtraRunSpeedModifierPercent");

	ARhino_Character_BP_C_GetExtraRunSpeedModifierPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentVal != nullptr)
		*PercentVal = params.PercentVal;
}


// Function Rhino_Character_BP.Rhino_Character_BP_C.UserConstructionScript
// ()

void ARhino_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.UserConstructionScript");

	ARhino_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rhino_Character_BP.Rhino_Character_BP_C.ExecuteUbergraph_Rhino_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARhino_Character_BP_C::ExecuteUbergraph_Rhino_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.ExecuteUbergraph_Rhino_Character_BP");

	ARhino_Character_BP_C_ExecuteUbergraph_Rhino_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
