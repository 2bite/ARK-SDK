// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_IguanodonSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_IguanodonSaddle.PrimalItemArmor_IguanodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_IguanodonSaddle_C::ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_IguanodonSaddle.PrimalItemArmor_IguanodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle");

	UPrimalItemArmor_IguanodonSaddle_C_ExecuteUbergraph_PrimalItemArmor_IguanodonSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
