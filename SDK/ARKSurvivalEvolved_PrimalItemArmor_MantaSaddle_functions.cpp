// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MantaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MantaSaddle.PrimalItemArmor_MantaSaddle_C.ExecuteUbergraph_PrimalItemArmor_MantaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MantaSaddle_C::ExecuteUbergraph_PrimalItemArmor_MantaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MantaSaddle.PrimalItemArmor_MantaSaddle_C.ExecuteUbergraph_PrimalItemArmor_MantaSaddle");

	UPrimalItemArmor_MantaSaddle_C_ExecuteUbergraph_PrimalItemArmor_MantaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
