// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekClaws_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BPAddedAttachments
// ()

void UPrimalItem_WeaponTekClaws_C::BPAddedAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BPAddedAttachments");

	UPrimalItem_WeaponTekClaws_C_BPAddedAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.CanRunCosmeticEvents
// ()
// Parameters:
// bool                           CanRun                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekClaws_C::CanRunCosmeticEvents(bool* CanRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.CanRunCosmeticEvents");

	UPrimalItem_WeaponTekClaws_C_CanRunCosmeticEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanRun != nullptr)
		*CanRun = params.CanRun;
}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintUnequipped
// ()

void UPrimalItem_WeaponTekClaws_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintUnequipped");

	UPrimalItem_WeaponTekClaws_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintOwnerPosssessed
// ()
// Parameters:
// class AController**            PossessedByController          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekClaws_C::BlueprintOwnerPosssessed(class AController** PossessedByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintOwnerPosssessed");

	UPrimalItem_WeaponTekClaws_C_BlueprintOwnerPosssessed_Params params;
	params.PossessedByController = PossessedByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekClaws_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintEquipped");

	UPrimalItem_WeaponTekClaws_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.ExecuteUbergraph_PrimalItem_WeaponTekClaws
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekClaws_C::ExecuteUbergraph_PrimalItem_WeaponTekClaws(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.ExecuteUbergraph_PrimalItem_WeaponTekClaws");

	UPrimalItem_WeaponTekClaws_C_ExecuteUbergraph_PrimalItem_WeaponTekClaws_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
