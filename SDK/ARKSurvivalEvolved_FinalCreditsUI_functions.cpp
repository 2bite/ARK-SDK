// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FinalCreditsUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FinalCreditsUI.FinalCreditsUI_C.Construct
// ()

void UFinalCreditsUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.Construct");

	UFinalCreditsUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalCreditsUI.FinalCreditsUI_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UFinalCreditsUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.Tick");

	UFinalCreditsUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent
// ()

void UFinalCreditsUI_C::CloseButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent");

	UFinalCreditsUI_C_CloseButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport
// ()

void UFinalCreditsUI_C::RemovedFromViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport");

	UFinalCreditsUI_C_RemovedFromViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport
// ()

void UFinalCreditsUI_C::AddedToViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport");

	UFinalCreditsUI_C_AddedToViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFinalCreditsUI_C::ExecuteUbergraph_FinalCreditsUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI");

	UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
