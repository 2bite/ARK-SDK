// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_StagSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_StagSaddle.PrimalItemArmor_StagSaddle_C.ExecuteUbergraph_PrimalItemArmor_StagSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_StagSaddle_C::ExecuteUbergraph_PrimalItemArmor_StagSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_StagSaddle.PrimalItemArmor_StagSaddle_C.ExecuteUbergraph_PrimalItemArmor_StagSaddle");

	UPrimalItemArmor_StagSaddle_C_ExecuteUbergraph_PrimalItemArmor_StagSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif