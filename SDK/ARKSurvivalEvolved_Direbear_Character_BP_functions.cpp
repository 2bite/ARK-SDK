// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direbear_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Direbear_Character_BP.Direbear_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_BP.Direbear_Character_BP_C.BPNotifyClearRider");

	ADirebear_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direbear_Character_BP.Direbear_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_BP.Direbear_Character_BP_C.BPNotifySetRider");

	ADirebear_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direbear_Character_BP.Direbear_Character_BP_C.GetBestExtraRunSpeedModifier
// ()
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_BP_C::GetBestExtraRunSpeedModifier(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_BP.Direbear_Character_BP_C.GetBestExtraRunSpeedModifier");

	ADirebear_Character_BP_C_GetBestExtraRunSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Direbear_Character_BP.Direbear_Character_BP_C.GetExtraRunSpeedModifierPercent
// ()
// Parameters:
// float                          PercentVal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_BP_C::GetExtraRunSpeedModifierPercent(float* PercentVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_BP.Direbear_Character_BP_C.GetExtraRunSpeedModifierPercent");

	ADirebear_Character_BP_C_GetExtraRunSpeedModifierPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentVal != nullptr)
		*PercentVal = params.PercentVal;
}


// Function Direbear_Character_BP.Direbear_Character_BP_C.UserConstructionScript
// ()

void ADirebear_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_BP.Direbear_Character_BP_C.UserConstructionScript");

	ADirebear_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direbear_Character_BP.Direbear_Character_BP_C.ExecuteUbergraph_Direbear_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_BP_C::ExecuteUbergraph_Direbear_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_BP.Direbear_Character_BP_C.ExecuteUbergraph_Direbear_Character_BP");

	ADirebear_Character_BP_C_ExecuteUbergraph_Direbear_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
