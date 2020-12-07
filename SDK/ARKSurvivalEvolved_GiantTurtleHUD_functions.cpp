// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtleHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GiantTurtleHUD.GiantTurtleHUD_C.Get_AbilityTextBlock_Text_1
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGiantTurtleHUD_C::Get_AbilityTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.Get_AbilityTextBlock_Text_1");

	UGiantTurtleHUD_C_Get_AbilityTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtleHUD.GiantTurtleHUD_C.Get_BubbleBreathProgressBar_Percent_1
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGiantTurtleHUD_C::Get_BubbleBreathProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.Get_BubbleBreathProgressBar_Percent_1");

	UGiantTurtleHUD_C_Get_BubbleBreathProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtleHUD.GiantTurtleHUD_C.InitFromGiantTurtle
// ()
// Parameters:
// class AGiantTurtle_Character_BP_C* GiantTurtle_Char_BP            (Parm, ZeroConstructor, IsPlainOldData)

void UGiantTurtleHUD_C::InitFromGiantTurtle(class AGiantTurtle_Character_BP_C* GiantTurtle_Char_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.InitFromGiantTurtle");

	UGiantTurtleHUD_C_InitFromGiantTurtle_Params params;
	params.GiantTurtle_Char_BP = GiantTurtle_Char_BP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtleHUD.GiantTurtleHUD_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifespan                    (Parm, ZeroConstructor, IsPlainOldData)

void UGiantTurtleHUD_C::StartClosingWidget(float NewLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.StartClosingWidget");

	UGiantTurtleHUD_C_StartClosingWidget_Params params;
	params.NewLifespan = NewLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtleHUD.GiantTurtleHUD_C.DestroyHudWidget
// ()

void UGiantTurtleHUD_C::DestroyHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.DestroyHudWidget");

	UGiantTurtleHUD_C_DestroyHudWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtleHUD.GiantTurtleHUD_C.ResetHudWidget
// ()

void UGiantTurtleHUD_C::ResetHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.ResetHudWidget");

	UGiantTurtleHUD_C_ResetHudWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtleHUD.GiantTurtleHUD_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGiantTurtleHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.Tick");

	UGiantTurtleHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtleHUD.GiantTurtleHUD_C.ExecuteUbergraph_GiantTurtleHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGiantTurtleHUD_C::ExecuteUbergraph_GiantTurtleHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtleHUD.GiantTurtleHUD_C.ExecuteUbergraph_GiantTurtleHUD");

	UGiantTurtleHUD_C_ExecuteUbergraph_GiantTurtleHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
