// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_HazardSuitPants_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.BlueprintUnequipped");

	UPrimalItemArmor_HazardSuitPants_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitPants_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.BlueprintEquipped");

	UPrimalItemArmor_HazardSuitPants_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitPants_C::ExecuteUbergraph_PrimalItemArmor_HazardSuitPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitPants");

	UPrimalItemArmor_HazardSuitPants_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
