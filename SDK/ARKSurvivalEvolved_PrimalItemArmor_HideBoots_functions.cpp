// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HideBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HideBoots.PrimalItemArmor_HideBoots_C.ExecuteUbergraph_PrimalItemArmor_HideBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HideBoots_C::ExecuteUbergraph_PrimalItemArmor_HideBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HideBoots.PrimalItemArmor_HideBoots_C.ExecuteUbergraph_PrimalItemArmor_HideBoots");

	UPrimalItemArmor_HideBoots_C_ExecuteUbergraph_PrimalItemArmor_HideBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
