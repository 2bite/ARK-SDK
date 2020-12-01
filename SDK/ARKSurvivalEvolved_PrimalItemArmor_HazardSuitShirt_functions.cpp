// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_HazardSuitShirt_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintUnequipped");

	UPrimalItemArmor_HazardSuitShirt_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitShirt_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintEquipped");

	UPrimalItemArmor_HazardSuitShirt_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HazardSuitShirt_C::ExecuteUbergraph_PrimalItemArmor_HazardSuitShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitShirt");

	UPrimalItemArmor_HazardSuitShirt_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
