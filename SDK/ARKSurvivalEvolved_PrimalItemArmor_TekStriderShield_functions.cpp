// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderShield.PrimalItemArmor_TekStriderShield_C.ExecuteUbergraph_PrimalItemArmor_TekStriderShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderShield_C::ExecuteUbergraph_PrimalItemArmor_TekStriderShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderShield.PrimalItemArmor_TekStriderShield_C.ExecuteUbergraph_PrimalItemArmor_TekStriderShield");

	UPrimalItemArmor_TekStriderShield_C_ExecuteUbergraph_PrimalItemArmor_TekStriderShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
