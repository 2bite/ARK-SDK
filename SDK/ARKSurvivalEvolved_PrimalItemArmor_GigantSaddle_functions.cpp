// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GigantSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GigantSaddle.PrimalItemArmor_GigantSaddle_C.ExecuteUbergraph_PrimalItemArmor_GigantSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GigantSaddle_C::ExecuteUbergraph_PrimalItemArmor_GigantSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GigantSaddle.PrimalItemArmor_GigantSaddle_C.ExecuteUbergraph_PrimalItemArmor_GigantSaddle");

	UPrimalItemArmor_GigantSaddle_C_ExecuteUbergraph_PrimalItemArmor_GigantSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
