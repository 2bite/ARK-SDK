// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TapejaraSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TapejaraSaddle.PrimalItemArmor_TapejaraSaddle_C.ExecuteUbergraph_PrimalItemArmor_TapejaraSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TapejaraSaddle_C::ExecuteUbergraph_PrimalItemArmor_TapejaraSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TapejaraSaddle.PrimalItemArmor_TapejaraSaddle_C.ExecuteUbergraph_PrimalItemArmor_TapejaraSaddle");

	UPrimalItemArmor_TapejaraSaddle_C_ExecuteUbergraph_PrimalItemArmor_TapejaraSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
