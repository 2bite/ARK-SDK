// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_AnkyloSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_AnkyloSaddle.PrimalItemArmor_AnkyloSaddle_C.ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_AnkyloSaddle_C::ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_AnkyloSaddle.PrimalItemArmor_AnkyloSaddle_C.ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle");

	UPrimalItemArmor_AnkyloSaddle_C_ExecuteUbergraph_PrimalItemArmor_AnkyloSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
