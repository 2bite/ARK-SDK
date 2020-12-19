// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SpinoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SpinoSaddle.PrimalItemArmor_SpinoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpinoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SpinoSaddle_C::ExecuteUbergraph_PrimalItemArmor_SpinoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SpinoSaddle.PrimalItemArmor_SpinoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpinoSaddle");

	UPrimalItemArmor_SpinoSaddle_C_ExecuteUbergraph_PrimalItemArmor_SpinoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
