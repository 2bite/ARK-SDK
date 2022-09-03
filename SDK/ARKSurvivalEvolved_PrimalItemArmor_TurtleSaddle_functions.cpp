// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TurtleSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TurtleSaddle.PrimalItemArmor_TurtleSaddle_C.ExecuteUbergraph_PrimalItemArmor_TurtleSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TurtleSaddle_C::ExecuteUbergraph_PrimalItemArmor_TurtleSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TurtleSaddle.PrimalItemArmor_TurtleSaddle_C.ExecuteUbergraph_PrimalItemArmor_TurtleSaddle");

	UPrimalItemArmor_TurtleSaddle_C_ExecuteUbergraph_PrimalItemArmor_TurtleSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
