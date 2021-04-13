// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TekHelmet_V2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ApplyingSkinOntoItem
// ()
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekHelmet_V2_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ApplyingSkinOntoItem");

	UPrimalItemSkin_TekHelmet_V2_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.RemovedSkinFromItem
// ()
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekHelmet_V2_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.RemovedSkinFromItem");

	UPrimalItemSkin_TekHelmet_V2_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.InitBuff
// ()

void UPrimalItemSkin_TekHelmet_V2_C::InitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.InitBuff");

	UPrimalItemSkin_TekHelmet_V2_C_InitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekHelmet_V2_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintEquipped");

	UPrimalItemSkin_TekHelmet_V2_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintOwnerPosssessed
// ()
// Parameters:
// class AController**            PossessedByController          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekHelmet_V2_C::BlueprintOwnerPosssessed(class AController** PossessedByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintOwnerPosssessed");

	UPrimalItemSkin_TekHelmet_V2_C_BlueprintOwnerPosssessed_Params params;
	params.PossessedByController = PossessedByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintUnequipped
// ()

void UPrimalItemSkin_TekHelmet_V2_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintUnequipped");

	UPrimalItemSkin_TekHelmet_V2_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekHelmet_V2_C::ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2");

	UPrimalItemSkin_TekHelmet_V2_C_ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
