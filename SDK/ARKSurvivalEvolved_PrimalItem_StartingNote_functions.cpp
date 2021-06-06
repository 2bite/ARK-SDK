// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_StartingNote_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
// ()
// Parameters:
// class UCanvas**                ItemCanvas                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ItemCanvasSize                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               ItemCanvasScale                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bItemEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TheTintColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPrimalItem_StartingNote_C::BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon");

	UPrimalItem_StartingNote_C_BPDrawItemIcon_Params params;
	params.ItemCanvas = ItemCanvas;
	params.bItemEnabled = bItemEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCanvasSize != nullptr)
		*ItemCanvasSize = params.ItemCanvasSize;
	if (ItemCanvasScale != nullptr)
		*ItemCanvasScale = params.ItemCanvasScale;
	if (TheTintColor != nullptr)
		*TheTintColor = params.TheTintColor;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPrimalItem_StartingNote_C::BPGetItemIcon(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon");

	UPrimalItem_StartingNote_C_BPGetItemIcon_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
// (Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_StartingNote_C::IsLocalImplant(class AShooterPlayerController* ForPC, bool* IsLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant");

	UPrimalItem_StartingNote_C_IsLocalImplant_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocal != nullptr)
		*IsLocal = params.IsLocal;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
// ()
// Parameters:
// class FString*                 ItemNameIn                     (Parm, ZeroConstructor)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_StartingNote_C::BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName");

	UPrimalItem_StartingNote_C_BPGetItemName_Params params;
	params.ItemNameIn = ItemNameIn;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
// (NetRequest, Exec, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                  SurvData                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  OutString                      (Parm, OutParm, ZeroConstructor)

void UPrimalItem_StartingNote_C::STATIC_Get_Survival_Quotient_String(TArray<float>* SurvData, class FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String");

	UPrimalItem_StartingNote_C_Get_Survival_Quotient_String_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SurvData != nullptr)
		*SurvData = params.SurvData;
	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
// (NetReliable, NetRequest, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_StartingNote_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription");

	UPrimalItem_StartingNote_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWorld**                 OptionalInitWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_StartingNote_C::STATIC_BPPreInitializeItem(class UWorld** OptionalInitWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem");

	UPrimalItem_StartingNote_C_BPPreInitializeItem_Params params;
	params.OptionalInitWorld = OptionalInitWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_StartingNote_C::ExecuteUbergraph_PrimalItem_StartingNote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote");

	UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
