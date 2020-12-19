// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_NightVisionGoggles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_NightVisionGoggles.PrimalItemArmor_NightVisionGoggles_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_NightVisionGoggles_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_NightVisionGoggles.PrimalItemArmor_NightVisionGoggles_C.BlueprintEquipped");

	UPrimalItemArmor_NightVisionGoggles_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_NightVisionGoggles.PrimalItemArmor_NightVisionGoggles_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_NightVisionGoggles_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_NightVisionGoggles.PrimalItemArmor_NightVisionGoggles_C.BlueprintUnequipped");

	UPrimalItemArmor_NightVisionGoggles_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_NightVisionGoggles.PrimalItemArmor_NightVisionGoggles_C.ExecuteUbergraph_PrimalItemArmor_NightVisionGoggles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_NightVisionGoggles_C::ExecuteUbergraph_PrimalItemArmor_NightVisionGoggles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_NightVisionGoggles.PrimalItemArmor_NightVisionGoggles_C.ExecuteUbergraph_PrimalItemArmor_NightVisionGoggles");

	UPrimalItemArmor_NightVisionGoggles_C_ExecuteUbergraph_PrimalItemArmor_NightVisionGoggles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
