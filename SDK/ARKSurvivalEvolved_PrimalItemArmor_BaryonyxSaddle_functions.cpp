// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BaryonyxSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BaryonyxSaddle.PrimalItemArmor_BaryonyxSaddle_C.ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BaryonyxSaddle_C::ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BaryonyxSaddle.PrimalItemArmor_BaryonyxSaddle_C.ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle");

	UPrimalItemArmor_BaryonyxSaddle_C_ExecuteUbergraph_PrimalItemArmor_BaryonyxSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
