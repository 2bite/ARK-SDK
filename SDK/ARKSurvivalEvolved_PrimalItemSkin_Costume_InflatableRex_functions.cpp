// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Costume_InflatableRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ApplyingSkinOntoItem
// ()
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Costume_InflatableRex_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ApplyingSkinOntoItem");

	UPrimalItemSkin_Costume_InflatableRex_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemovedSkinFromItem
// ()
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Costume_InflatableRex_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemovedSkinFromItem");

	UPrimalItemSkin_Costume_InflatableRex_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintUnequipped
// ()

void UPrimalItemSkin_Costume_InflatableRex_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintUnequipped");

	UPrimalItemSkin_Costume_InflatableRex_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Costume_InflatableRex_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintEquipped");

	UPrimalItemSkin_Costume_InflatableRex_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.AddBuff
// ()

void UPrimalItemSkin_Costume_InflatableRex_C::AddBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.AddBuff");

	UPrimalItemSkin_Costume_InflatableRex_C_AddBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemoveBuff
// ()

void UPrimalItemSkin_Costume_InflatableRex_C::RemoveBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemoveBuff");

	UPrimalItemSkin_Costume_InflatableRex_C_RemoveBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Costume_InflatableRex_C::ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex");

	UPrimalItemSkin_Costume_InflatableRex_C_ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
