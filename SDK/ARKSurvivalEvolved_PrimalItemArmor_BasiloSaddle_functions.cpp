// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BasiloSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BasiloSaddle.PrimalItemArmor_BasiloSaddle_C.ExecuteUbergraph_PrimalItemArmor_BasiloSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BasiloSaddle_C::ExecuteUbergraph_PrimalItemArmor_BasiloSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BasiloSaddle.PrimalItemArmor_BasiloSaddle_C.ExecuteUbergraph_PrimalItemArmor_BasiloSaddle");

	UPrimalItemArmor_BasiloSaddle_C_ExecuteUbergraph_PrimalItemArmor_BasiloSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
