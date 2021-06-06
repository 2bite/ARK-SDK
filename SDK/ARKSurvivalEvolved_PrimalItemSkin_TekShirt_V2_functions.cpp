// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TekShirt_V2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.TrySetTeksuitVFXOffset
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Unequip                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekShirt_V2_C::STATIC_TrySetTeksuitVFXOffset(bool Unequip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.TrySetTeksuitVFXOffset");

	UPrimalItemSkin_TekShirt_V2_C_TrySetTeksuitVFXOffset_Params params;
	params.Unequip = Unequip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.ApplyingSkinOntoItem
// ()
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekShirt_V2_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.ApplyingSkinOntoItem");

	UPrimalItemSkin_TekShirt_V2_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.RemovedSkinFromItem
// ()
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekShirt_V2_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.RemovedSkinFromItem");

	UPrimalItemSkin_TekShirt_V2_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekShirt_V2_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.BlueprintEquipped");

	UPrimalItemSkin_TekShirt_V2_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.BlueprintUnequipped
// ()

void UPrimalItemSkin_TekShirt_V2_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.BlueprintUnequipped");

	UPrimalItemSkin_TekShirt_V2_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.ExecuteUbergraph_PrimalItemSkin_TekShirt_V2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekShirt_V2_C::ExecuteUbergraph_PrimalItemSkin_TekShirt_V2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.ExecuteUbergraph_PrimalItemSkin_TekShirt_V2");

	UPrimalItemSkin_TekShirt_V2_C_ExecuteUbergraph_PrimalItemSkin_TekShirt_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
