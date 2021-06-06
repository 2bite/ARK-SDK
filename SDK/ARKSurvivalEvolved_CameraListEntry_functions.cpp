// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraListEntry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraListEntry.CameraListEntry_C.SetSelected
// ()
// Parameters:
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraListEntry_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.SetSelected");

	UCameraListEntry_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraListEntry.CameraListEntry_C.InitForCamera
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USecurityCameraHUD_C*    OwningHUD                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  CameraName                     (Parm, ZeroConstructor)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UCameraListEntry_C::STATIC_InitForCamera(class USecurityCameraHUD_C* OwningHUD, const class FString& CameraName, const struct FVector& Location, int index, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.InitForCamera");

	UCameraListEntry_C_InitForCamera_Params params;
	params.OwningHUD = OwningHUD;
	params.CameraName = CameraName;
	params.Location = Location;
	params.index = index;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraListEntry.CameraListEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature
// ()

void UCameraListEntry_C::BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature");

	UCameraListEntry_C_BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraListEntry.CameraListEntry_C.ExecuteUbergraph_CameraListEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraListEntry_C::ExecuteUbergraph_CameraListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraListEntry.CameraListEntry_C.ExecuteUbergraph_CameraListEntry");

	UCameraListEntry_C_ExecuteUbergraph_CameraListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
