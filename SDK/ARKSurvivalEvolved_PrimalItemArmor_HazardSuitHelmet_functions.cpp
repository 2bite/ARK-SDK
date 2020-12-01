// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitHelmet_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintEquipped");

	UPrimalItemArmor_HazardSuitHelmet_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.EquippedBlueprintTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitHelmet_C::EquippedBlueprintTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.EquippedBlueprintTick");

	UPrimalItemArmor_HazardSuitHelmet_C_EquippedBlueprintTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.SetForceGainOxygen
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitHelmet_C::SetForceGainOxygen(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.SetForceGainOxygen");

	UPrimalItemArmor_HazardSuitHelmet_C_SetForceGainOxygen_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_HazardSuitHelmet_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintUnequipped");

	UPrimalItemArmor_HazardSuitHelmet_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitHelmet_C::ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet");

	UPrimalItemArmor_HazardSuitHelmet_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
