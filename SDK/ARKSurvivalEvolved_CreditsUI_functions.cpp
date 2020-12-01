// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CreditsUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CreditsUI.CreditsUI_C.Construct
// ()

void UCreditsUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.Construct");

	UCreditsUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsUI.CreditsUI_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreditsUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.Tick");

	UCreditsUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsUI.CreditsUI_C.CloseButtonEvent
// ()

void UCreditsUI_C::CloseButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.CloseButtonEvent");

	UCreditsUI_C_CloseButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsUI.CreditsUI_C.RemovedFromViewport
// ()

void UCreditsUI_C::RemovedFromViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.RemovedFromViewport");

	UCreditsUI_C_RemovedFromViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreditsUI_C::ExecuteUbergraph_CreditsUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI");

	UCreditsUI_C_ExecuteUbergraph_CreditsUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
