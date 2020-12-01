// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_OwlSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_OwlSaddle.PrimalItemArmor_OwlSaddle_C.ExecuteUbergraph_PrimalItemArmor_OwlSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_OwlSaddle_C::ExecuteUbergraph_PrimalItemArmor_OwlSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_OwlSaddle.PrimalItemArmor_OwlSaddle_C.ExecuteUbergraph_PrimalItemArmor_OwlSaddle");

	UPrimalItemArmor_OwlSaddle_C_ExecuteUbergraph_PrimalItemArmor_OwlSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
