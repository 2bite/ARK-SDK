// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_FishBasketFilled_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.Find Shadowmane
// (NetReliable, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           backup                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Shadowmane                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_FishBasketFilled_C::Find_Shadowmane(bool backup, class APrimalDinoCharacter** Shadowmane)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.Find Shadowmane");

	UPrimalItem_FishBasketFilled_C_Find_Shadowmane_Params params;
	params.backup = backup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Shadowmane != nullptr)
		*Shadowmane = params.Shadowmane;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPDrawItemIcon
// (NetReliable, Exec, Native, NetResponse, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvas**                ItemCanvas                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ItemCanvasSize                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               ItemCanvasScale                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bItemEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TheTintColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPrimalItem_FishBasketFilled_C::BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPDrawItemIcon");

	UPrimalItem_FishBasketFilled_C_BPDrawItemIcon_Params params;
	params.ItemCanvas = ItemCanvas;
	params.bItemEnabled = bItemEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCanvasSize != nullptr)
		*ItemCanvasSize = params.ItemCanvasSize;
	if (ItemCanvasScale != nullptr)
		*ItemCanvasScale = params.ItemCanvasScale;
	if (TheTintColor != nullptr)
		*TheTintColor = params.TheTintColor;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.SlottedTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_FishBasketFilled_C::SlottedTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.SlottedTick");

	UPrimalItem_FishBasketFilled_C_SlottedTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BlueprintUsed
// (NetReliable, Exec, Event, Static, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPrimalItem_FishBasketFilled_C::STATIC_BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BlueprintUsed");

	UPrimalItem_FishBasketFilled_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPGetItemDescription
// (NetReliable, Native, Event, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_FishBasketFilled_C::STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPGetItemDescription");

	UPrimalItem_FishBasketFilled_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPCanUse
// (Exec, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_FishBasketFilled_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPCanUse");

	UPrimalItem_FishBasketFilled_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.ExecuteUbergraph_PrimalItem_FishBasketFilled
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_FishBasketFilled_C::ExecuteUbergraph_PrimalItem_FishBasketFilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.ExecuteUbergraph_PrimalItem_FishBasketFilled");

	UPrimalItem_FishBasketFilled_C_ExecuteUbergraph_PrimalItem_FishBasketFilled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
