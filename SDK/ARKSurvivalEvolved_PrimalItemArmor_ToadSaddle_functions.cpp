// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ToadSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ToadSaddle.PrimalItemArmor_ToadSaddle_C.ExecuteUbergraph_PrimalItemArmor_ToadSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ToadSaddle_C::ExecuteUbergraph_PrimalItemArmor_ToadSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ToadSaddle.PrimalItemArmor_ToadSaddle_C.ExecuteUbergraph_PrimalItemArmor_ToadSaddle");

	UPrimalItemArmor_ToadSaddle_C_ExecuteUbergraph_PrimalItemArmor_ToadSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
