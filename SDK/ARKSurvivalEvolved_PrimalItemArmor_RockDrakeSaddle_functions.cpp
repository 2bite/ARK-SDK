// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RockDrakeSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RockDrakeSaddle.PrimalItemArmor_RockDrakeSaddle_C.ExecuteUbergraph_PrimalItemArmor_RockDrakeSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RockDrakeSaddle_C::ExecuteUbergraph_PrimalItemArmor_RockDrakeSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RockDrakeSaddle.PrimalItemArmor_RockDrakeSaddle_C.ExecuteUbergraph_PrimalItemArmor_RockDrakeSaddle");

	UPrimalItemArmor_RockDrakeSaddle_C_ExecuteUbergraph_PrimalItemArmor_RockDrakeSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
