// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BasiliskSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BasiliskSaddle.PrimalItemArmor_BasiliskSaddle_C.ExecuteUbergraph_PrimalItemArmor_BasiliskSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BasiliskSaddle_C::ExecuteUbergraph_PrimalItemArmor_BasiliskSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BasiliskSaddle.PrimalItemArmor_BasiliskSaddle_C.ExecuteUbergraph_PrimalItemArmor_BasiliskSaddle");

	UPrimalItemArmor_BasiliskSaddle_C_ExecuteUbergraph_PrimalItemArmor_BasiliskSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
