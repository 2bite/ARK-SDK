// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekBoots.PrimalItemArmor_TekBoots_C.ExecuteUbergraph_PrimalItemArmor_TekBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekBoots_C::ExecuteUbergraph_PrimalItemArmor_TekBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekBoots.PrimalItemArmor_TekBoots_C.ExecuteUbergraph_PrimalItemArmor_TekBoots");

	UPrimalItemArmor_TekBoots_C_ExecuteUbergraph_PrimalItemArmor_TekBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
