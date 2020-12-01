// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GachaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GachaSaddle.PrimalItemArmor_GachaSaddle_C.ExecuteUbergraph_PrimalItemArmor_GachaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GachaSaddle_C::ExecuteUbergraph_PrimalItemArmor_GachaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GachaSaddle.PrimalItemArmor_GachaSaddle_C.ExecuteUbergraph_PrimalItemArmor_GachaSaddle");

	UPrimalItemArmor_GachaSaddle_C_ExecuteUbergraph_PrimalItemArmor_GachaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
