// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderOnesidedShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderOnesidedShield.PrimalItemArmor_TekStriderOnesidedShield_C.ExecuteUbergraph_PrimalItemArmor_TekStriderOnesidedShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderOnesidedShield_C::ExecuteUbergraph_PrimalItemArmor_TekStriderOnesidedShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderOnesidedShield.PrimalItemArmor_TekStriderOnesidedShield_C.ExecuteUbergraph_PrimalItemArmor_TekStriderOnesidedShield");

	UPrimalItemArmor_TekStriderOnesidedShield_C_ExecuteUbergraph_PrimalItemArmor_TekStriderOnesidedShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
