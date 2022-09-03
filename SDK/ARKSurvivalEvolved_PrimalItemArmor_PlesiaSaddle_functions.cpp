// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_PlesiaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_PlesiaSaddle.PrimalItemArmor_PlesiaSaddle_C.ExecuteUbergraph_PrimalItemArmor_PlesiaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_PlesiaSaddle_C::ExecuteUbergraph_PrimalItemArmor_PlesiaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_PlesiaSaddle.PrimalItemArmor_PlesiaSaddle_C.ExecuteUbergraph_PrimalItemArmor_PlesiaSaddle");

	UPrimalItemArmor_PlesiaSaddle_C_ExecuteUbergraph_PrimalItemArmor_PlesiaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
