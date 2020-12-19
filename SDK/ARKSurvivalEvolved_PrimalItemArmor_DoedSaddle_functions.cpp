// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DoedSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DoedSaddle.PrimalItemArmor_DoedSaddle_C.ExecuteUbergraph_PrimalItemArmor_DoedSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DoedSaddle_C::ExecuteUbergraph_PrimalItemArmor_DoedSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DoedSaddle.PrimalItemArmor_DoedSaddle_C.ExecuteUbergraph_PrimalItemArmor_DoedSaddle");

	UPrimalItemArmor_DoedSaddle_C_ExecuteUbergraph_PrimalItemArmor_DoedSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
