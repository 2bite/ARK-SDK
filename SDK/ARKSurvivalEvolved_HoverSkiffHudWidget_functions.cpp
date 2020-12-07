// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HoverSkiffHudWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairPanel_BrushColor_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_RepairPanel_BrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairPanel_BrushColor_1");

	UHoverSkiffHudWidget_C_Get_RepairPanel_BrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeSubStatusTextBlock_Text_1
// (Static, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_SkiffModeSubStatusTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeSubStatusTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_SkiffModeSubStatusTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairLabelTextBlock_Text_1
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_RepairLabelTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairLabelTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_RepairLabelTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.WidgetBoolToVisibilty
// ()
// Parameters:
// class UObject*                 TargetWidget                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseHiddenInsteadOfCollapsed    (Parm, ZeroConstructor, IsPlainOldData)

void UHoverSkiffHudWidget_C::WidgetBoolToVisibilty(class UObject* TargetWidget, bool IsVisible, bool UseHiddenInsteadOfCollapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.WidgetBoolToVisibilty");

	UHoverSkiffHudWidget_C_WidgetBoolToVisibilty_Params params;
	params.TargetWidget = TargetWidget;
	params.IsVisible = IsVisible;
	params.UseHiddenInsteadOfCollapsed = UseHiddenInsteadOfCollapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairProgressBarsPercentAndForegroundColor
// (NetReliable, NetRequest, NetMulticast, NetServer, NetClient, BlueprintCallable, BlueprintPure)

void UHoverSkiffHudWidget_C::UpdateRepairProgressBarsPercentAndForegroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairProgressBarsPercentAndForegroundColor");

	UHoverSkiffHudWidget_C_UpdateRepairProgressBarsPercentAndForegroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairPanelVisibility
// ()

void UHoverSkiffHudWidget_C::UpdateRepairPanelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairPanelVisibility");

	UHoverSkiffHudWidget_C_UpdateRepairPanelVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateAllFuelGaugesPanelVisibility
// ()

void UHoverSkiffHudWidget_C::UpdateAllFuelGaugesPanelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateAllFuelGaugesPanelVisibility");

	UHoverSkiffHudWidget_C_UpdateAllFuelGaugesPanelVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelLabelTextBlock_Text_1
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_AltFuelLabelTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelLabelTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_AltFuelLabelTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Status Visibilities
// ()

void UHoverSkiffHudWidget_C::Update_Status_Visibilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Status Visibilities");

	UHoverSkiffHudWidget_C_Update_Status_Visibilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateNeedleRotation
// ()

void UHoverSkiffHudWidget_C::UpdateNeedleRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateNeedleRotation");

	UHoverSkiffHudWidget_C_UpdateNeedleRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Tractor Beam Crosshair Visuals
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, NetServer, NetClient, BlueprintCallable, BlueprintPure)

void UHoverSkiffHudWidget_C::Update_Tractor_Beam_Crosshair_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Tractor Beam Crosshair Visuals");

	UHoverSkiffHudWidget_C_Update_Tractor_Beam_Crosshair_Visuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageNeedleImage_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelUsageNeedleImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageNeedleImage_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_FuelUsageNeedleImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveNeedleImage_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelReserveNeedleImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveNeedleImage_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_FuelReserveNeedleImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankNeedleImage_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelTankNeedleImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankNeedleImage_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_FuelTankNeedleImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankGaugeImage_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelTankGaugeImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankGaugeImage_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_FuelTankGaugeImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveGaugeImage_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelReserveGaugeImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveGaugeImage_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_FuelReserveGaugeImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.IsExtendedInfoKeyPressed
// ()
// Parameters:
// bool                           bShowExtendedInfoKey           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHoverSkiffHudWidget_C::IsExtendedInfoKeyPressed(bool* bShowExtendedInfoKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.IsExtendedInfoKeyPressed");

	UHoverSkiffHudWidget_C_IsExtendedInfoKeyPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShowExtendedInfoKey != nullptr)
		*bShowExtendedInfoKey = params.bShowExtendedInfoKey;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageGaugeImage_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelUsageGaugeImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageGaugeImage_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_FuelUsageGaugeImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DimGaugesAndNeedlesOnBool
// ()
// Parameters:
// bool                           Bool                           (Parm, ZeroConstructor, IsPlainOldData)

