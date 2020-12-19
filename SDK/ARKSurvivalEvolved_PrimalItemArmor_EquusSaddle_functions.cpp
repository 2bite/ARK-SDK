// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_EquusSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_EquusSaddle_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C.BlueprintEquipped");

	UPrimalItemArmor_EquusSaddle_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_EquusSaddle_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C.BlueprintUnequipped");

	UPrimalItemArmor_EquusSaddle_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C.ExecuteUbergraph_PrimalItemArmor_EquusSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_EquusSaddle_C::ExecuteUbergraph_PrimalItemArmor_EquusSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C.ExecuteUbergraph_PrimalItemArmor_EquusSaddle");

	UPrimalItemArmor_EquusSaddle_C_ExecuteUbergraph_PrimalItemArmor_EquusSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
