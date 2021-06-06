// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HyaenodonSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_HyaenodonSaddle_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.BlueprintUnequipped");

	UPrimalItemArmor_HyaenodonSaddle_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HyaenodonSaddle_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.BlueprintEquipped");

	UPrimalItemArmor_HyaenodonSaddle_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_HyaenodonSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HyaenodonSaddle_C::ExecuteUbergraph_PrimalItemArmor_HyaenodonSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_HyaenodonSaddle");

	UPrimalItemArmor_HyaenodonSaddle_C_ExecuteUbergraph_PrimalItemArmor_HyaenodonSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
