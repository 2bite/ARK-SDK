// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinopithecusHUDWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.SetHUDText
// (NetReliable, NetRequest, Exec, Native, Event, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Text                           (Parm, ZeroConstructor)
// float                          TimeToFade                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinopithecusHUDWidget_C::SetHUDText(const class FString& Text, float TimeToFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.SetHUDText");

	UDinopithecusHUDWidget_C_SetHUDText_Params params;
	params.Text = Text;
	params.TimeToFade = TimeToFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Initialize HUD Widget
// ()

void UDinopithecusHUDWidget_C::Initialize_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Initialize HUD Widget");

	UDinopithecusHUDWidget_C_Initialize_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Reset HUD Widget
// ()

void UDinopithecusHUDWidget_C::Reset_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.Reset HUD Widget");

	UDinopithecusHUDWidget_C_Reset_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.DestroyWidget
// ()

void UDinopithecusHUDWidget_C::DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.DestroyWidget");

	UDinopithecusHUDWidget_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifeSpan                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinopithecusHUDWidget_C::StartClosingWidget(float NewLifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.StartClosingWidget");

	UDinopithecusHUDWidget_C_StartClosingWidget_Params params;
	params.NewLifeSpan = NewLifeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.ExecuteUbergraph_DinopithecusHUDWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinopithecusHUDWidget_C::ExecuteUbergraph_DinopithecusHUDWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.ExecuteUbergraph_DinopithecusHUDWidget");

	UDinopithecusHUDWidget_C_ExecuteUbergraph_DinopithecusHUDWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.OnWidgetDestroyed__DelegateSignature
// ()

void UDinopithecusHUDWidget_C::OnWidgetDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinopithecusHUDWidget.DinopithecusHUDWidget_C.OnWidgetDestroyed__DelegateSignature");

	UDinopithecusHUDWidget_C_OnWidgetDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
