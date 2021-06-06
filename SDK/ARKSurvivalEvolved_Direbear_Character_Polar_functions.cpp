// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direbear_Character_Polar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetBestExtraRunSpeedModifier
// ()
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_Polar_C::GetBestExtraRunSpeedModifier(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetBestExtraRunSpeedModifier");

	ADirebear_Character_Polar_C_GetBestExtraRunSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetExtraRunSpeedModifierPercent
// ()
// Parameters:
// float                          PercentVal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_Polar_C::GetExtraRunSpeedModifierPercent(float* PercentVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetExtraRunSpeedModifierPercent");

	ADirebear_Character_Polar_C_GetExtraRunSpeedModifierPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentVal != nullptr)
		*PercentVal = params.PercentVal;
}


// Function Direbear_Character_Polar.Direbear_Character_Polar_C.UserConstructionScript
// ()

void ADirebear_Character_Polar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.UserConstructionScript");

	ADirebear_Character_Polar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direbear_Character_Polar.Direbear_Character_Polar_C.ExecuteUbergraph_Direbear_Character_Polar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_Polar_C::ExecuteUbergraph_Direbear_Character_Polar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.ExecuteUbergraph_Direbear_Character_Polar");

	ADirebear_Character_Polar_C_ExecuteUbergraph_Direbear_Character_Polar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
