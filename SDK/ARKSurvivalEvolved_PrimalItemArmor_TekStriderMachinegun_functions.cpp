// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderMachinegun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderMachinegun.PrimalItemArmor_TekStriderMachinegun_C.ExecuteUbergraph_PrimalItemArmor_TekStriderMachinegun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderMachinegun_C::ExecuteUbergraph_PrimalItemArmor_TekStriderMachinegun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderMachinegun.PrimalItemArmor_TekStriderMachinegun_C.ExecuteUbergraph_PrimalItemArmor_TekStriderMachinegun");

	UPrimalItemArmor_TekStriderMachinegun_C_ExecuteUbergraph_PrimalItemArmor_TekStriderMachinegun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
