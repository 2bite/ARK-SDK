// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_PachySaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_PachySaddle.PrimalItemArmor_PachySaddle_C.ExecuteUbergraph_PrimalItemArmor_PachySaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_PachySaddle_C::ExecuteUbergraph_PrimalItemArmor_PachySaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_PachySaddle.PrimalItemArmor_PachySaddle_C.ExecuteUbergraph_PrimalItemArmor_PachySaddle");

	UPrimalItemArmor_PachySaddle_C_ExecuteUbergraph_PrimalItemArmor_PachySaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
