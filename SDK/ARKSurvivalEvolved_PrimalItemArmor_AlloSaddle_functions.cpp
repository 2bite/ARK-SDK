// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_AlloSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_AlloSaddle.PrimalItemArmor_AlloSaddle_C.ExecuteUbergraph_PrimalItemArmor_AlloSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_AlloSaddle_C::ExecuteUbergraph_PrimalItemArmor_AlloSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_AlloSaddle.PrimalItemArmor_AlloSaddle_C.ExecuteUbergraph_PrimalItemArmor_AlloSaddle");

	UPrimalItemArmor_AlloSaddle_C_ExecuteUbergraph_PrimalItemArmor_AlloSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
