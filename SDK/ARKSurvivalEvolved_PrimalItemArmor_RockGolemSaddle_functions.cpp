// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RockGolemSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RockGolemSaddle.PrimalItemArmor_RockGolemSaddle_C.ExecuteUbergraph_PrimalItemArmor_RockGolemSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RockGolemSaddle_C::ExecuteUbergraph_PrimalItemArmor_RockGolemSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RockGolemSaddle.PrimalItemArmor_RockGolemSaddle_C.ExecuteUbergraph_PrimalItemArmor_RockGolemSaddle");

	UPrimalItemArmor_RockGolemSaddle_C_ExecuteUbergraph_PrimalItemArmor_RockGolemSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
