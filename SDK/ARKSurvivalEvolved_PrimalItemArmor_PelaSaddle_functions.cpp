// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_PelaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_PelaSaddle.PrimalItemArmor_PelaSaddle_C.ExecuteUbergraph_PrimalItemArmor_PelaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_PelaSaddle_C::ExecuteUbergraph_PrimalItemArmor_PelaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_PelaSaddle.PrimalItemArmor_PelaSaddle_C.ExecuteUbergraph_PrimalItemArmor_PelaSaddle");

	UPrimalItemArmor_PelaSaddle_C_ExecuteUbergraph_PrimalItemArmor_PelaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
