// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_HazardSuitBoots_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C.BlueprintUnequipped");

	UPrimalItemArmor_HazardSuitBoots_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitBoots_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C.BlueprintEquipped");

	UPrimalItemArmor_HazardSuitBoots_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitBoots_C::ExecuteUbergraph_PrimalItemArmor_HazardSuitBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitBoots");

	UPrimalItemArmor_HazardSuitBoots_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
