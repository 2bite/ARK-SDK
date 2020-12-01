// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_YutySaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_YutySaddle.PrimalItemArmor_YutySaddle_C.ExecuteUbergraph_PrimalItemArmor_YutySaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_YutySaddle_C::ExecuteUbergraph_PrimalItemArmor_YutySaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_YutySaddle.PrimalItemArmor_YutySaddle_C.ExecuteUbergraph_PrimalItemArmor_YutySaddle");

	UPrimalItemArmor_YutySaddle_C_ExecuteUbergraph_PrimalItemArmor_YutySaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
