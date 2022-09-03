// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SpineyLizardSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SpineyLizardSaddle.PrimalItemArmor_SpineyLizardSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpineyLizardSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SpineyLizardSaddle_C::ExecuteUbergraph_PrimalItemArmor_SpineyLizardSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SpineyLizardSaddle.PrimalItemArmor_SpineyLizardSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpineyLizardSaddle");

	UPrimalItemArmor_SpineyLizardSaddle_C_ExecuteUbergraph_PrimalItemArmor_SpineyLizardSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
