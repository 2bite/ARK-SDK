// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDPointOfInterestWidgetBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyPointOfInterestWidget
// ()

void UHUDPointOfInterestWidgetBP_C::DestroyPointOfInterestWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyPointOfInterestWidget");

	UHUDPointOfInterestWidgetBP_C_DestroyPointOfInterestWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Construct
// ()

void UHUDPointOfInterestWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Construct");

	UHUDPointOfInterestWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyWidgetAfterAnim
// ()

void UHUDPointOfInterestWidgetBP_C::DestroyWidgetAfterAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyWidgetAfterAnim");

	UHUDPointOfInterestWidgetBP_C_DestroyWidgetAfterAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UHUDPointOfInterestWidgetBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Tick");

	UHUDPointOfInterestWidgetBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.PlayPulseAnimation
// ()

void UHUDPointOfInterestWidgetBP_C::PlayPulseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.PlayPulseAnimation");

	UHUDPointOfInterestWidgetBP_C_PlayPulseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.ExecuteUbergraph_HUDPointOfInterestWidgetBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDPointOfInterestWidgetBP_C::ExecuteUbergraph_HUDPointOfInterestWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.ExecuteUbergraph_HUDPointOfInterestWidgetBP");

	UHUDPointOfInterestWidgetBP_C_ExecuteUbergraph_HUDPointOfInterestWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
