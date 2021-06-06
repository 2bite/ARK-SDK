// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStriderRadarPingWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UTekStriderRadarPingWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Tick");

	UTekStriderRadarPingWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetMaterialHostScaleAndLocation
// ()
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void UTekStriderRadarPingWidget_C::SetMaterialHostScaleAndLocation(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetMaterialHostScaleAndLocation");

	UTekStriderRadarPingWidget_C_SetMaterialHostScaleAndLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SyncHUDData
// ()

void UTekStriderRadarPingWidget_C::SyncHUDData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SyncHUDData");

	UTekStriderRadarPingWidget_C_SyncHUDData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetupDynamicMaterial
// ()

void UTekStriderRadarPingWidget_C::SetupDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.SetupDynamicMaterial");

	UTekStriderRadarPingWidget_C_SetupDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.InitializeHUDWidget
// ()
// Parameters:
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void UTekStriderRadarPingWidget_C::InitializeHUDWidget(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.InitializeHUDWidget");

	UTekStriderRadarPingWidget_C_InitializeHUDWidget_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Reset HUD Widget
// ()

void UTekStriderRadarPingWidget_C::Reset_HUD_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.Reset HUD Widget");

	UTekStriderRadarPingWidget_C_Reset_HUD_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.DestroyWidget
// ()

void UTekStriderRadarPingWidget_C::DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.DestroyWidget");

	UTekStriderRadarPingWidget_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.ExecuteUbergraph_TekStriderRadarPingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTekStriderRadarPingWidget_C::ExecuteUbergraph_TekStriderRadarPingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.ExecuteUbergraph_TekStriderRadarPingWidget");

	UTekStriderRadarPingWidget_C_ExecuteUbergraph_TekStriderRadarPingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.OnWidgetDestroyed__DelegateSignature
// ()

void UTekStriderRadarPingWidget_C::OnWidgetDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget.TekStriderRadarPingWidget_C.OnWidgetDestroyed__DelegateSignature");

	UTekStriderRadarPingWidget_C_OnWidgetDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
