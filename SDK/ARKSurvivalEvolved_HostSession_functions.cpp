// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HostSession_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HostSession.HostSession_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UHostSession_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostSession.HostSession_C.Tick");

	UHostSession_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostSession.HostSession_C.BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature
// ()

void UHostSession_C::BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostSession.HostSession_C.BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature");

	UHostSession_C_BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostSession.HostSession_C.ExecuteUbergraph_HostSession
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHostSession_C::ExecuteUbergraph_HostSession(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostSession.HostSession_C.ExecuteUbergraph_HostSession");

	UHostSession_C_ExecuteUbergraph_HostSession_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
