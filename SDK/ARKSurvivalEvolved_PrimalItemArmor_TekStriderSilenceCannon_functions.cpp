// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderSilenceCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderSilenceCannon.PrimalItemArmor_TekStriderSilenceCannon_C.ExecuteUbergraph_PrimalItemArmor_TekStriderSilenceCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderSilenceCannon_C::ExecuteUbergraph_PrimalItemArmor_TekStriderSilenceCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderSilenceCannon.PrimalItemArmor_TekStriderSilenceCannon_C.ExecuteUbergraph_PrimalItemArmor_TekStriderSilenceCannon");

	UPrimalItemArmor_TekStriderSilenceCannon_C_ExecuteUbergraph_PrimalItemArmor_TekStriderSilenceCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
