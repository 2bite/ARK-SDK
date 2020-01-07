// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SponsoredModsUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SponsoredModsUI.SponsoredModsUI_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void USponsoredModsUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.Tick");

	USponsoredModsUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SponsoredModsUI.SponsoredModsUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
// ()

void USponsoredModsUI_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature");

	USponsoredModsUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SponsoredModsUI.SponsoredModsUI_C.OnClickedObject_Event
// ()
// Parameters:
// class UWidget*                 clickedWidget                  (Parm, ZeroConstructor, IsPlainOldData)

void USponsoredModsUI_C::OnClickedObject_Event(class UWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.OnClickedObject_Event");

	USponsoredModsUI_C_OnClickedObject_Event_Params params;
	params.clickedWidget = clickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SponsoredModsUI.SponsoredModsUI_C.ExecuteUbergraph_SponsoredModsUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USponsoredModsUI_C::ExecuteUbergraph_SponsoredModsUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SponsoredModsUI.SponsoredModsUI_C.ExecuteUbergraph_SponsoredModsUI");

	USponsoredModsUI_C_ExecuteUbergraph_SponsoredModsUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
