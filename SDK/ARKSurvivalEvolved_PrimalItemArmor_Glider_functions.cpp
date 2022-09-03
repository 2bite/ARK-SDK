// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Glider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.RemovedSkinFromItem
// ()
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Glider_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.RemovedSkinFromItem");

	UPrimalItemArmor_Glider_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.ApplyingSkinOntoItem
// ()
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Glider_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.ApplyingSkinOntoItem");

	UPrimalItemArmor_Glider_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_Glider_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.BlueprintUnequipped");

	UPrimalItemArmor_Glider_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.BlueprintEquipped
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Glider_C::STATIC_BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.BlueprintEquipped");

	UPrimalItemArmor_Glider_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.ExecuteUbergraph_PrimalItemArmor_Glider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Glider_C::ExecuteUbergraph_PrimalItemArmor_Glider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.ExecuteUbergraph_PrimalItemArmor_Glider");

	UPrimalItemArmor_Glider_C_ExecuteUbergraph_PrimalItemArmor_Glider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
