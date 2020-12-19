// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SpineyLizardPromoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SpineyLizardPromoSaddle.PrimalItemArmor_SpineyLizardPromoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SpineyLizardPromoSaddle_C::ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SpineyLizardPromoSaddle.PrimalItemArmor_SpineyLizardPromoSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle");

	UPrimalItemArmor_SpineyLizardPromoSaddle_C_ExecuteUbergraph_PrimalItemArmor_SpineyLizardPromoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
