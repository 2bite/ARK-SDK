// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Base_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalItemArmor_Base_Tek_C::BPGetMaxAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo");

	UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
// ()
// Parameters:
// bool                           IsInfinite                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::IsInfiniteAmmo(bool* IsInfinite)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo");

	UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInfinite != nullptr)
		*IsInfinite = params.IsInfinite;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
// ()
// Parameters:
// class UPrimalItem**            ToOwnerItem                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem");

	UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params params;
	params.ToOwnerItem = ToOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
// ()
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem");

	UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterCharacter*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TekArmorBuff                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::STATIC_GetInternalMapRestrictedTekArmorBuff(class AShooterCharacter* OwningPlayer, class UClass** TekArmorBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff");

	UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params params;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TekArmorBuff != nullptr)
		*TekArmorBuff = params.TekArmorBuff;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
// ()
// Parameters:
// class UClass*                  ResolvedTekArmorBuff           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::GetResolvedTekArmorBuff(class UClass** ResolvedTekArmorBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff");

	UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResolvedTekArmorBuff != nullptr)
		*ResolvedTekArmorBuff = params.ResolvedTekArmorBuff;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
// ()

void UPrimalItemArmor_Base_Tek_C::FillEmptyArmorElementWhenAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable");

	UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
// ()

void UPrimalItemArmor_Base_Tek_C::InitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff");

	UPrimalItemArmor_Base_Tek_C_InitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
// ()
// Parameters:
// class AController**            PossessedByController          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::BlueprintOwnerPosssessed(class AController** PossessedByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed");

	UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params params;
	params.PossessedByController = PossessedByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_Base_Tek_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped");

	UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemArmor_Base_Tek_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText");

	UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
// ()
// Parameters:
// int                            AmountToDecreaseBy             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreventCheckingInventory       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDecrease                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::Can_Element_Decrease(int AmountToDecreaseBy, bool PreventCheckingInventory, bool* CanDecrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease");

	UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params params;
	params.AmountToDecreaseBy = AmountToDecreaseBy;
	params.PreventCheckingInventory = PreventCheckingInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDecrease != nullptr)
		*CanDecrease = params.CanDecrease;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped");

	UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
// ()
// Parameters:
// int                            AmountToDecreaseBy             (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::TryToDecreaseElement(int AmountToDecreaseBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement");

	UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params params;
	params.AmountToDecreaseBy = AmountToDecreaseBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.SetElementToMax
// ()

void UPrimalItemArmor_Base_Tek_C::SetElementToMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.SetElementToMax");

	UPrimalItemArmor_Base_Tek_C_SetElementToMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
// ()
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::IncreaseElement(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement");

	UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinApplied
// ()

void UPrimalItemArmor_Base_Tek_C::TekArmorSkinApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinApplied");

	UPrimalItemArmor_Base_Tek_C_TekArmorSkinApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinRemoved
// ()

void UPrimalItemArmor_Base_Tek_C::TekArmorSkinRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinRemoved");

	UPrimalItemArmor_Base_Tek_C_TekArmorSkinRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Base_Tek_C::ExecuteUbergraph_PrimalItemArmor_Base_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek");

	UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
