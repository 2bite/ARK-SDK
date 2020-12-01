// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ParaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ParaSaddle.PrimalItemArmor_ParaSaddle_C.ExecuteUbergraph_PrimalItemArmor_ParaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ParaSaddle_C::ExecuteUbergraph_PrimalItemArmor_ParaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ParaSaddle.PrimalItemArmor_ParaSaddle_C.ExecuteUbergraph_PrimalItemArmor_ParaSaddle");

	UPrimalItemArmor_ParaSaddle_C_ExecuteUbergraph_PrimalItemArmor_ParaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
