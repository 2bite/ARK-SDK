// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_HazardSuitGloves_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.BlueprintUnequipped");

	UPrimalItemArmor_HazardSuitGloves_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitGloves_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.BlueprintEquipped");

	UPrimalItemArmor_HazardSuitGloves_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitGloves_C::ExecuteUbergraph_PrimalItemArmor_HazardSuitGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitGloves");

	UPrimalItemArmor_HazardSuitGloves_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
