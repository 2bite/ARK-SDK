// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GlobalUIData_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar
// (Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            SlotOffset                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotSpan                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ExtendedInfoText               (Parm, ZeroConstructor)
// struct FHUDElement             OutHUDElement                  (Parm, OutParm)

void UGlobalUIData_BP_C::BPGetHUDElements_Module_FuelOrAmmo_ExtraBar(int SlotOffset, int SlotSpan, int StateIndex, float Progress, const class FString& ExtendedInfoText, struct FHUDElement* OutHUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar");

	UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_ExtraBar_Params params;
	params.SlotOffset = SlotOffset;
	params.SlotSpan = SlotSpan;
	params.StateIndex = StateIndex;
	params.Progress = Progress;
	params.ExtendedInfoText = ExtendedInfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHUDElement != nullptr)
		*OutHUDElement = params.OutHUDElement;
}


// Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MainText                       (Parm, ZeroConstructor)
// class FString                  ExtendedInfoText               (Parm, ZeroConstructor)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FHUDElement             OutHUDElement                  (Parm, OutParm)

void UGlobalUIData_BP_C::BPGetHUDElements_Module_FuelOrAmmo(int SlotIndex, int StateIndex, float Progress, const class FString& MainText, const class FString& ExtendedInfoText, class UTexture2D* Icon, struct FHUDElement* OutHUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo");

	UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_Params params;
	params.SlotIndex = SlotIndex;
	params.StateIndex = StateIndex;
	params.Progress = Progress;
	params.MainText = MainText;
	params.ExtendedInfoText = ExtendedInfoText;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHUDElement != nullptr)
		*OutHUDElement = params.OutHUDElement;
}


// Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          StruggleProgressPercent        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RichTextOverride               (Parm, ZeroConstructor)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     Elements                       (Parm, OutParm, ZeroConstructor)
// struct FHUDRichTextOverlayData OutHUDRichTextOverlay          (Parm, OutParm)

void UGlobalUIData_BP_C::BPGetHUDElements_Module_Struggle(class APlayerController* ForPC, float StruggleProgressPercent, const class FString& RichTextOverride, class AActor* Instigator, TArray<struct FHUDElement>* Elements, struct FHUDRichTextOverlayData* OutHUDRichTextOverlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle");

	UGlobalUIData_BP_C_BPGetHUDElements_Module_Struggle_Params params;
	params.ForPC = ForPC;
	params.StruggleProgressPercent = StruggleProgressPercent;
	params.RichTextOverride = RichTextOverride;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Elements != nullptr)
		*Elements = params.Elements;
	if (OutHUDRichTextOverlay != nullptr)
		*OutHUDRichTextOverlay = params.OutHUDRichTextOverlay;
}


// Function GlobalUIData_BP.GlobalUIData_BP_C.ExecuteUbergraph_GlobalUIData_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIData_BP_C::ExecuteUbergraph_GlobalUIData_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.ExecuteUbergraph_GlobalUIData_BP");

	UGlobalUIData_BP_C_ExecuteUbergraph_GlobalUIData_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