void UHoverSkiffHudWidget_C::DimGaugesAndNeedlesOnBool(bool Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DimGaugesAndNeedlesOnBool");

	UHoverSkiffHudWidget_C_DimGaugesAndNeedlesOnBool_Params params;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.OnShowExtendedInfoKeyPressed
// ()

void UHoverSkiffHudWidget_C::OnShowExtendedInfoKeyPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.OnShowExtendedInfoKeyPressed");

	UHoverSkiffHudWidget_C_OnShowExtendedInfoKeyPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairValueTextBlock_Text_1
// (NetRequest, Native, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::Get_RepairValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairValueTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_RepairValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelValueTextBlock_Text_1
// (Net, NetReliable, NetRequest, NetResponse, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::Get_AltFuelValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelValueTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_AltFuelValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelIcon_Brush_1
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, NetServer, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UHoverSkiffHudWidget_C::STATIC_Get_AltFuelIcon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelIcon_Brush_1");

	UHoverSkiffHudWidget_C_Get_AltFuelIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeValueTextBlock_Text_1
// (Net, NetRequest, Exec, NetResponse, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::Get_SkiffModeValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeValueTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_SkiffModeValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeValueTextBlock_Text_1
// (NetReliable, Exec, Event, NetResponse, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::Get_AltitudeValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeValueTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_AltitudeValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeLabelTextBlock_Text_1
// (Net, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_AltitudeLabelTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeLabelTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_AltitudeLabelTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Debug Text 0
// (NetReliable, NetRequest, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_Debug_Text_0()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Debug Text 0");

	UHoverSkiffHudWidget_C_Get_Debug_Text_0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveTextBlock_Text_1
// (NetRequest, Exec, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_FuelReserveTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_FuelReserveTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Set Progress Bar Fill And Background Colors
// (Exec, Native, NetResponse, NetServer, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProgressBar*            ProgressBar                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FProgressBarStyle       ProgressBarStyle               (Parm, OutParm)

void UHoverSkiffHudWidget_C::Set_Progress_Bar_Fill_And_Background_Colors(class UProgressBar* ProgressBar, const struct FLinearColor& LinearColor, struct FProgressBarStyle* ProgressBarStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Set Progress Bar Fill And Background Colors");

	UHoverSkiffHudWidget_C_Set_Progress_Bar_Fill_And_Background_Colors_Params params;
	params.ProgressBar = ProgressBar;
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressBarStyle != nullptr)
		*ProgressBarStyle = params.ProgressBarStyle;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CurrentElementValueTextBlock_Text_1
// (NetReliable, NetRequest, Native, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_CurrentElementValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CurrentElementValueTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_CurrentElementValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Tractor Progress Bar Percent 
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHoverSkiffHudWidget_C::Get_Tractor_Progress_Bar_Percent_()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Tractor Progress Bar Percent ");

	UHoverSkiffHudWidget_C_Get_Tractor_Progress_Bar_Percent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_Crosshair_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_Crosshair_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_Crosshair_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_Crosshair_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CameraLockIcon_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHoverSkiffHudWidget_C::Get_CameraLockIcon_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CameraLockIcon_ColorAndOpacity_1");

	UHoverSkiffHudWidget_C_Get_CameraLockIcon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelConsumptionRateValueTextBlock_Text_1
// (Net, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_FuelConsumptionRateValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelConsumptionRateValueTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_FuelConsumptionRateValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_ElementFuelValueTextBlock_Text_1
// (Net, Exec, Event, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHoverSkiffHudWidget_C::STATIC_Get_ElementFuelValueTextBlock_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_ElementFuelValueTextBlock_Text_1");

	UHoverSkiffHudWidget_C_Get_ElementFuelValueTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.InitFromSkiff
// ()
// Parameters:
// class ATekHoverSkiff_Character_BP_C* FromSkiff                      (Parm, ZeroConstructor, IsPlainOldData)

void UHoverSkiffHudWidget_C::InitFromSkiff(class ATekHoverSkiff_Character_BP_C* FromSkiff)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.InitFromSkiff");

	UHoverSkiffHudWidget_C_InitFromSkiff_Params params;
	params.FromSkiff = FromSkiff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.StartClosingWidget
// ()
// Parameters:
// float                          NewLifespan                    (Parm, ZeroConstructor, IsPlainOldData)

void UHoverSkiffHudWidget_C::StartClosingWidget(float NewLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.StartClosingWidget");

	UHoverSkiffHudWidget_C_StartClosingWidget_Params params;
	params.NewLifespan = NewLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DestroySkiffHudWidget
// ()

void UHoverSkiffHudWidget_C::DestroySkiffHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DestroySkiffHudWidget");

	UHoverSkiffHudWidget_C_DestroySkiffHudWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ResetSkiffHudWidget
// ()

void UHoverSkiffHudWidget_C::ResetSkiffHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ResetSkiffHudWidget");

	UHoverSkiffHudWidget_C_ResetSkiffHudWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UHoverSkiffHudWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Tick");

	UHoverSkiffHudWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ExecuteUbergraph_HoverSkiffHudWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHoverSkiffHudWidget_C::ExecuteUbergraph_HoverSkiffHudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ExecuteUbergraph_HoverSkiffHudWidget");

	UHoverSkiffHudWidget_C_ExecuteUbergraph_HoverSkiffHudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
