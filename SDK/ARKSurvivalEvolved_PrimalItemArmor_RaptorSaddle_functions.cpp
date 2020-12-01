// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RaptorSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RaptorSaddle.PrimalItemArmor_RaptorSaddle_C.ExecuteUbergraph_PrimalItemArmor_RaptorSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RaptorSaddle_C::ExecuteUbergraph_PrimalItemArmor_RaptorSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RaptorSaddle.PrimalItemArmor_RaptorSaddle_C.ExecuteUbergraph_PrimalItemArmor_RaptorSaddle");

	UPrimalItemArmor_RaptorSaddle_C_ExecuteUbergraph_PrimalItemArmor_RaptorSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
