// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekShirt_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem
// ()
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekShirt_Gen2_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem");

	UPrimalItemArmor_TekShirt_Gen2_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem
// ()
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekShirt_Gen2_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem");

	UPrimalItemArmor_TekShirt_Gen2_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekShirt_Gen2_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped");

	UPrimalItemArmor_TekShirt_Gen2_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_TekShirt_Gen2_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintUnequipped");

	UPrimalItemArmor_TekShirt_Gen2_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset
// (NetReliable, NetRequest, Exec, Event, Public, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           IsUnequip                      (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekShirt_Gen2_C::TryTekSuitVFXOffset(bool IsUnequip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset");

	UPrimalItemArmor_TekShirt_Gen2_C_TryTekSuitVFXOffset_Params params;
	params.IsUnequip = IsUnequip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekShirt_Gen2_C::ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2");

	UPrimalItemArmor_TekShirt_Gen2_C_ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
