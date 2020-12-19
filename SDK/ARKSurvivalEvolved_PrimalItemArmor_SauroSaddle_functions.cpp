// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SauroSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SauroSaddle.PrimalItemArmor_SauroSaddle_C.ExecuteUbergraph_PrimalItemArmor_SauroSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SauroSaddle_C::ExecuteUbergraph_PrimalItemArmor_SauroSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SauroSaddle.PrimalItemArmor_SauroSaddle_C.ExecuteUbergraph_PrimalItemArmor_SauroSaddle");

	UPrimalItemArmor_SauroSaddle_C_ExecuteUbergraph_PrimalItemArmor_SauroSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
