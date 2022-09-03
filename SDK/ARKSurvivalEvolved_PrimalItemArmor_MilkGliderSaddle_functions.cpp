// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MilkGliderSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_MilkGliderSaddle_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.BlueprintUnequipped");

	UPrimalItemArmor_MilkGliderSaddle_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MilkGliderSaddle_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.BlueprintEquipped");

	UPrimalItemArmor_MilkGliderSaddle_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.ExecuteUbergraph_PrimalItemArmor_MilkGliderSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MilkGliderSaddle_C::ExecuteUbergraph_PrimalItemArmor_MilkGliderSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.ExecuteUbergraph_PrimalItemArmor_MilkGliderSaddle");

	UPrimalItemArmor_MilkGliderSaddle_C_ExecuteUbergraph_PrimalItemArmor_MilkGliderSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
