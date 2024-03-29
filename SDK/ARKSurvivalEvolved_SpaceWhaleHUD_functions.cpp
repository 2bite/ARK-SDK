// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhaleHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveValueTextBlock_Text_1
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Private, Delegate, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USpaceWhaleHUD_C::STATIC_Get_HyperdriveValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveValueTextBlock_Text_1");

	USpaceWhaleHUD_C_Get_HyperdriveValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Set Progress Bar Foreground Color
// (Static, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ProgressBarObject              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, ZeroConstructor, IsPlainOldData)

void USpaceWhaleHUD_C::STATIC_Set_Progress_Bar_Foreground_Color(class UObject* ProgressBarObject, const struct FLinearColor& LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Set Progress Bar Foreground Color");

	USpaceWhaleHUD_C_Set_Progress_Bar_Foreground_Color_Params params;
	params.ProgressBarObject = ProgressBarObject;
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerBelowProgressBar_Percent_1
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpaceWhaleHUD_C::Get_CosmicPowerBelowProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerBelowProgressBar_Percent_1");

	USpaceWhaleHUD_C_Get_CosmicPowerBelowProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerValueTextBlock_Text_1
// (Net, NetReliable, NetRequest, NetMulticast, Public, Private, Delegate, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USpaceWhaleHUD_C::Get_CosmicPowerValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerValueTextBlock_Text_1");

	USpaceWhaleHUD_C_Get_CosmicPowerValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerAboveProgressBar_Percent_1
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpaceWhaleHUD_C::Get_CosmicPowerAboveProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_CosmicPowerAboveProgressBar_Percent_1");

	USpaceWhaleHUD_C_Get_CosmicPowerAboveProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveProgressBar_Percent_1
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USpaceWhaleHUD_C::Get_HyperdriveProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get_HyperdriveProgressBar_Percent_1");

	USpaceWhaleHUD_C_Get_HyperdriveProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get BombsHintText 0
// (Net, NetReliable, Native, Event, NetMulticast, Public, Private, Delegate, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USpaceWhaleHUD_C::Get_BombsHintText_0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Get BombsHintText 0");

	USpaceWhaleHUD_C_Get_BombsHintText_0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.InitFromSpaceWhale
// ()
// Parameters:
// class ASpaceWhale_Character_BP_C* SpaceWhaleCharBP               (Parm, ZeroConstructor, IsPlainOldData)

void USpaceWhaleHUD_C::InitFromSpaceWhale(class ASpaceWhale_Character_BP_C* SpaceWhaleCharBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.InitFromSpaceWhale");

	USpaceWhaleHUD_C_InitFromSpaceWhale_Params params;
	params.SpaceWhaleCharBP = SpaceWhaleCharBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifeSpan                    (Parm, ZeroConstructor, IsPlainOldData)

void USpaceWhaleHUD_C::StartClosingWidget(float NewLifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.StartClosingWidget");

	USpaceWhaleHUD_C_StartClosingWidget_Params params;
	params.NewLifeSpan = NewLifeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.DestroyHudWidget
// ()

void USpaceWhaleHUD_C::DestroyHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.DestroyHudWidget");

	USpaceWhaleHUD_C_DestroyHudWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.ResetHudWidget
// ()

void USpaceWhaleHUD_C::ResetHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.ResetHudWidget");

	USpaceWhaleHUD_C_ResetHudWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void USpaceWhaleHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Tick");

	USpaceWhaleHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.Construct
// ()

void USpaceWhaleHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.Construct");

	USpaceWhaleHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleHUD.SpaceWhaleHUD_C.ExecuteUbergraph_SpaceWhaleHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USpaceWhaleHUD_C::ExecuteUbergraph_SpaceWhaleHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleHUD.SpaceWhaleHUD_C.ExecuteUbergraph_SpaceWhaleHUD");

	USpaceWhaleHUD_C_ExecuteUbergraph_SpaceWhaleHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
