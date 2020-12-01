// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekSword_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintUnequipped
// ()

void UPrimalItem_WeaponTekSword_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintUnequipped");

	UPrimalItem_WeaponTekSword_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintOwnerPosssessed
// ()
// Parameters:
// class AController**            PossessedByController          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekSword_C::BlueprintOwnerPosssessed(class AController** PossessedByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintOwnerPosssessed");

	UPrimalItem_WeaponTekSword_C_BlueprintOwnerPosssessed_Params params;
	params.PossessedByController = PossessedByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.InitBuff
// ()

void UPrimalItem_WeaponTekSword_C::InitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.InitBuff");

	UPrimalItem_WeaponTekSword_C_InitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekSword_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintEquipped");

	UPrimalItem_WeaponTekSword_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.ExecuteUbergraph_PrimalItem_WeaponTekSword
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekSword_C::ExecuteUbergraph_PrimalItem_WeaponTekSword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.ExecuteUbergraph_PrimalItem_WeaponTekSword");

	UPrimalItem_WeaponTekSword_C_ExecuteUbergraph_PrimalItem_WeaponTekSword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
