// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_FishBasketFilled_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.try feed shadowmane
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalDinoCharacter*    fish                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_FishBasketFilled_C::try_feed_shadowmane(class APrimalDinoCharacter* fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.try feed shadowmane");

	UPrimalItem_FishBasketFilled_C_try_feed_shadowmane_Params params;
	params.fish = fish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.Find Shadowmane
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           Backup                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Shadowmane                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_FishBasketFilled_C::Find_Shadowmane(bool Backup, class APrimalDinoCharacter** Shadowmane)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.Find Shadowmane");

	UPrimalItem_FishBasketFilled_C_Find_Shadowmane_Params params;
	params.Backup = Backup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Shadowmane != nullptr)
		*Shadowmane = params.Shadowmane;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPDrawItemIcon
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UCanvas**                ItemCanvas                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ItemCanvasSize                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               ItemCanvasScale                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bItemEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TheTintColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPrimalItem_FishBasketFilled_C::STATIC_BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPDrawItemIcon");

	UPrimalItem_FishBasketFilled_C_BPDrawItemIcon_Params params;
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
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrimalItem_FishBasketFilled_C::STATIC_BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BlueprintUsed");

	UPrimalItem_FishBasketFilled_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPGetItemDescription
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_FishBasketFilled_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
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
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_FishBasketFilled_C::STATIC_BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPCanUse");

	UPrimalItem_FishBasketFilled_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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
