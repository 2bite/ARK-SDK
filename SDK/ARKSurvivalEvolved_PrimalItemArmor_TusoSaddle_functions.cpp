// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TusoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TusoSaddle.PrimalItemArmor_TusoSaddle_C.ExecuteUbergraph_PrimalItemArmor_TusoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TusoSaddle_C::ExecuteUbergraph_PrimalItemArmor_TusoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TusoSaddle.PrimalItemArmor_TusoSaddle_C.ExecuteUbergraph_PrimalItemArmor_TusoSaddle");

	UPrimalItemArmor_TusoSaddle_C_ExecuteUbergraph_PrimalItemArmor_TusoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
