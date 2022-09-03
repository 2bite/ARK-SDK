// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_QuetzSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_QuetzSaddle.PrimalItemArmor_QuetzSaddle_C.ExecuteUbergraph_PrimalItemArmor_QuetzSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_QuetzSaddle_C::ExecuteUbergraph_PrimalItemArmor_QuetzSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_QuetzSaddle.PrimalItemArmor_QuetzSaddle_C.ExecuteUbergraph_PrimalItemArmor_QuetzSaddle");

	UPrimalItemArmor_QuetzSaddle_C_ExecuteUbergraph_PrimalItemArmor_QuetzSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
