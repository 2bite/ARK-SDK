// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_StegoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_StegoSaddle.PrimalItemArmor_StegoSaddle_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_StegoSaddle_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_StegoSaddle.PrimalItemArmor_StegoSaddle_C.BlueprintUnequipped");

	UPrimalItemArmor_StegoSaddle_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_StegoSaddle.PrimalItemArmor_StegoSaddle_C.ExecuteUbergraph_PrimalItemArmor_StegoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_StegoSaddle_C::ExecuteUbergraph_PrimalItemArmor_StegoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_StegoSaddle.PrimalItemArmor_StegoSaddle_C.ExecuteUbergraph_PrimalItemArmor_StegoSaddle");

	UPrimalItemArmor_StegoSaddle_C_ExecuteUbergraph_PrimalItemArmor_StegoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
