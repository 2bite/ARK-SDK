// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_AmargaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_AmargaSaddle.PrimalItemArmor_AmargaSaddle_C.ExecuteUbergraph_PrimalItemArmor_AmargaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_AmargaSaddle_C::ExecuteUbergraph_PrimalItemArmor_AmargaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_AmargaSaddle.PrimalItemArmor_AmargaSaddle_C.ExecuteUbergraph_PrimalItemArmor_AmargaSaddle");

	UPrimalItemArmor_AmargaSaddle_C_ExecuteUbergraph_PrimalItemArmor_AmargaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
