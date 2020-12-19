// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_CherufeSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_CherufeSaddle.PrimalItemArmor_CherufeSaddle_C.ExecuteUbergraph_PrimalItemArmor_CherufeSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_CherufeSaddle_C::ExecuteUbergraph_PrimalItemArmor_CherufeSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_CherufeSaddle.PrimalItemArmor_CherufeSaddle_C.ExecuteUbergraph_PrimalItemArmor_CherufeSaddle");

	UPrimalItemArmor_CherufeSaddle_C_ExecuteUbergraph_PrimalItemArmor_CherufeSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
